#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/dino/roargrill/func_80800000_chdinoroargrill.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/dino/roargrill/chdinoroargrill_update.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/dino/roargrill/chdinoroargrill_eventHandler.s")

extern ActorData D_80800258_chdinoroargrill;
ActorData* chdinoroargrill_entrypoint_0()
{
    return &D_80800258_chdinoroargrill;
}
