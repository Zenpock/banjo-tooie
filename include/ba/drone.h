#ifndef __BA_DRONE_H__
#define __BA_DRONE_H__

#include "ba/playerstate.h"
#include "bs/state.h"

s32 _badrone_entrypoint_1(PlayerState*);
extern s32 _badrone_entrypoint_3(PlayerState *self);
void _badrone_entrypoint_4(PlayerState*);
extern void _badrone_entrypoint_11(PlayerState*, void*, s32);
void _badrone_entrypoint_14(PlayerState*, s32, f32);
void _badrone_entrypoint_15(PlayerState*, s32, f32);
void _badrone_entrypoint_16(PlayerState*, s32, f32);
extern BanjoStateId _badrone_entrypoint_23(PlayerState *self, f32[3]);
extern BanjoStateId _badrone_entrypoint_24(PlayerState *self);
extern BanjoStateId _badrone_entrypoint_25(PlayerState *self);
s32 _badrone_entrypoint_30(PlayerState *self);

#endif // __BA_DRONE_H__
