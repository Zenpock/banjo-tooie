#ifndef __CORE2_BAPHYSICS_H__
#define __CORE2_BAPHYSICS_H__

#include "common.h"

#include <ultra64.h>
#include "core2/1EB2840.h"
#include "core2/1EC8070.h"

#include "ba/playerstate.h"

typedef struct unkStruct8009B1FC {
    u8 pad0[0x8];
    f32 unk8;

    u8 padC[0x14 - 0xC];
    f32 unk14;

    u8 pad18[0x2C - 0x18];
    f32 unk2C;

    u8 pad30[0x34 - 0x30];
    f32 unk34;
    f32 unk38;

    u8 pad3C[0xC8 - 0x3C];
    struct unkStruct8009B1FC* unkC8;
} unkStruct8009B1FC;

typedef struct {
    u8 pad[0xc4];
    s8* unkC4;
} unkStruct8009ADF0;
typedef struct {
    u8 pad[0xc8];
    s32 unkC8;
} unkStruct8009B3B8;

typedef struct {
    u8 pad0[0x28];
    f32 unk28[3];
}unkStruct8009B4D0_inner;

typedef struct {
    u8 pad0[0xC8];
    unkStruct8009B4D0_inner* unkC8;
}unkStruct8009B4D0;

#endif // __CORE2_BAPHYSICS_H__
