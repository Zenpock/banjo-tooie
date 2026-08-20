#ifndef __BS_BEEFLY_H__
#define __BS_BEEFLY_H__

#include <ultra64.h>

#include "common.h"
#include "player.h"

#include "overlays/ba/anim.h"
#include "overlays/bs/state.h"
#include "overlays/ba/playerstate.h"
#include "overlays/ba/flag.h"
#include "overlays/ba/physics.h"
#include "overlays/ba/stick.h"
#include "ba/boost.h"
#include "overlays/ba/buzz.h"
#include "ba/fly.h"
#include "overlays/ba/roll.h"
#include "overlays/bs/rest.h"
#include "overlays/ba/key.h"

#include "overlays/ba/bee.h"

#include "core1/1E2B200.h"

#include "core2/anctrl.h"

#include "core2/1E6B900.h"
#include "core2/1E75710.h"
#include "core2/1E75920.h"
#include "core2/1E76360.h"
#include "core2/1E76CC0.h"
#include "core2/1E8F430.h"
#include "core2/1E93440.h"
#include "core2/1EB5980.h"
#include "core2/1ECA640.h"
#include "core2/1EB5980.h"

// Entrypoints
extern void _ncbafly_entrypoint_4(PlayerState*, f32, f32, f32);
extern void _babuzz_entrypoint_1(PlayerState*);
extern void _babuzz_entrypoint_2(PlayerState*);
extern void _babuzz_entrypoint_3(PlayerState*);
extern void _babuzz_entrypoint_4(PlayerState*, f32);
extern f32 _bafpctrl_entrypoint_3(PlayerState*);
extern void _bafpctrl_entrypoint_18(PlayerState*, s32);
extern void _bsbee_entrypoint_2(PlayerState*);

// Code
void func_80800000_bsbeefly(PlayerState*);
void func_808000A4_bsbeefly(PlayerState*);
void func_8080010C_bsbeefly(PlayerState*);
void func_808001C4_bsbeefly(PlayerState*);
void func_808002B0_bsbeefly(PlayerState*);
s32 bsbeefly_entrypoint_0(s32);
void func_808002E4_bsbeefly(PlayerState*);
void func_8080039C_bsbeefly(PlayerState*);
void func_80800480_bsbeefly(PlayerState*);
void func_808005B0_bsbeefly(PlayerState*);
void func_80800600_bsbeefly(PlayerState*);
void func_80800708_bsbeefly(PlayerState*);
void func_80800B18_bsbeefly(PlayerState*);
s32 bsbeefly_entrypoint_1(s32);
void func_80800B54_bsbeefly(PlayerState*);
void func_80800BA4_bsbeefly(PlayerState*);
void func_80800BE8_bsbeefly(PlayerState*);
s32 bsbeefly_entrypoint_2(s32);
void func_80800C2C_bsbeefly(PlayerState*);
void func_80800C5C_bsbeefly(PlayerState*);
void func_80800C94_bsbeefly(PlayerState*);
s32 bsbeefly_entrypoint_3(s32);
void func_80800CE0_bsbeefly(PlayerState*);
void func_80800D10_bsbeefly(PlayerState*);
void func_80800D50_bsbeefly(PlayerState*);
s32 bsbeefly_entrypoint_4(s32);

#endif // __BS_BEEFLY_H__
