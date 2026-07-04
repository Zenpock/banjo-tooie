#ifndef __CORE2_1EE27C0_H__
#define __CORE2_1EE27C0_H__

#include "common.h"
#include "core2/1EA0210.h"
#include "core2/1EB5980.h"
#include "core2/1EC4CC0.h"
#include "core2/1ECE0B0.h"
#include "core2/1EDA900.h"
#include "core2/1EDC7B0.h"
#include "core2/1EDCA30.h"
#include "core2/1EDFED0.h"

void* func_80108ED0();
void func_80109FE8(Actor*, s32);
void func_8010A3E8(Actor*, f32);
//Disable Actor Collision
s32 func_8010A570(Actor*);
//Enable Actor Collision
s32 func_8010A590(Actor*);
//Set Actor Collision
s32 func_8010A5B0(Actor*, s32);
//Get Actor Collision State
u32 func_8010A610(Actor*);
void func_8010A624(Actor*);

#endif
