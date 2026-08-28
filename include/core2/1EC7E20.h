#ifndef __CORE2_1EC7E20_H__
#define __CORE2_1EC7E20_H__

#include "common.h"

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
    u8 pad[6];
    u8 unk6;
}unkStruct800EE670;

u32 vector_begin(s32);
s32 vector_defrag(s32);
u32 vector_end(s32);

s32 defrag(s32);
void _idbounce_entrypoint_6();

void _idbounce_entrypoint_7();

#endif