#ifndef __OVERLAY_BS_BEEMAIN_H__
#define __OVERLAY_BS_BEEMAIN_H__

#include <ultra64.h>

#include "common.h"
#include "player.h"

#include "overlays/bs/state.h"
#include "overlays/ba/playerstate.h"
#include "overlays/ba/flag.h"
#include "overlays/ba/physics.h"
#include "overlays/ba/bounce.h"
#include "overlays/ba/timer.h"
#include "overlays/ba/stick.h"
#include "overlays/ba/bee.h"
#include "overlays/ba/drone.h"
#include "overlays/ba/input.h"
#include "overlays/ba/sudie.h"

#include "nc/ba/die.h"

#include "core1/1E2B200.h"

#include "core2/1E66990.h"
#include "core2/1E67DA0.h"
#include "core2/1E6B900.h"
#include "core2/1E6E870.h"
#include "core2/1E72EA0.h"
#include "core2/1E75620.h"
#include "core2/1E75710.h"
#include "core2/1E76880.h"
#include "core2/1E76CC0.h"
#include "core2/1E7BFA0.h"
#include "core2/1E7BFA0.h"
#include "core2/1E7D460.h"
#include "core2/1EC3810.h"
#include "core2/1ECA640.h"
#include "core2/1ED4E30.h"

#include "overlays/bs/bee.h"

// Entrypoints
extern enum bs_state_e _badrone_entrypoint_28(PlayerState*);
extern void _bsbee_entrypoint_1(PlayerState*);
extern void _bsbee_entrypoint_2(PlayerState*);

// BSS?
extern s32 D_80801260_bsbeemain[];
extern s32 D_80801270_bsbeemain[];
extern s32 D_80801280_bsbeemain[];
extern s32 D_80801290_bsbeemain[];
extern s32 D_808012A0_bsbeemain[];
extern s32 D_808012B0_bsbeemain[];
extern s32 D_808012C0_bsbeemain[];
extern s32 D_808012D0_bsbeemain[];
extern s32 D_808012E0_bsbeemain[];

#endif // __OVERLAY_BS_BEEMAIN_H__
