#ifndef __CORE2_1EDA900_H__
#define __CORE2_1EDA900_H__

#include "common.h"
#include "overlays.h"
#include "core2/1ED8C80.h"
#include "core2/1EDFED0.h"
//Store a pointer in reserved memory
void func_80101074(void*);
//Retrieve a pointer from reserved memory
void* func_80101080(void);

s32 func_8010114C(s32, s32, s32);

//Send an event to the actor's event handler
s32 func_8010108C(Actor*, s32, s32);

//Send an event to items of type
s32 func_80101180(s32 propId, s32 eventId, s32);

#endif // __CORE2_1EDA900_H__
