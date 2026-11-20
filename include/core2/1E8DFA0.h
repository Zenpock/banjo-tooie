#ifndef __CORE2_1E8DFA0_H__
#define __CORE2_1E8DFA0_H__

#include "common.h"
#include "ba/anim.h"
#include "ba/key.h"
#include "core1/heap.h"
#include "core2/1E95650.h"
#include "core2/1E97EF0.h"
#include "core2/1E9A960.h"
#include "core2/1EAAD80.h"
#include "core2/1EB2840.h"
#include "core2/1EB5980.h"
#include "core2/1EC8070.h"
#include "core2/1ECB9F0.h"
#include "core2/1EDFED0.h"
#include "freelist.h"
#include "memory.h"
#include "vector.h"

typedef struct {
    u16 unk0;
    u16 unk2; //Sprite to show
    s16 unk4;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    u8 pad12[0x8C - 0x12];
    s32 unk8C;
    s32 unk90;
}UNKD_80127F10;

void func_800B4790(UNKD_80127F10*);
void func_800B525C(GraphicsBuffers*);
void func_800B52EC(GraphicsBuffers*);
s32 func_800B53A4(s32);
void func_800B5450(UNKD_80127F10*);
void func_800B5534(s32);
s32 func_800B5548(s32);

#endif
