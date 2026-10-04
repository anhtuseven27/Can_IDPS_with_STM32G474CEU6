/**
  ******************************************************************************
  * @file    can_idps_net_data_params.c
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

#include "can_idps_net_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_can_idps_net_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_can_idps_net_weights_array_u64[56] = {
  0x510f947f4324d360U, 0x7ffb07141a6b066cU, 0xf8811acbe61301d3U, 0x92ffdcce24dffd2aU,
  0x35b4214642e53fd7U, 0xdabc413340597f6cU, 0xf6d6811edcdf0349U, 0xfa103be48109070eU,
  0x81fdf6f11fe4ce22U, 0xed02d50df244f6ecU, 0x2ab8481fbfaf9f9U, 0xf5f3f4050d29fd01U,
  0xe581e1e05bfbfe81U, 0xe081f93f086d70ccU, 0xe74d4905f63343fbU, 0x9f516ddb7fb001aU,
  0x22952d0d0f168195U, 0xed72dbc7fad459eU, 0x81c4ef130200c2fdU, 0x17453568f240f914U,
  0xef00245f7f5b32f8U, 0xbbbe3d0d7f3e00b3U, 0x1ab0ffffc012U, 0xffffe587fffff494U,
  0xffffff0d00002ae1U, 0x1df00002220U, 0xffffdf28000005dcU, 0xb8bffffdc08U,
  0xffffff2700002c8dU, 0xfffff32d00000965U, 0x7fff0914f5040115U, 0xfae0f9062904fc1fU,
  0x61342532e909f2e5U, 0x1fd7f2b20eccb35U, 0xc7395d2fe6f62101U, 0x28d81d1d7fd6f259U,
  0x81151afa07030607U, 0x22faa81861d11930U, 0xea3848d6ea259b1cU, 0xafcd87811c541ee6U,
  0x8103f004e1fa12d7U, 0xfb1594f722f8e3cbU, 0xb037bb40fafdfadcU, 0x81febec3a10ee2caU,
  0x2b4972b0ee8270bU, 0xb9321ab48675e881U, 0xf8ffffffc5U, 0xffffff68000001e5U,
  0x210fffffd57U, 0x4a000000175U, 0xd5d421ef1e260081U, 0x81e391f7b005085cU,
  0x3f594509229a81e2U, 0xf9ceb8ff81ee25bfU, 0xfffffd09fffffd93U, 0xfffffed9000003ecU,
};


ai_handle g_can_idps_net_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_can_idps_net_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

