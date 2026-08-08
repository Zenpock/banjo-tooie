#ifndef __CORE2_1E66990_H__
#define __CORE2_1E66990_H__

#include <ultra64.h>

#include "common.h"

#include "core2/1E691A0.h"
#include "core2/1E6F080.h"
#include "core2/1E75920.h"
#include "core2/1E76360.h"
#include "core2/1E77A20.h"
#include "core2/1E7BFA0.h"
#include "core2/1E7D460.h"
#include "core2/1EA0690.h"
#include "core2/1EA1DA0.h"
#include "core2/1EB3750.h"
#include "core2/1EB45C0.h"
#include "core2/1EC3810.h"
#include "core2/1EC9740.h"
#include "core2/1ECB0F0.h"
#include "core2/1ECE0B0.h"
#include "overlays/ba/duo.h"
#include "overlays/ba/fpctrl.h"
#include "overlays/nc/ba/1p.h"

#include "overlays/ba/flag.h"
#include "overlays/ba/physics.h"

#include "overlays/ba/playerstate.h"
#include "overlays/ba/drone.h"

int func_8008D0E0(PlayerState *);
int func_8008D3B0(PlayerState *);
s32 func_8008D544(PlayerState *);
int func_8008D790(PlayerState *);
s32 func_8008DE24(PlayerState *);
s32 func_8008DF18(PlayerState *);
int func_8008DD04(PlayerState *);
s32 func_8008DF8C(PlayerState *, s32);
s32 func_8008E0E8(PlayerState *);
s32 func_8008E124(PlayerState *);
s32 func_8008E23C(PlayerState *);
s32 func_8008E260(PlayerState *);
s32 func_8008E39C(PlayerState *);
s32 func_8008E3E8(PlayerState *);
s32 func_8008E430(void);

s32 player_isStable(PlayerState*);
s32 player_inWater(PlayerState*);

#endif // __CORE2_1E66990_H__
