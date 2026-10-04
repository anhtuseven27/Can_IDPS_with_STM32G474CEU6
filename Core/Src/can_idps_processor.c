#include "can_idps_processor.h"
#include <string.h>

// Bảng lưu timestamp của 2048 ID
static uint32_t last_timestamp_table[CAN_STD_ID_MAX];

// Bảng LUT ánh xạ byte [0..255] sang INT8 [-128..127]
static int8_t payload_lut[256];

// Tính nhanh log2(x) bằng lệnh asm __CLZ (1 chu kỳ CPU)
static inline uint32_t fast_log2_q4(uint32_t val) {
    if (val == 0) return 0;
    uint32_t lz = __builtin_clz(val);
    uint32_t integer_part = 31 - lz;
    uint32_t frac_part = (val << lz) >> (32 - 4);
    return (integer_part << 4) | (frac_part & 0x0F);
}

static inline int8_t clamp_to_int8(int32_t val) {
    if (val > 127)  return 127;
    if (val < -128) return -128;
    return (int8_t)val;
}

void CAN_IDPS_Init(void) {
    memset((void*)last_timestamp_table, 0, sizeof(last_timestamp_table));
    for (int i = 0; i < 256; i++) {
        payload_lut[i] = (int8_t)(i - 128);
    }
}

void CAN_IDPS_ExtractFeatures(uint32_t can_id, uint8_t dlc, const uint8_t *data,
                              uint32_t current_time_us, int8_t *out_features)
{
    uint32_t safe_id = can_id & 0x7FF;

    // 1. Tính toán IAT
    uint32_t prev_time = last_timestamp_table[safe_id];
    uint32_t delta_t_us = 0;
    if (prev_time != 0) {
        delta_t_us = current_time_us - prev_time;
    } else {
        delta_t_us = 100000; // Frame đầu tiên gán 100ms
    }
    last_timestamp_table[safe_id] = current_time_us;

    // Feature 0: CAN ID (0..2047) -> [-128, 127]
    out_features[0] = clamp_to_int8(((int32_t)safe_id * 255 / 2047) - 128);

    // Feature 1: DLC (0..8) -> [-128, 127]
    out_features[1] = clamp_to_int8(((int32_t)dlc * 255 / 8) - 128);

    // Features 2..9: D0..D7 qua bảng LUT
    for (int i = 0; i < 8; i++) {
        if (i < dlc) {
            out_features[2 + i] = payload_lut[data[i]];
        } else {
            out_features[2 + i] = -128; // Padding nếu DLC < 8
        }
    }

    // Feature 10: log2(IAT)
    uint32_t log_val = fast_log2_q4(delta_t_us);
    out_features[10] = clamp_to_int8(((int32_t)log_val * 255 / 320) - 128);
}
