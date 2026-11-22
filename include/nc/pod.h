#ifndef __NC_POD_H__
#define __NC_POD_H__

#include "common.h"
#include "core1/1E2C940.h"
#include "core1/1E32FE0.h"
#include "core2/1E82660.h"
#include "core2/1E9E480.h"
#include "core2/1EC3810.h"
#include "core2/1EC8070.h"
#include "core2/1ECE0B0.h"
#include "core2/1EDA900.h"
#include "core2/1EE92B0.h"
#include "core2/1EE9AB0.h"
#include "gl/cutDll.h"
#include "nc/poducam.h"
#include "nc/podfixpos.h"
#include "nc/poddialog.h"
#include "gc/dialogcamera.h"

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    ActorMarker* unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    f32 unk18[3];
    f32 unk24[3];
    f32 unk30;
    f32 unk34;
    s32 unk38;
    s16 unk3C;
    u8 unk3E;
    s8 unk3F;
    u8 unk40;
    u8 unk41;
    u8 unk42;
    u8 unk43;
    f32 unk44;
    f32 unk48;
}UNKPODSTRUCT;

s32 _ncpod_entrypoint_0(s32);
void _ncpod_entrypoint_1(s16);
UNKPODSTRUCT* _ncpod_entrypoint_2(s16);
void _ncpod_entrypoint_3(UNKPODSTRUCT*, s32);
s32 _ncpod_entrypoint_4(UNKPODSTRUCT*);
s32 _ncpod_entrypoint_5(s32, UNKPODSTRUCT*, ActorEventId, s32, void*);
s32 _ncpod_entrypoint_6(s32, UNKPODSTRUCT*, ActorEventId, s32, void*);
void _ncpod_entrypoint_7(UNKPODSTRUCT*, ActorMarker*);
void _ncpod_entrypoint_8(UNKPODSTRUCT*, f32*, f32*);
void _ncpod_entrypoint_9(UNKPODSTRUCT*, f32);
f32 _ncpod_entrypoint_10(UNKPODSTRUCT*);
void _ncpod_entrypoint_11(UNKPODSTRUCT*, f32);
void _ncpod_entrypoint_12(UNKPODSTRUCT*, s32);
s32 _ncpod_entrypoint_13(UNKPODSTRUCT*);
void ncpod_entrypoint_14(s16, s32);
s32 _ncpod_entrypoint_16(s32, ActorMarker*, s32, s32);
s32 _ncpod_entrypoint_17(s32, s32);
s32 _ncpod_entrypoint_18(s32);
void _ncpod_entrypoint_19(UNKPODSTRUCT*, s32);
s32 _ncpod_entrypoint_20(s32, s32, s32, s32);
void _ncpod_entrypoint_21(s32, s32, s32);
void _ncpod_entrypoint_22(UNKPODSTRUCT*, s32, s32);
void _ncpod_entrypoint_23(UNKPODSTRUCT*, s32, s32);
void _ncpod_entrypoint_24(UNKPODSTRUCT*, s32, s32);
void _ncpod_entrypoint_25(UNKPODSTRUCT*, s32);
s32 _ncpod_entrypoint_26(s32, ActorMarker*, ActorMarker*, s32, s32);
s32 _ncpod_entrypoint_27(s32, s32);
s32 _ncpod_entrypoint_28(s32, f32);
s32 _ncpod_entrypoint_29(s32, f32);
f32 _ncpod_entrypoint_30(s32);
void _ncpod_entrypoint_31(s32, f32[3]);
s32 _ncpod_entrypoint_32(s32, s32, s32, s32);
s32 _ncpod_entrypoint_33(s32, ActorMarker*, ActorMarker*, s32, s32);

#endif
