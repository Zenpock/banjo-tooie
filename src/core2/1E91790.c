#include "core2/1E91790.h"

extern Gfx D_8011A630[];
extern s8 D_8011A668;
extern s32 D_8012712C;
extern s8 D_801282C5;
extern u8 D_801282C6;
extern s32 D_801282D0;

void func_800B7EA0(s32 arg0, s32 arg1)
{
	s32 sp3C;
	s32 sp38;
	s32 sp34;

	func_800AF614(arg0, asset_load(arg1), 0, 0x100, 1, 2, 2, &sp38, &sp34);
	D_801282C0.unkA = sp38;
	D_801282C0.unkB = sp34;
}

void func_800B7F14(GraphicsBuffers* buf) {

	gSPDisplayList((buf->gfx)++, OS_K0_TO_PHYSICAL(D_8011A630));
	gDPSetTextureFilter((buf->gfx)++, D_801282C0.font == 1 ? G_TF_BILERP : G_TF_POINT);
	gDPSetPrimColor((buf->gfx)++, 0, 0, D_801282C0.red, D_801282C0.green, D_801282C0.blue, D_801282C0.alpha);

	if (D_801282C0.pattern != 0) {
		gDPSetCycleType((buf->gfx)++, G_CYC_2CYCLE);
		gDPSetCombineLERP((buf->gfx)++, TEXEL0, 0, TEXEL1, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0);
		gDPSetRenderMode((buf->gfx)++, IM_RD | CVG_DST_FULL | ZMODE_XLU | FORCE_BL | G_RM_PASS, IM_RD | CVG_DST_FULL | ZMODE_XLU | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA));
		func_800B7EA0(buf, D_801282C0.pattern + 0xC24);
	}
	else {
		gDPSetCycleType((buf->gfx)++, G_CYC_1CYCLE);
		gDPSetCombineMode((buf->gfx)++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
		gDPSetRenderMode((buf->gfx)++, IM_RD | CVG_DST_FULL | ZMODE_XLU | FORCE_BL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA), IM_RD | CVG_DST_FULL | ZMODE_XLU | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA));
	}
	D_801282C0.unk5 = 1;
	D_801282C0.unkC = func_800D3724(D_801282C0.font);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E91790/func_800B80D0.s")

void func_800B811C(GraphicsBuffers* arg0) {
	Gfx* temp_v1;

	temp_v1 = arg0->gfx;
	arg0->gfx++;
	temp_v1->words.w0 = 0xDE000000; temp_v1->words.w1 = (u32)(&D_8011A668 - 0x80000000);

	D_801282C0.unk5 = 0;
}

s32 func_800B8148(u8* arg0) {
	s32 sp1C;
	s32 sp18;

	sp1C = func_800D35D0(D_801282C6, *arg0);
	if (sp1C == -1) {
		return 0;
	}
	sp18 = func_800D3524((s32)D_801282C6);
	if (sp18 == 0) {
		return 0;
	}
	D_801282D0 = func_800B0D58((unkStruct800B0D58*)sp18);
	*arg0 = (u8)sp1C;
	return sp18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E91790/func_800B81CC.s")

void graphics_resetTextParams(void)
{
	D_801282C0.alpha = D_801282C0.red = D_801282C0.green = D_801282C0.blue = 255;
	D_801282C0.pattern = 0;
	D_801282C0.unk7 = 0;
	D_801282C0.shaky = 0; //Shakiness
	D_801282C0.font = 0; //Font
	D_801282C0.size = 1.0f; //Size
}

//Set Text Transparency
void graphics_setTextAlpha(s32 Transparency)
{
	D_801282C0.alpha = Transparency;
}

//Set Text Font
void graphics_setTextFont(s32 Font)
{
	D_801282C0.font = Font;
}

//Set Text Shakiness
void graphics_setTextShaky(s32 shakiness)
{
	D_801282C0.shaky = shakiness;
}

void func_800B8CB0(s32 unk)
{
	D_801282C0.unk7 = unk;
}

void graphics_setTextColors(s8 arg0, s8 arg1, s8 arg2)
{
	D_801282C0.red = arg0;
	D_801282C0.green = arg1;
	D_801282C0.blue = arg2;
}

//Set Text Pattern
void graphics_setTextPattern(s32 pattern)
{
	D_801282C0.pattern = pattern -0xC24;
}

//Set Text Size
void graphics_setTextScale(f32 size)
{
	D_801282C0.size = size;
}

s32 func_800B8CFC(char* text)
{
	f32 temp_f10;
	s32 temp_v0;
	s32 var_s1;
	s32 var_s2;
	s32 var_s3;

	var_s2 = 0;
	var_s3 = 0;
	var_s1 = 0;

	for (var_s1 = 0; var_s1 < string_length(text); var_s1++)
	{
		temp_v0 = func_800D36C4(D_801282C0.font, text[var_s1]);
		temp_f10 = (f32)(temp_v0 + var_s3);
		var_s2 += (temp_f10 * 0.5f);
		var_s3 = temp_v0;
	}
	return var_s2 * D_801282C0.size;
}

void graphics_drawChar(GraphicsBuffers* arg0, s32 coordX, s32 coordY, char charToPrint)
{
	if (D_801282C0.unkC != 0)
	{
		D_801282C0.unk8 = 0;
		func_800B81CC(arg0, coordX, coordY, charToPrint);
	}

}

//graphics_drawString
void func_800B8E28(GraphicsBuffers* buf, s32 xCoord, s32 yCoord, char* text)
{
	s32 var_s5;
	s32 var_s4;
	s32 var_v0;

	if (D_801282C0.unkC == 0)
	{
		return;
	}

	if (D_801282C0.unk7 != 0)
	{
		var_s4 = func_800D3574(D_801282C0.font) * D_801282C0.size;
	}
	else
	{
		var_s5 = func_800D35BC(D_801282C0.font) * D_801282C0.size;
	}

	D_801282C0.unk8 = 0;
	while (*text != '\0')
	{
		var_v0 = func_800B81CC(buf, xCoord, yCoord, *text);
		text++;
		if ((D_801282C0.unk7 != 0) && (D_801282C0.unk8 == 0))
		{
			xCoord += var_v0 / 2;
			D_801282C0.unk8 = 1;
		}
		else
		{
			xCoord += D_801282C0.unk7 != 0
				? (var_v0 != 0 ? var_v0 : var_s4)
				: var_s5;
		}
	}
}

//graphics_drawStringHorizCentered
void func_800B8F88(GraphicsBuffers* buf, s32 verticalOffset, char* text)
{
	func_800B8E28(buf, (0x130 - func_800B8CFC(text)) / 2, verticalOffset, text);
}

void func_800B8FE0(void) {
	D_8012712C = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E91790/func_800B8FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E91790/func_800B9038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E91790/func_800B90C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E91790/func_800B90E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E91790/func_800B9108.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E91790/func_800B9170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E91790/func_800B956C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E91790/func_800B97A4.s")
