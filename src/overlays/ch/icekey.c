#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/icekey/func_80800000_chicekey.s")

extern ActorData D_808000EC_chicekey;
ActorData* chicekey_entrypoint_0()
{
    return &D_808000EC_chicekey;
}
