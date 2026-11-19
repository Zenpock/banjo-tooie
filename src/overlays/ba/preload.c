#include "ba/preload.h"

extern u8 D_8012762C;
extern s16 D_808002A0_bapreload[][2];
typedef struct {
	s16 unk0;
	s16 unk2;
} UNKD_808002F0_bapreload;

extern UNKD_808002F0_bapreload D_808002F0_bapreload[];
extern UNKD_808002F0_bapreload D_80800300_bapreload[];
extern UNKD_808002F0_bapreload D_80800310_bapreload[];
extern UNKD_808002F0_bapreload D_80800320_bapreload[];

void func_80800000_bapreload(PlayerState* arg0, TransformationId arg1, s16* arg2, s16* arg3)
{
	UNKD_808002F0_bapreload* sp1C;
	s32 var_a0;

	switch (arg1)
	{
	case TRANSFORM_6_BEE:
		sp1C = D_80800310_bapreload;
		break;
	case TRANSFORM_C_SUB:
		sp1C = D_80800320_bapreload;
		break;
	case TRANSFORM_B_KAZOOIE:
		sp1C = D_80800300_bapreload;
		break;
	case TRANSFORM_1_BK:
		sp1C = D_808002F0_bapreload;
		break;
	case TRANSFORM_11_CLOCKWORK:
		*arg2 = 0x60E;
		*arg3 = 0;
		return;
	default:
		*arg2 = 0x607;
		*arg3 = 0;
		return;
	}
	if (func_800EA068(0x20))
	{
		var_a0 = func_800A940C(arg0->unk184);
	}
	else
	{
		var_a0 = arg0->unk184;
	}
	sp1C += var_a0;

	*arg2 = sp1C->unk0;
	*arg3 = sp1C->unk2;
}

void bapreload_entrypoint_0(PlayerState* arg0, TransformationId transform, s16* arg2, s16* arg3)
{
	if (game_isMultiplayer() != 0) {
		func_80800000_bapreload(arg0, transform, arg2, arg3);
		return;
	}
	if (transform == TRANSFORM_B_KAZOOIE)
	{
		if (bs_getDragonKazooieState() != 0)
		{
			*arg2 = ASSET_83A_MODEL_DRAGON_KAZOOIE;
		}
		else
		{
			*arg2 = ASSET_61C_MODEL_KAZOOIE;
		}
		*arg3 = 0;
		return;
	}
	*arg2 = D_808002A0_bapreload[transform][0];
	*arg3 = 0;
	if (*arg2 == 0)
	{
		if (D_8012762C == 0xD)
		{
			*arg2 = 0;
			return;
		}
		*arg2 = 0x607;
	}
}

s32 bapreload_entrypoint_1(TransformationId arg0, s32* arg1)
{
	s32 sp1C;

	sp1C = D_808002A0_bapreload[arg0][1];
	*arg1 = 0;
	switch (arg0)
	{
		case TRANSFORM_B_KAZOOIE:
			if (bs_getDragonKazooieState())
			{
				sp1C = ASSET_62E_MODEL_DRAGON_KAZOOIE_SHADOW;
			}
			break;
		case TRANSFORM_A_BANJO:
		case TRANSFORM_1_BK:
			if (bs_getDragonKazooieState())
			{
				*arg1 = 1;
			}
			break;
	}
	return sp1C;
}