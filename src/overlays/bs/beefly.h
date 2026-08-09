#ifndef __OVERLAY_BS_BEEFLY_H__
#define __OVERLAY_BS_BEEFLY_H__

#include <ultra64.h>

#include "common.h"
#include "player.h"

#include "overlays/ba/anim.h"
#include "overlays/bs/state.h"
#include "overlays/ba/playerstate.h"
#include "overlays/ba/flag.h"
#include "overlays/ba/physics.h"
#include "overlays/ba/stick.h"
#include "overlays/ba/boost.h"
#include "overlays/ba/buzz.h"
#include "overlays/ba/fly.h"
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

// BSS?
extern s32 D_80800DC0_bsbeefly;
extern s32 D_80800DE8_bsbeefly;
extern s32 D_80800E18_bsbeefly[];
extern s32 D_80800E50_bsbeefly[];
extern s32 D_80800E60_bsbeefly[];
extern s32 D_80800E70_bsbeefly[];
extern s32 D_80800E80_bsbeefly[];
extern f32 D_80800E28_bsbeefly[5];
extern f32 D_80800E3C_bsbeefly[5];

#endif // __OVERLAY_BS_BEEFLY_H__
