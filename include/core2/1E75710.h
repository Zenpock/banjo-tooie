#ifndef __CORE2_1E75710_H__
#define __CORE2_1E75710_H__

#include <ultra64.h>

#include "ba/playerstate.h"
#include "core1/1E2B200.h"
#include "core2/1EB2840.h"
#include "core2/1ECA640.h"
#include "core2/1ECB9F0.h"

void bapitch_update_limited(PlayerState*, f32, f32);
void bapitch_init(PlayerState*);
void bapitch_update(PlayerState*);
void bapitch_setIdeal(PlayerState *, f32);
f32 bapitch_get(PlayerState *);
f32 bapitch_getIdeal(PlayerState *);
void bapitch_setAngularVelocity(PlayerState *, f32, f32);
void bapitch_resetAngularVelocity(PlayerState *);


#endif // __CORE2_1E75710_H__
