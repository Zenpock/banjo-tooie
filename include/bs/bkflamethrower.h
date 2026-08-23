#ifndef __BS_BKFLAMETHROWER_H__
#define __BS_BKFLAMETHROWER_H__

#include "common.h"

#include "overlays/ba/anim.h"
#include "overlays/ba/key.h"
#include "overlays/ba/physics.h"
#include "overlays/ba/playerstate.h"
#include "overlays/ba/timer.h"
#include "overlays/ba/yaw.h"

#include "bs/state.h"

#include "ba/flamethrower.h"

#include "bs/stand.h"

#include "core2/1E75710.h"
#include "core2/1E75920.h"
#include "core2/1E76CC0.h"
#include "core2/1E78BF0.h"
#include "core2/1E79FD0.h"
#include "core2/1EA0690.h"
#include "core2/1EC8070.h"

// Code
void _bsbkflamethrower_entrypoint_0(PlayerState*, f32*, f32*);
void func_80800094_bsbkflamethrower(PlayerState*, u32);
void bsbkflamethrower_entrypoint_1(PlayerState*);
void bsbkflamethrower_entrypoint_2(PlayerState*);
void bsbkflamethrower_entrypoint_3(PlayerState*);
s32 bsbkflamethrower_entrypoint_4(s32);

#endif // __BS_BKFLAMETHROWER_H__
