/**
  ******************************************************************************
  * @file    can_idps_net_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2026-09-15T02:30:50+0700
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef CAN_IDPS_NET_DATA_PARAMS_H
#define CAN_IDPS_NET_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_CAN_IDPS_NET_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_can_idps_net_data_weights_params[1]))
*/

#define AI_CAN_IDPS_NET_DATA_CONFIG               (NULL)


#define AI_CAN_IDPS_NET_DATA_ACTIVATIONS_SIZES \
  { 252, }
#define AI_CAN_IDPS_NET_DATA_ACTIVATIONS_SIZE     (252)
#define AI_CAN_IDPS_NET_DATA_ACTIVATIONS_COUNT    (1)
#define AI_CAN_IDPS_NET_DATA_ACTIVATION_1_SIZE    (252)



#define AI_CAN_IDPS_NET_DATA_WEIGHTS_SIZES \
  { 448, }
#define AI_CAN_IDPS_NET_DATA_WEIGHTS_SIZE         (448)
#define AI_CAN_IDPS_NET_DATA_WEIGHTS_COUNT        (1)
#define AI_CAN_IDPS_NET_DATA_WEIGHT_1_SIZE        (448)



#define AI_CAN_IDPS_NET_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_can_idps_net_activations_table[1])

extern ai_handle g_can_idps_net_activations_table[1 + 2];



#define AI_CAN_IDPS_NET_DATA_WEIGHTS_TABLE_GET() \
  (&g_can_idps_net_weights_table[1])

extern ai_handle g_can_idps_net_weights_table[1 + 2];


#endif    /* CAN_IDPS_NET_DATA_PARAMS_H */
