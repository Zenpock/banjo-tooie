#ifndef __CORE2_1ECD070_H__
#define __CORE2_1ECD070_H__

#include "common.h"
#include "core2/1ECA640.h"

#include <ultra64.h>
#include "overlays/ba/playerstate.h"

typedef struct {
    f32 x;
    f32 y;
} Vec2f;

void func_800F3BD0(PlayerState *, s32, f32[3]);

#endif // __CORE2_1ECD070_H__
