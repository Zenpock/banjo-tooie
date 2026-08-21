#ifndef __CORE2_PHYSICS_H__
#define __CORE2_PHYSICS_H__

#include "common.h"

#include <ultra64.h>

#include "overlays/ba/playerstate.h"
typedef struct {
    u8 pad[0xc4];
    u8* unkC4;
}unkStruct8009AD78;

s32 func_8009AD78(PlayerState*, s32);

#endif // __CORE2_PHYSICS_H__
