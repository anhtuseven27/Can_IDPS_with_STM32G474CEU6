#ifndef INC_CAN_IDPS_PROCESSOR_H_
#define INC_CAN_IDPS_PROCESSOR_H_

#include <stdint.h>
#include "stm32g4xx_hal.h"

#define CAN_STD_ID_MAX         2048U
#define FEATURE_VECTOR_SIZE    11U

typedef enum {
    CLASS_NORMAL = 0,
    CLASS_DOS    = 1,
    CLASS_FUZZY  = 2,
    CLASS_SPOOF  = 3
} AttackClass_t;

void CAN_IDPS_Init(void);
void CAN_IDPS_ExtractFeatures(uint32_t can_id, uint8_t dlc, const uint8_t *data,
                              uint32_t current_time_us, int8_t *out_features);

#endif /* INC_CAN_IDPS_PROCESSOR_H_ */
