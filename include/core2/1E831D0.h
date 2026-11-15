#ifndef __CORE2_1E831D0_H__
#define __CORE2_1E831D0_H__

#include "common.h"
#include "core1/1E29B60.h"
#include "core1/1E2D890.h"
#include "core2/1E80A70.h"
#include "core2/1EC3810.h"
#include "maps.h"

typedef enum {
	DEMO_1_JIGGYWIGGY = 1,
	DEMO_2_ATTRACT = 2
} DemoState;


void func_800A9924(s16, u8);
void func_800A9A14();
void func_800A9B84(void);
void func_800A9B8C(s32, s32);
void demo_playDemo(DemoState, MapId, s32);
void func_800A9C50();
s32 func_800A9C98();

#endif
