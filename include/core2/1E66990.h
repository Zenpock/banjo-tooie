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
#include "ba/duo.h"
#include "ba/fpctrl.h"
#include "nc/ba/1p.h"

#include "ba/flag.h"
#include "ba/physics.h"

#include "ba/playerstate.h"
#include "ba/drone.h"

int func_8008DEA4(PlayerState* arg0, f32* arg1, f32 arg2);
s32 func_8008DDEC(PlayerState*, f32*, f32);
s32 func_8008DE74(PlayerState*);
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
void func_8008DAE8(PlayerState*, s32, f32);
s32 player_isStable(PlayerState*);
s32 func_8008E0C8(s32);
s32 func_8008E0E8(PlayerState*);
s32 func_8008E124(PlayerState*);
s32 func_8008E148(PlayerState*);
s32 func_8008E1A0(PlayerState*);
// func_8008E1C4
//Are we Solo Banjo
s32 func_8008E23C(PlayerState*);
s32 func_8008E260(PlayerState*);
// func_8008E2AC
s32 func_8008E300(PlayerState*); 
s32 player_inWater(PlayerState*);
s32 func_8008E37C(PlayerState*);
s32 func_8008E39C(PlayerState*);
s32 func_8008E3E8(PlayerState*);
// func_8008E40C
s32 func_8008E430(void);
// func_8008E454

#endif // __CORE2_1E66990_H__
