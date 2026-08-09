#ifndef __BS_BBILLDRILL_H__
#define __BS_BBILLDRILL_H__

#include <ultra64.h>

#include "common.h"
#include "buttons.h"
#include "bs.h"

#include "overlays/ba/anim.h"
#include "overlays/ba/assets.h"
#include "overlays/ba/dust.h"
#include "overlays/ba/flag.h"
#include "overlays/ba/motor.h"
#include "overlays/ba/physics.h"
#include "overlays/ba/playerstate.h"
#include "overlays/bs/state.h"
#include "overlays/ba/timer.h"
#include "overlays/bs/walk.h"

#include "core1/1E29B60.h"

#include "core2/anctrl.h"

#include "core2/1E66990.h"
#include "core2/1E68670.h"
#include "core2/1E6B900.h"
#include "core2/1E71B00.h"
#include "core2/1E72EA0.h"
#include "core2/1E75620.h"
#include "core2/1E75920.h"
#include "core2/1E76880.h"
#include "core2/1E76CC0.h"
#include "core2/1E77A20.h"
#include "core2/1E78170.h"
#include "core2/1E78BF0.h"
#include "core2/1E79FD0.h"
#include "core2/1E8F430.h"
#include "core2/1E93440.h"
#include "core2/1EA0690.h"
#include "core2/1EA1DA0.h"
#include "core2/1EB2840.h"
#include "core2/1EB5980.h"
#include "core2/1EB2840.h"
#include "core2/1EC8070.h"
#include "core2/1ECA640.h"
#include "core2/1ECB9F0.h"

// Entrypoints
extern s32 _chlightfader_entrypoint_1(s32, f32, s32);
extern s32 _fxdlsmoke_entrypoint_0(f32*);
extern void _bamotor_entrypoint_3(PlayerState*, f32, f32, f32, f32, f32, f32);
extern void _bashake_entrypoint_1(PlayerState*, s32, s32);

// BSS?
extern s32 D_80800AC8_bsbbilldrill;
extern u32 D_80800AB0_bsbbilldrill[3];
extern s32 D_80800B68_bsbbilldrill[];
extern s32 D_80800B10_bsbbilldrill;
extern s32 D_80800B30_bsbbilldrill;
extern s32 D_80800B50_bsbbilldrill;

void func_80800000_bsbbilldrill(PlayerState*);
void func_80800008_bsbbilldrill(PlayerState*);
void func_808000C0_bsbbilldrill(PlayerState*);
void func_80800100_bsbbilldrill(PlayerState*);
s32 func_80800158_bsbbilldrill(f32[3]);
void func_8080019C_bsbbilldrill(PlayerState*);
void func_80800250_bsbbilldrill(PlayerState*);
void func_80800298_bsbbilldrill(PlayerState*);
void func_808002DC_bsbbilldrill(PlayerState*, s32);
void func_808005C0_bsbbilldrill(PlayerState*);
void bsbbilldrill_entrypoint_0(PlayerState*);
void bsbbilldrill_entrypoint_1(PlayerState*);
void bsbbilldrill_entrypoint_2(PlayerState*);
s32 bsbbilldrill_entrypoint_3(s32);

#endif // __BS_BBILLDRILL_H__
