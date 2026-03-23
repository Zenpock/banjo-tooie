#include "ch/newmumbo.h"

extern f32 D_808019F4_chnewmumbo;
extern f32 D_80801A0C_chnewmumbo[];
extern ActorData D_80801B14_chnewmumbo;

void func_80800000_chnewmumbo(Actor*, s32, s32);
void func_8080009C_chnewmumbo(Actor*);
void func_80800264_chnewmumbo(Actor*, s32);
void func_8080073C_chnewmumbo(Actor*, s32);
void func_80800000_chnewmumbo(Actor* arg0, s32 arg1, s32 arg2)
{
	NewMumboStruct* temp_v0;

	temp_v0 = (NewMumboStruct*)func_80100094(arg0, 0U);
	switch (temp_v0->unk24)
	{
	case 0:
		_capod_entrypoint_2(arg0->unk0, 0xAU, 0);
	case 1:
		_capod_entrypoint_8(1);
		temp_v0->unk24 = 2;
		_gcdialogcamera_entrypoint_6(arg0->unk0);
		_gcdialogcamera_entrypoint_8();
	case 2:
		_capod_entrypoint_7(arg1, arg2);
		return;
	}
}

void func_8080009C_chnewmumbo(Actor* arg0) {
	NewMumboStruct* temp_v0;

	temp_v0 = (NewMumboStruct*)func_80100094(arg0, 0U);
	if (temp_v0->unk24 != 0) {
		_capod_entrypoint_3(0);
		temp_v0->unk24 = 0;
	}
}

void func_808000DC_chnewmumbo(Actor* arg0, u32 arg1, u32 arg2)
{
	arg0->unk74_30 = 1;
	_subaddiedialog_entrypoint_11(arg0->unk0, arg1, arg2, arg0->position, 0x10U);
}

GameFlag func_8080011C_chnewmumbo(void) {

	if (func_800DA298(0x9C5) == 0) {
		return 0;
	}
	switch (func_800EA05C())
	{
		case MAP_B7_MT_MUMBO:
			return FLAG_37F_PAID_GLOWBO_MUMBO_MT;
		case MAP_D9_GGM_MUMBO:
			return FLAG_380_PAID_GLOWBO_MUMBO_GGM;
		case MAP_176_WW_MUMBO:
			return FLAG_381_PAID_GLOWBO_MUMBO_WW;
		case MAP_EF_JRL_MUMBO:
			return FLAG_382_PAID_GLOWBO_MUMBO_JRL;
		case MAP_171_GGM_MUMBO:
			return FLAG_383_PAID_GLOWBO_MUMBO_TDL;
		case MAP_172_GI_MUMBO:
			return FLAG_387_PAID_GLOWBO_MUMBO_GI;
		case MAP_134_HP_MUMBO:
			return FLAG_384_PAID_GLOWBO_MUMBO_HFP;
		case MAP_13E_CCL_MUMBO:
		case MAP_13F_CCL_MINGY_JONGO:
			return FLAG_385_PAID_GLOWBO_MUMBO_CCL;
		case MAP_156_IOH_MUMBO:
			return FLAG_386_PAID_GLOWBO_MUMBO_IoH;
		default:
			return 0;
	}
}

void func_80800210_chnewmumbo(s32* arg0) {
	func_8008F8B0();
	func_8008F8D8(1);
	func_8008F938(1);
	func_8008F904(func_8010D5DC, *arg0);
	func_8008F990(D_80801A0C_chnewmumbo, 200.0f);
}

