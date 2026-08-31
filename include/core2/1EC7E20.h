#ifndef __CORE2_1EC7E20_H__
#define __CORE2_1EC7E20_H__

#include "common.h"
#include "memory.h"
#include "vector.h"
#include "id/bounce.h"

typedef struct {
    u8 pad [0x24];
    s32 unk24;
} unkStruct800EE5AC;

typedef struct {
    u8 pad[0x2c];
    s32 unk2C;
} unkStruct800EE530;

typedef struct {
    u8 pad0[0x24];
    s32 unk24;
    u32 pad28;
    s32 unk2C;
}unkStruct800EE55C;

typedef struct {
    u32 unk0;
    u8 pad4[2];
    u8 unk6;
    u8 unk7;
    u8 unk8; //
    u8 pad9[0x9F];
}unkStruct800EE670;

#endif