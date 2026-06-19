#include "core2/1EDFED0.h"

extern Vector* D_80136EE0;

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDFED0/func_801065E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDFED0/func_80106608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDFED0/func_80106630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDFED0/func_80106668.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDFED0/func_801066C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDFED0/func_80106730.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDFED0/func_80106768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDFED0/func_80106790.s")

Actor* func_801067C4(s32* lastIndex)
{
    if (D_80136EE0 == NULL)
    {
        return NULL;
    }
    *lastIndex = vector_size(D_80136EE0) - 1;
    if (*lastIndex >= 0)
    {
        return vector_at(D_80136EE0, *lastIndex);
    }
    return NULL;
}

Actor* func_8010682C(s32* currentIndex)
{
    s32 NumActors;
    if (D_80136EE0 == NULL)
    {
        return NULL;
    }
    NumActors = vector_size(D_80136EE0);
    //Clamp index if it is above the size of the vector
    if (*currentIndex >= NumActors)
    {
        *currentIndex = NumActors;
    }
    if (*currentIndex > 0)
    {
        //Decrement index and return the actor
        *currentIndex = *currentIndex - 1;
        return vector_at(D_80136EE0, *currentIndex);
    }
    else
    {
        return NULL;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDFED0/func_801068A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDFED0/func_80106920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDFED0/func_801069A4.s")
