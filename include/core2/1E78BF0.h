#ifndef __CORE2_1E78BF0_H__
#define __CORE2_1E78BF0_H__

#include "ba/playerstate.h"
#include "ba/anim.h"
#include "ba/yaw.h"
#include "ba/physics.h"
#include "bs/state.h"

s32 func_8009F300(void);
f32 func_8009F308(PlayerState *);
// func_8009F354
f32 func_8009F3BC(PlayerState *, f32, f32, f32, f32);
// func_8009F440
// func_8009F678
// func_8009F860
// func_8009FA20
s32 func_8009FBB0(PlayerState *, f32[3], f32);
// func_8009FBE8
void func_8009FC34(PlayerState *, s32);
// func_8009FC80
void func_8009FD24(PlayerState *, s32);
// func_8009FD24
void func_8009FE58(PlayerState*);
// func_8009FE78
// bs_getTypeOfJump
// func_8009FF00
// func_8009FF44
void func_8009FFD8(PlayerState *, BaAnimUpdateType anim_update_type, YawType yaw_state, s32 arg2, BaPhysicsType arg3);
void func_800A0024(PlayerState*);
// func_800A0064
s32 func_800A00CC(PlayerState *, f32[3]);
// func_800A0110
// func_800A0150
void func_800A0180(PlayerState *);
BanjoStateId func_800A01F8(PlayerState *, BanjoStateId arg1);
BanjoStateId func_800A02DC(PlayerState *, BanjoStateId arg1);
void func_800A042C(PlayerState *);
void func_800A046C(PlayerState *);
// func_800A04F4
// func_800A055C
// func_800A05DC

#endif // __CORE2_1E78BF0_H__
