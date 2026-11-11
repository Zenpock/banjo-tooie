#include "core2/1EAED30.h"

extern s32 D_8012B7E8;
extern s32 D_8012B450[];
extern u8 D_8012B658[];
extern s16 D_8012B6E0[];
extern u8 D_8012B7E4;
extern u8 D_8012B7E5;

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D54F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D55A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D55DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5688.s")

s32 func_800D56C4(void* arg0)
{
    s32 var_v1; // sp24

    if (arg0 != NULL)
    {
        var_v1 = 0;
        while (var_v1 < D_8012B7E4 && (s32)arg0 != D_8012B450[var_v1])
        {
            var_v1++;
        }

        if (var_v1 == D_8012B7E4)
        {
            return 2;
        }

        D_8012B7E5 = var_v1;
        if (D_8012B658[var_v1] == 1)
        {
            heap_free(arg0);
            D_8012B658[var_v1] = D_8012B658[--D_8012B7E4];
            D_8012B450[var_v1] = D_8012B450[D_8012B7E4];
            D_8012B6E0[var_v1] = D_8012B6E0[D_8012B7E4];
            return 0;
        }

        D_8012B658[var_v1]--;
        return 1;
    }

    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5804.s")

void func_800D58AC()
{
    func_800D5688();
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D58CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D58FC.s")

s32 func_800D593C() 
{
    return 0x3666;
}

s32 func_800D5944()
{
    return D_8012B7E8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D59C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5A04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5A6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5B34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5DB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5E28.s")

s32 func_800D5E54(void* arg0)
{
    return func_800D5440(arg0);
}

void func_800D5E74(void) 
{
    func_800D55DC();
}

void func_800D5E94()
{
    func_800D54F0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5EB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5FDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAED30/func_800D5FE8.s")
