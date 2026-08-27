#ifndef __BA_CKPACK__
#define __BA_CKPACK__


#include <ultra64.h>
#include "common.h"
#include "player.h"

#include "ba/anim.h"
#include "ba/backpack.h"

#include "core2/anctrl.h"
#include "core2/1EB5E70.h"

s32 babackpack_get_size(void);
void __babackpack_free(PlayerState *self);
void func_8080003C_babackpack(PlayerState *self);
s32 babackpack_entrypoint_1(PlayerState *self);
void func_8080011C_babackpack(PlayerState *self, s32 arg1, f32 scale);
s32 func_8080021C_babackpack(PlayerState *self);
void babackpack_entrypoint_2(PlayerState *self);
void babackpack_entrypoint_3(PlayerState *self, f32 *position, f32 *arg2, s32 arg3, f32 *arg4);
s32 babackpack_get_state(PlayerState *self);
void babackpack_entrypoint_5(PlayerState *self, s32 arg1, s32 arg2);
void babackpack_entrypoint_6(PlayerState *self, s32 arg1, s32 arg2);
f32 babackpack_get_scale(PlayerState *self);
void babackpack_entrypoint_8(PlayerState *self);
void babackpack_entrypoint_9(PlayerState *self);
void babackpack_set_state(PlayerState *self, BaBackpackState state);

#endif // __BA_CKPACK__
