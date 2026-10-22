#include "core2/1EAE6C0.h"

extern s32 D_8012B420;
extern u8 D_8011B640[][3];

s32 func_800D4DD0(s32 arg0)
{
    if (D_8012B420 != 0)
    {
        switch (arg0)
        {
            default:
                break;
            case 10:
                arg0 = 1;
                break;
            case 4:
            case 11:
                arg0 = 0;
                break;
        }
    }
    return arg0;

}

void func_800D4E18(s32 arg0, s32 arg1)
{
    if (arg0 == 9)
    {
        arg0 = 1;
    }
    if (arg1 < 0)
    {
        func_800FC660(0x74);
    }
    func_800D4FB8(arg0, func_800D4E7C(arg0) + arg1);
}

u8 func_800D4E7C(s32 arg0)
{
    if (arg0 == 9)
    {
        arg0 = 1;
    }
    return D_8011B640[func_800D4DD0(arg0)][1];
}


u8 func_800D4EB8(s32 arg0)
{
    if (arg0 == 9)
    {
        arg0 = 1;
    }
    return D_8011B640[func_800D4DD0(arg0)][2];
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAE6C0/func_800D4EF4.s")

s32 func_800D4F9C(s32 arg0)
{
    if (arg0 == 2)
    {
        return 0;
    }
    return 1;
}

void func_800D4FB8(s32 arg0, s32 arg1)
{
    s32 temp_v0;

    if (arg0 == 9)
    {
        arg0 = 1;
    }
    temp_v0 = func_800D4DD0(arg0);
    arg1 = arg1;
    if (arg1 < 0)
    {
        arg1 = 0;
    }
    else
    {
        if (D_8011B640[temp_v0][2] < arg1)
        {
            arg1 = D_8011B640[temp_v0][2];
        }
    }
    D_8011B640[temp_v0][1] = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAE6C0/func_800D5034.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAE6C0/func_800D517C.s")

u8 func_800D5210(s32 arg0)
{
    if (arg0 == 9)
    {
        arg0 = 1;
    }
    return D_8011B640[arg0][0];
}

void func_800D5234(s32 arg0) {
    D_8012B420 = arg0;
}

s32 func_800D5240(void) {
    return D_8012B420;
}