#include "core2/1EE1510.h"

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80107C20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80107C2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_801084B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_8010856C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_801085CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108658.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_801088A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108C14.s")

Actor* func_80108C90(s32 arg0, s32* arg1, u32 arg2, Prop* arg3)
{
    ActorData* (*temp_v0_2)(void);
    ActorData* actorData;
    temp_v0_2 = (ActorData * (*)(void))_gemarkersDll_entrypoint_0(arg0);
    if (temp_v0_2 == NULL)
    {
        return NULL;
    }
    actorData = temp_v0_2();
    return actorData->unk38_func(arg1, arg2, actorData, temp_v0_2, arg3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108DC0.s")
