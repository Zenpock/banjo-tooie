#include "core2/1E8F430.h"


typedef struct {
    /* 0x0 */   s16 coordX;
    /* 0x2 */   s16 coordY;
    /* 0x4 */   s16 unk4;
    /* 0x6 */   u8 font : 4;
    /* 0x6 */   u8 kern : 1;
    /* 0x6 */   u8 background : 1;
    /* 0x6 */   u8 shaky : 1;
    /* 0x6 */   u8 unk6_0 : 1;
    /* 0x7 */   u8 unk7;
    /* 0x8 */   f32 scale;
    /* 0xC */   char* text;
    /* 0x10 */  u8 red;
    /* 0x11 */  u8 green;
    /* 0x12 */  u8 blue;
    /* 0x13 */  u8 alpha;
} UNKTEXTSTRUCT;

typedef struct {
    Vector* unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
    u8 red;
    u8 green;
    u8 blue;
    u8 alpha;
    u8 background;
    u8 font;
    u8 kern;
    u8 shaky;
    s16 unk14;
    f32 scale;
} UNK80128180;
extern UNK80128180 D_80128180;

extern s32 D_80127128;
extern s32 D_801282B0[2];

extern u8 D_8011A5C2[][2];
extern u8 D_80128151[];

void func_800B5B40(void)
{
    int index;
    for (index = 0; index < 0x28; index++)
    {
        func_800B58D4(D_80128151[index]);
        D_80128151[index] = 0;
    }
}

void func_800B5B88(void)
{
    int index;
    for (index = 0; index < 0x28; index++)
    {
        D_80128151[index] = func_800B5758(D_8011A5C2[index][1]);
    }
}

s32 func_800B5BE4(s32 arg0) {
    return func_800B56D0(D_80128151[arg0-1]);
}

