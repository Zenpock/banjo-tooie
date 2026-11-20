#include "core2/1E8A670.h"

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B0D80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B0ECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B1110.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B1328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B1508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B196C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B1D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B1F8C.s")

s32 func_800B2190(s32 arg0) {
	return arg0 + 0x18;
}

void func_800B2198(VertexStore* arg0, s32* arg1, s32* arg2)
{
	arg1[0] = arg0->unk0;
	arg1[1] = arg0->unk2;
	arg1[2] = arg0->unk4;
	arg2[0] = arg0->unk6;
	arg2[1] = arg0->unk8;
	arg2[2] = arg0->unkA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B21CC.s")

s32 func_800B2248(VertexStore* arg0)
{
	s32 sp1C;
	s32 temp;

	sp1C = mlAbsF(arg0->unk0);
	temp = mlAbsF(arg0->unk4);
	if (sp1C < temp)
	{
		sp1C = temp;
	}
	temp = mlAbsF(arg0->unk6);
	if (sp1C < temp)
	{
		sp1C = temp;
	}
	temp = mlAbsF(arg0->unkA);
	if (sp1C < temp)
	{
		sp1C = temp;
	}
	return sp1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B2324.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B2344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B2354.s")

void func_800B237C(VertexStore* arg0, f32* arg1, f32* arg2)
{
	arg1[0] = arg0->unkC;
	arg1[1] = arg0->unkE;
	arg1[2] = arg0->unk10;
	*arg2 = arg0->unk12;
}

void func_800B23E0(void* arg0) 
{
    heap_free(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B2400.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B2464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B2540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B25D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8A670/func_800B26C8.s")
