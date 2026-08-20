#ifndef __BY_FLY_H__
#define __BY_FLY_H__

#include <ultra64.h>

#include "common.h"
#include "player.h"

#include "overlays/ba/flag.h"
#include "overlays/ba/playerstate.h"

#include "ba/egg/fire/eggfire.h"

#include "core2/1E6F080.h"
#include "core2/1E7D460.h"
#include "core2/1E9A960.h"
#include "core2/1EA3AA0.h"
#include "core2/1EC8070.h"

// Code
void _bafly_entrypoint_1(PlayerState*, f32 *, f32 *, f32);
s32 _bafly_entrypoint_2(PlayerState*);
void _bafly_entrypoint_4(PlayerState*);
void _bafly_entrypoint_5(PlayerState*);
void _bafly_entrypoint_6(PlayerState*, f32);
void _bafly_entrypoint_7(PlayerState*, s32);
void _bafly_entrypoint_8(PlayerState*, f32, f32, f32, f32, f32, f32, f32);
void _bafly_entrypoint_9(PlayerState*);
void _bafly_entrypoint_10(PlayerState*, f32, f32);
void _bafly_entrypoint_11(PlayerState*);
s32 _bafly_entrypoint_12(PlayerState*);
void _bafly_entrypoint_13(PlayerState*, s32, s32, f32);
void _bafly_entrypoint_14(PlayerState*, s32, s32);
void _bafly_entrypoint_15();
void _bafly_entrypoint_16(PlayerState*, s32, f32);
void _bafly_entrypoint_17(PlayerState*, s32, s32, u8 *);
void _bafly_entrypoint_18();
void _bafly_entrypoint_19(PlayerState*);
void _bafly_entrypoint_20(PlayerState*);
void _bafly_entrypoint_21(PlayerState*);

#endif // __BY_FLY_H__
