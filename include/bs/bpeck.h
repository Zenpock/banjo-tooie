#ifndef __BS_BPECK_H__
#define __BS_BPECK_H__

#include "common.h"
#include "player.h"

#include "overlays/ba/anim.h"
#include "overlays/ba/flag.h"
#include "overlays/ba/physics.h"
#include "overlays/ba/playerstate.h"
#include "overlays/ba/timer.h"
#include "overlays/ba/yaw.h"

#include "overlays/bs/state.h"
#include "overlays/bs/walk.h"

#include "core2/1E76CC0.h"
#include "core2/1E6EC70.h"
#include "core2/1E77A20.h"
#include "core2/1E78BF0.h"
#include "core2/1E79FD0.h"
#include "core2/1EA0690.h"
#include "core2/1EB2840.h"

// CODE
// void bsbpeck_entrypoint_0(PlayerState*);
void func_80800168_bsbpeck(PlayerState*);
void bsbpeck_entrypoint_1(PlayerState*);
void bsbpeck_entrypoint_2(PlayerState*);
s32 bsbpeck_entrypoint_3(s32);

#endif // __BS_BPECK_H__
