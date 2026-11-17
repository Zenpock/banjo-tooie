#include "core2/1EAC810.h"

//Seems to be the font table
typedef struct {
	s16 unk0;
	u8 unk2;
	u8 unk3;
	s32 unk4;
}D_8011B560Struct;
extern D_8011B560Struct D_8011B560[];

extern char D_8011B580[];
extern s8 D_8012B370[0x80];

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAC810/func_800D2F20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAC810/func_800D2F44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAC810/func_800D3104.s")

void func_800D34A0(void)
{
	s32 temp_v0;
	s32 i;
	s32 j;

	temp_v0 = string_length(D_8011B580);
	for (i = 0; i < ARRLEN(D_8012B370); i++)
	{
		for (j = 0; j < temp_v0; j++)
		{
			if (i == D_8011B580[j])
			{
				D_8012B370[i] = j;
				break;
			}
		}

		if (j == temp_v0)
		{
			D_8012B370[i] = -1;
		}
	}
}

s32 func_800D3524(s32 font)
{
	if (D_8011B560[font].unk4 == 0)
	{
		D_8011B560[font].unk4 = asset_load(D_8011B560[font].unk0);
	}
	return D_8011B560[font].unk4;
}

s32 func_800D3574(s32 font)
{
	return (D_8011B560[font].unk2 * 0.8f);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAC810/func_800D35BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAC810/func_800D35D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAC810/func_800D36A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAC810/func_800D36C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EAC810/func_800D3724.s")
