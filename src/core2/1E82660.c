#include "core2/1E82660.h"

typedef struct {
	s16 unk0;
	s16 unk2;
	u8 unk4[4];
	s16 unk8[8];
	s32 unk18[8];
	s32 unk38[8];
	s32 unk58[8];
}UNKD_801276D0;

extern UNKD_801276D0 D_801276D0;

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A8D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A8E9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A8EF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A8F68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A8FDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A9010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A907C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A91A8.s")

void func_800A91F4(s32 charIndex)
{
	if (charIndex >= 0)
	{
		if (D_801276D0.unk8[charIndex] != -1)
		{
			func_8010FBD4(D_801276D0.unk58[charIndex]);
			D_801276D0.unk58[charIndex] = 0;

			if (func_800A8984(D_801276D0.unk8[charIndex]) == D_801276D0.unk38[charIndex])
			{
				func_800A8948(D_801276D0.unk8[charIndex]);
			}
			func_800CA364(D_801276D0.unk38[charIndex]);
			D_801276D0.unk38[charIndex] = NULL;
			D_801276D0.unk4[D_801276D0.unk8[charIndex]]--;
			D_801276D0.unk8[charIndex] = -1;
			D_801276D0.unk0--;
		}
	}
}


#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A92A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A9318.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A9378.s")

s32 func_800A93E4(s32 arg0)
{
    return D_801276D0.unk58[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A93F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A940C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A9420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A9460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A946C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A9478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A9514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A95C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A965C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A9670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A96F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A9768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A9800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A9828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E82660/func_800A989C.s")
