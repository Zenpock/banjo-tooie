#ifndef __BS_BEE_H__
#define __BS_BEE_H__

#include <ultra64.h>

#include "common.h"

#include "overlays/ba/playerstate.h"
#include "overlays/ba/flag.h"
#include "overlays/ba/roll.h"
#include "overlays/ba/stick.h"

#include "core2/1E6B900.h"
#include "core2/1E6F080.h"
#include "core2/1E75710.h"
#include "core2/1E77A20.h"

void bsbee_entrypoint_0(PlayerState*);
void bsbee_entrypoint_1(PlayerState*);
void bsbee_entrypoint_2(PlayerState*);

#endif // __BS_BEE_H__
