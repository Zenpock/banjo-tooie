#ifndef __BS_BFLY_H__
#define __BS_BFLY_H__

#include "common.h"

// stolen from fly.h
typedef struct bs_kazfly_s {
    f32 unk0;
    f32 unk4[3];
    f32 unk10[3];
    u8 unk1C;
} BsKazFly;

#include "overlays/ba/playerstate.h"
#include "overlays/ba/yaw.h"
#include "overlays/ba/fpctrl.h"
#include "overlays/ba/flag.h"
#include "overlays/ba/fly.h"
#include "overlays/ba/roll.h"
#include "overlays/ba/statemem.h"
#include "overlays/ba/physics.h"
#include "overlays/ba/stick.h"
#include "overlays/ba/anim.h"
#include "overlays/ba/key.h"
#include "overlays/ba/input.h"
#include "overlays/ba/timer.h"

#include "overlays/bs/state.h"
#include "overlays/ba/boost.h"
#include "overlays/bs/drone.h"

#include "core1/1E29B60.h"
#include "core1/1E2B200.h"

#include "core2/anctrl.h"

#include "core2/1E66990.h"
#include "core2/1E6B900.h"
#include "core2/1E6F080.h"
#include "core2/1E75710.h"
#include "core2/1E76CC0.h"
#include "core2/1E77A20.h"
#include "core2/1E78BF0.h"
#include "core2/1E79FD0.h"
#include "core2/1E7BFA0.h"
#include "core2/1E7D460.h"
#include "core2/1E93440.h"
#include "core2/1EA0690.h"
#include "core2/1EA3AA0.h"
#include "core2/1EB2840.h"
#include "core2/1EB5980.h"
#include "core2/1EC8070.h"
#include "core2/1ECA640.h"


// Code
void func_80800000_bsbfly(PlayerState*);
void func_808000AC_bsbfly(PlayerState*);
void func_80800128_bsbfly(PlayerState*);
void func_80800188_bsbfly(PlayerState*);
void func_80800248_bsbfly(PlayerState*);
void func_80800320_bsbfly(PlayerState*);
void func_808003E0_bsbfly(PlayerState*);
s32 bsbfly_entrypoint_0(s32);
void func_8080042C_bsbfly(PlayerState*);
void func_80800454_bsbfly(PlayerState*);
void func_8080050C_bsbfly(PlayerState*);
void func_80800624_bsbfly(PlayerState*);
s32 bsbfly_entrypoint_1(s32);
void func_808009D0_bsbfly(PlayerState*);
void func_80800A24_bsbfly(PlayerState*, s32);
void func_80800C38_bsbfly(PlayerState*);
void func_80800D50_bsbfly(PlayerState*);
enum bs_state_e func_80800D80_bsbfly(PlayerState*, enum bs_state_e);
void func_80800F10_bsbfly(PlayerState*);
void func_80801138_bsbfly(PlayerState*);
s32 bsbfly_entrypoint_2(s32);
// func_80801178_bsbfly
// func_80801208_bsbfly
// func_80801334_bsbfly
s32 bsbfly_entrypoint_3(s32);
// func_8080145C_bsbfly
// func_808014E8_bsbfly
// func_808015C4_bsbfly
// func_808016B4_bsbfly
// func_8080183C_bsbfly
s32 bsbfly_entrypoint_4(s32);
// func_8080188C_bsbfly
// func_808018D0_bsbfly
// func_808018F4_bsbfly
s32 bsbfly_entrypoint_5(s32);
// func_8080193C_bsbfly
// func_80801980_bsbfly
// func_808019A4_bsbfly
s32 bsbfly_entrypoint_6(s32);
// func_808019EC_bsbfly
// func_80801A1C_bsbfly
void func_80801A44_bsbfly(PlayerState*);
s32 bsbfly_entrypoint_7(s32);
// func_80801A80_bsbfly
// func_80801AEC_bsbfly
s32 bsbfly_entrypoint_8(s32);
// func_80801BB4_bsbfly
// func_80801C58_bsbfly
void func_80801C9C_bsbfly(PlayerState*);
void func_80801CBC_bsbfly(PlayerState*);
s32 bsbfly_entrypoint_9(s32);

#endif // __BS_BFLY_H__