void* func_800B5C10(s32 arg0, s32 arg1, s32* arg2, s32* arg3)
{
    s32 temp_v0;
    s32* sp18;

    temp_v0 = func_800D3524(arg0);
    sp18 = func_800B0D6C(temp_v0, arg1);
    *arg2 = func_800B0D58(temp_v0);
    *arg3 = sp18[1] + func_800B0D60(temp_v0);
    return sp18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8F430/func_800B5C7C.s")

void func_800B5DD4()
{
    func_800B5C7C(0x8);
}

void func_800B5DF4(void) {
}

void func_800B5DFC(void) {
}

void graphics_freeSimpleText(void) {
    if (D_80128180.unk0 != NULL) {
        vector_free(D_80128180.unk0);
        D_80128180.unk0 = NULL;
    }
}

void graphics_defragSimpleText(void) {
    if (D_80128180.unk0 != 0) {
        D_80128180.unk0 = vector_defrag(D_80128180.unk0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8F430/func_800B5E74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8F430/func_800B5FE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8F430/func_800B60C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8F430/func_800B62CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8F430/func_800B7174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8F430/func_800B71F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8F430/func_800B7448.s")

void graphics_addSimpleText(s32 coordX, s32 coordY, char* text)
{
    UNKTEXTSTRUCT* textStruct;

    if (text != 0)
    {
        if (D_80128180.unk0 == NULL)
        {
            D_80128180.unk0 = vector_new(sizeof(UNKTEXTSTRUCT), 8U);
        }
        textStruct = vector_push_back(&D_80128180);
        textStruct->coordX = coordX;
        textStruct->coordY = coordY;
        textStruct->text = text;
        textStruct->font = D_80128180.font;
        textStruct->kern = D_80128180.kern;
        textStruct->background = D_80128180.background;
        textStruct->shaky = D_80128180.shaky;
        textStruct->unk4 = D_80128180.unk14;
        textStruct->scale = D_80128180.scale;
        textStruct->red = D_80128180.red;
        textStruct->green = D_80128180.green;
        textStruct->blue = D_80128180.blue;
        textStruct->alpha = D_80128180.alpha;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8F430/func_800B7A98.s")

void graphics_setSimpleTextAlpha(s32 arg0) {
    D_80128180.alpha = arg0;
}

void graphics_setSimpleTextBackground(s32 arg0) {
    if (arg0 != 0) {
        D_80128180.background = 1;
    }
    else {
        D_80128180.background = 0;
    }
    if (arg0 != 0) {
        graphics_setSimpleTextKern(1);
    }
}

void func_800B7B2C(s32 arg0) {
    D_80128180.unk14 = arg0;
}

void graphics_setSimpleTextFont(s32 arg0) {
    D_80128180.font = arg0;
}

void graphics_setSimpleTextShaky(s32 arg0)
{
    if (arg0 != 0)
    {
        D_80128180.shaky = 1;
        return;
    }
    D_80128180.shaky = 0;
}

void graphics_setSimpleTextKern(s32 arg0)
{
    if (arg0 != 0)
    {
        D_80128180.kern = 1;
        return;
    }
    D_80128180.kern = 0;
}

//Set Text Colors
void graphics_setSimpleTextColors(s32 arg0, s32 arg1, s32 arg2) {
    D_80128180.red = arg0;
    D_80128180.green = arg1;
    D_80128180.blue = arg2;
}

//set text scale
void graphics_setSimpleTextScale(f32 arg0) {
    D_80128180.scale = arg0;
}

void func_800B7BB0(void) {
    if (D_801282B0[0] != 0) {
        _fxleaves_entrypoint_1(D_801282B0[0]);
    }
    if (D_801282B0[1] != 0) {
        _fxrain_entrypoint_1(D_801282B0[1]);
    }
    if (D_80127128 != 0) {
        func_800B956C();
    }
}

s32 func_800B7C10(void)
{
    if (D_801282B0[0] == 0) {
        D_801282B0[0] = _fxleaves_entrypoint_4(0x32);
    }
    return D_801282B0[0];
}

s32 func_800B7C54(void) {
    if (D_801282B0[1] == 0) {
        D_801282B0[1] = _fxrain_entrypoint_5(0x1E);
    }
    return D_801282B0[1];
}

s32 func_800B7C98()
{
    return D_801282B0[1];
}

void func_800B7CA4()
{
    func_800B9038();
}

void func_800B7CC4(void) {
    if (D_801282B0[0] != 0) {
        _fxleaves_entrypoint_3(D_801282B0[0]);
    }
    if (D_801282B0[1] != 0) {
        _fxrain_entrypoint_4(D_801282B0[1]);
    }
    func_800B8FEC();
}

void func_800B7D14(void) {
    D_801282B0[0] = 0;
    D_801282B0[1] = 0;
}

void func_800B7D28(void) {
    if (D_801282B0[0] != 0) {
        _fxleaves_entrypoint_5(D_801282B0[0]);
    }
    if (D_801282B0[1] != 0) {
        _fxrain_entrypoint_7(D_801282B0[1]);
    }
    func_800B90C8();
}

void func_800B7D78(void) {
    if (D_801282B0[0] != 0) {
        _fxleaves_entrypoint_6(D_801282B0[0]);
    }
    if (D_801282B0[1] != 0) {
        _fxrain_entrypoint_8(D_801282B0[1]);
    }
    func_800B90E8();
}

void func_800B7DC8(void) {
    if (D_801282B0[0] != 0) {
        _fxleaves_entrypoint_0(D_801282B0[0]);
        _fxleaves_entrypoint_6(D_801282B0[0]);
    }
    if (D_801282B0[1] != 0) {
        _fxrain_entrypoint_0(D_801282B0[1]);
        _fxrain_entrypoint_8(D_801282B0[1]);
    }
    func_800B8FE0();
    func_800B90E8();
}

void func_800B7E38(void)
{
    if (D_801282B0[0] != 0) {
        _fxleaves_entrypoint_7(D_801282B0[0]);
    }
    if (D_801282B0[1] != 0) {
        _fxrain_entrypoint_9(D_801282B0[1]);
    }
    if (D_80127128 != 0) {
        func_800B9170();
    }
}