void func_80800264_chnewmumbo(Actor* arg0, s32 arg1) {
	NewMumboStruct* temp_v1;

	temp_v1 = (NewMumboStruct*)func_80100094(arg0, 0U);
	if ((arg0->unk70_10) == 6)
	{
		arg0->unk74_0 = 1;
	}
	if (func_800DA298(FLAG3_9C6_UNK) != 0)
	{
		func_80102424(arg0, arg1);
		switch (arg0->unk70_10)
		{
		case 1:
			temp_v1->unk1 = 1;
			temp_v1->unk2 = 0;
			return;
		case 2:
		case 3:
		case 4:
			func_80800210_chnewmumbo((s32*)arg0);
			return;
		case 5:
			func_8080073C_chnewmumbo(arg0, func_80090178(1));
			func_80800000_chnewmumbo(arg0, 2, 1);
			return;
		case 6:
			arg0->unk74_0 = 1;
			arg0->unk7A_9 = 3;
			arg0->unk7A_12 = 7;
			arg0->unk6C_0 = 0;
			arg0->unk70_22 = 1;
			return;
		case 7:
			arg0->unk74_0 = 1;
			if (func_800DA9E4(FLAG_07D_FTT_MUMBO, 1) == 0)
			{
				func_808000DC_chnewmumbo(arg0, 0x11D6U, 7U);
			}
			else
			{
				func_808000DC_chnewmumbo(arg0, 0x11E4U, 7U);
			}
			_suexpression_entrypoint_12(func_80100094(arg0, 1U), 60.0f, 0.0f);
			return;
		case 8:
			if (func_800D1A04(0x48) > 0)
			{
				func_808000DC_chnewmumbo(arg0, 0x11D7U, 0x46U);
				return;
			}
			func_808000DC_chnewmumbo(arg0, 0x11DAU, 7U);
			return;
		case 18:
			temp_v1->unk1 = 0;
			func_800EE7F8(arg0->position, &D_808019F4_chnewmumbo);
			return;
		case 19:
			temp_v1->unk2 = 1;
			temp_v1->unk1 = 0;
			return;
		case 14:
			func_8080009C_chnewmumbo(arg0);
			func_800904C8(0x8D);
			func_80090590(0x3C, arg0->position);
			temp_v1->unk0 = 1;
			if (func_800DA9E4(FLAG_429_FTT_MUMBO_USED, 1) == 0)
			{
				func_80800000_chnewmumbo(arg0, 5, 1);
				func_808000DC_chnewmumbo(arg0, 0x11E6U, 0xFU);
				return;
			}
			break;
		case 10:
		case 11:
			temp_v1->unk1 = 1;
			temp_v1->unk2 = 0;
			func_8080009C_chnewmumbo(arg0);
			break;
		}
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/newmumbo/func_808004E8_chnewmumbo.s")

void func_8080073C_chnewmumbo(Actor* arg0, s32 arg1)
{
	if (!(arg0->unk64_19))
	{
		if (arg1 != 0)
		{
			func_800F7B9C(_plsu_entrypoint_1(1), 0x8DU);
		}
		func_800F8300(func_800F54E4(), 2, arg0->position);
		arg0->unk64_19 = 1;
	}
}

void func_808007B0_chnewmumbo(Actor* arg0)
{
	if (arg0->unk64_19)
	{
		func_800F82D4(func_800F54E4(), 0);
		arg0->unk64_19 = 0;
	}
}

void func_808007FC_chnewmumbo(Actor* arg0, s32 arg1)
{
	NewMumboStruct* temp_v0;

	temp_v0 = (NewMumboStruct*)func_80100094(arg0, 0U);
	if (temp_v0->unk0 == 0)
	{
		func_80101808(arg0, func_801017D0);
		if ((temp_v0->unk1 != 0) && (arg0->unk7C_12)) {
			func_800DBEFC(arg0->unk0->unk4, 0xB, temp_v0->unk4);
		}
	}
}

void func_80800878_chnewmumbo(Actor* arg0)
{
    func_80800264_chnewmumbo(arg0,0xE);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/newmumbo/func_80800898_chnewmumbo.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/newmumbo/func_8080092C_chnewmumbo.s")

void func_808014FC_chnewmumbo(Actor* arg0, s32 arg1, s32 arg2)
{
	u32 temp_t1;
	u32 temp_t2;
	NewMumboStruct* temp_v0;

	temp_v0 = (NewMumboStruct*)func_80100094(arg0, 0U);
	arg0->unk74_30 = 0;
	switch (arg1)
	{
	case 0x11D7:
		if (arg2 > 0)
		{
			func_808000DC_chnewmumbo(arg0, 0x11D8U, 7U);
			return;
		}
		func_808000DC_chnewmumbo(arg0, 0x11D9U, 7U);
		return;
	case 0x11D9:                                    /* switch 1 */
		func_800EE7F8((f32*)arg0->actorData, arg0->position);
		func_808007B0_chnewmumbo(arg0);
		func_80800264_chnewmumbo(arg0, 0xA);
		return;
	case 0x11DA:                                    /* switch 1 */
		func_800EE7F8((f32*)arg0->actorData, arg0->position);
		func_808007B0_chnewmumbo(arg0);
		func_80800264_chnewmumbo(arg0, 0xA);
		return;
	case 0x11D8:                                    /* switch 1 */
		temp_v0->unk3 = 1;
		return;
	case 0x11EB:                                    /* switch 1 */
		func_8080009C_chnewmumbo(arg0);
		return;
	case 0x11DB:
		switch (arg0->unk70_10)
		{
		case 4:
			if (arg2 > 0)
			{
				func_80800878_chnewmumbo(arg0);
				return;
			}
			func_808000DC_chnewmumbo(arg0, 0x11EAU, 0xFU);
			return;
		case 3:

			if (arg2 > 0)
			{
				func_80800000_chnewmumbo(arg0, 2, 1);
				func_80800264_chnewmumbo(arg0, 0x11);
				return;
			}
			break;
		default:
			return;
		}
		func_808000DC_chnewmumbo(arg0, 0x11EAU, 0xFU);
		return;
	case 0x11EA:
		switch (arg0->unk70_10)
		{
		case 3:
			func_80800264_chnewmumbo(arg0, 0xB);
			func_808007B0_chnewmumbo(arg0);
			return;
		case 4:
			func_8080009C_chnewmumbo(arg0);
			func_808007B0_chnewmumbo(arg0);
			func_80800264_chnewmumbo(arg0, 0x13);
			return;
		}
		break;
	case 0x11E6:
		func_8080009C_chnewmumbo(arg0);
		break;
	}
}

void chnewmumbo_entrypoint_0(Actor* arg0, f32 arg1[3])
{
	func_800EE7F8(arg1, ((NewMumboStruct*)func_80100094(arg0, 0U))->unk4);
}

void func_8080172C_chnewmumbo(Actor* arg0) 
{
    if (func_80100094(arg0,1) != 0)
    {
        _suexpression_entrypoint_8(arg0, 1);
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/newmumbo/func_80801760_chnewmumbo.s")

ActorData* chnewmumbo_entrypoint_1(void) {
	return &D_80801B14_chnewmumbo;
}
