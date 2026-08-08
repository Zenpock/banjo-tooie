#ifndef __CORE2_1E6B900_H__
#define __CORE2_1E6B900_H__

#include <ultra64.h>

#include "overlays/ba/playerstate.h"
#include "core2/physics.h"
#include "core2/anctrl.h"

#include "core2/1E64F00.h"
#include "core2/1E75B90.h"
#include "core2/1E79FD0.h"
#include "core2/1E7BAB0.h"
#include "core2/1E7D460.h"
#include "core2/1E7F6A0.h"
#include "core2/1E80A70.h"
#include "core2/1E875C0.h"
#include "core2/1E8A670.h"
#include "core2/1E8BFE0.h"
#include "core2/1EAAD80.h"
#include "core2/1EABAC0.h"
#include "core2/1EAF950.h"
#include "core2/1EB57A0.h"
#include "core2/1EB5E70.h"
#include "core2/1EBA250.h"
#include "core2/1ECBCC0.h"
#include "core2/1ECE0B0.h"
#include "core2/1ED9D70.h"
#include "core2/1EE1510.h"
#include "ba/preload.h"
#include "gc/egg.h"
#include "core1/mlmtx.h"
#include "overlays/ba/backpack.h"
#include "overlays/ba/roll.h"
#include "overlays/ba/input.h"
#include "ba/invisible.h"
#include "ch/baddiesetup.h"

void func_80092778(PlayerState*);

void func_80092864(PlayerState *, f32);
void func_80092880(PlayerState *, s32);
Unkfunc_800E0960_1 *func_80092AD8(PlayerState *);
f32 func_80092BE8(PlayerState *);
f32 func_80092BF4(PlayerState *);
void func_80092EC8(PlayerState*, s32);
void func_80092C00(PlayerState*, f32[3]);
void func_80092C24(PlayerState*, f32[3]);
void func_80092C48(PlayerState*, f32[3]);
void func_8009312C(PlayerState*, s32);
void func_800931AC(PlayerState*, s32);
void func_80093230(PlayerState*, f32);
void func_8009328C(PlayerState*, f32);
void func_8009332C(PlayerState*, f32);
void func_80093360(PlayerState*, f32);
void func_80093370(PlayerState*, s32);
void func_8009337C(PlayerState*, s32);
void func_80093388(PlayerState*);
void func_80093504(PlayerState*, s32, s32);
void func_800936E8(PlayerState*, s32);
void func_80093700(PlayerState*, s32);
s32 func_80093DF4(PlayerState*, s32);
PlayerState* func_80093F7C(PlayerState*);
s32 func_800944E0(PlayerState *, s32);
//Get Current Egg Type
s32 func_80094510(PlayerState *);
void func_800946C4(PlayerState*, s32);
void func_800947EC(PlayerState *, s32, s32);
s32 func_800949BC(PlayerState*);
s32 func_80094B14(PlayerState *);
s32 func_80094BC0(PlayerState *);
s32 func_80094C64(PlayerState*, s32);
void func_80094E40(s32);
// This might return a s32 instead of a PlayerState pointer
PlayerState *func_80092B04(PlayerState *, s32);
// This might take a s32 instead of a PlayerState pointer
// This might return a s32 instead of a PlayerState pointer
PlayerState *func_800B27E0(PlayerState *);


#endif // __CORE2_1E6B900_H__
