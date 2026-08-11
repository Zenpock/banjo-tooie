#include "core2/1EB57A0.h"

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB57A0/func_800DBEB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB57A0/func_800DBEFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB57A0/func_800DBF38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB57A0/func_800DBF74.s")

void func_800DBFD8(void* arg0) 
{
    heap_free(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB57A0/func_800DBFF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB57A0/func_800DC028.s")

s32 func_800DC060(s32* arg0)
{
    if (arg0 != 0)
    {
        arg0 = defrag(arg0);
    }
    return arg0;
}
