#include "core2/1E9F060.h"

/* .data */

extern void func_800BF48C(u8, u8, u8);  

typedef struct {
    f32 unk0;
    f32 unk4;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    u8 unk10;
    u8 unk11;
} D_8012AA20_Struct;

/* .bss */

extern D_8012AA20_Struct D_8012AA20;

/* .code */

void func_800C5770(void) {}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C5778.s")

// #pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C57C0.s")
void func_800C57C0(void) {
    func_800BF48C(D_8012AA20.unk8, D_8012AA20.unk9, D_8012AA20.unkA);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C57F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C5968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C59F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C5A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C5A38.s")

void func_800C5B84(s32 arg0)
{
    func_800C5A10(arg0,1);
}

void func_800C5BA4(void* arg0) 
{
    heap_free(arg0);
}
void* func_800C5BC4(void* arg0) 
{
    return defrag(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C5BE4.s")

void* func_800C5CC0(f32* this, f32 arg1, f32 arg2, u32 arg3, void* arg4) {
    void* phi_v1;

    if (mlAbsF(arg2 - arg1) > 500.0f) {
        if (arg1 < arg2) {
            phi_v1 = func_800C5BE4(this, arg1, arg1 + 500.0f, arg3, arg4);
            if (phi_v1 == NULL) {
                phi_v1 = func_800C5BE4(this, arg1 + 500.0f - 1.0f, arg2, arg3, arg4);
            }
        }
        else {
            phi_v1 = func_800C5BE4(this, arg1, arg1 - 500.0f, arg3, arg4);
            if (phi_v1 == NULL) {
                phi_v1 = func_800C5BE4(this, arg1 - 500.0f + 1.0f, arg2, arg3, arg4);
            }
        }
    }
    else {
        phi_v1 = func_800C5BE4(this, arg1, arg2, arg3, arg4);
    }
    return phi_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C5E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C5EB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C5F40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C5F8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C5FCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C6038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C6060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C6320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C6420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C65E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C6704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C670C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C673C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C6744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C674C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C6754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C675C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C6784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C67C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C67D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C67D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C67E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C67E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C67F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C67F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C6840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C68A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C68AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C68CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C68D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C68DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E9F060/func_800C68E8.s")
