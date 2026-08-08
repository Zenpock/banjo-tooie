#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/fair/coin/func_80800000_chfaircoin.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/fair/coin/chfaircoin_entrypoint_0.s")

extern ActorData D_8080015C_chfaircoin;
ActorData* chfaircoin_entrypoint_1()
{
    return &D_8080015C_chfaircoin;
}
