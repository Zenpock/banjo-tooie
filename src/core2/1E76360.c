#include "core2/1E76360.h"

typedef struct {
    void (*unk0)(PlayerState*);
    s32 unk4;
    s32 unk8;
}BSStateArray;

extern BSStateArray D_80117F38[];

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E76360/func_8009CA70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E76360/func_8009CAAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E76360/func_8009CAF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E76360/func_8009CB44.s")

void (*func_8009CB90(PlayerState* self, BanjoStateId arg1))(PlayerState*)
{
    void (*(*temp_v0)(s32))(PlayerState*);

    temp_v0 = D_80117F38[arg1].unk0;
    if (temp_v0 != NULL)
    {
        return temp_v0(2);
    }
    return NULL;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E76360/func_8009CBDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E76360/func_8009CBFC.s")
