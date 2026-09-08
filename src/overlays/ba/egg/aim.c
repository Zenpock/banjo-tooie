#include "ba/egg/aim.h"

s32 baeggaim_entrypoint_0() 
{
    return 0x4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/egg/aim/func_80800008_baeggaim.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/egg/aim/func_808000B4_baeggaim.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/egg/aim/func_80800170_baeggaim.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/egg/aim/func_80800264_baeggaim.s")

void baeggaim_entrypoint_1(s32 arg0)
{
    _baeggcursor_entrypoint_7(arg0,0x4);
    _baeggfire_entrypoint_4(arg0);
}

void baeggaim_entrypoint_2(s32 arg0)
{
    _baeggcursor_entrypoint_7(arg0,0x3);
    _baeggfire_entrypoint_5(arg0);
}

void baeggaim_entrypoint_3(PlayerState* arg0)
{
	s32 sp28[2];
	s32 sp24;

	if (_bafpctrl_entrypoint_2(arg0) == 0)
	{
		func_80094AB4(arg0);
	}
	func_808000B4_baeggaim(arg0, sp28);
	if ((baflag_isTrue(arg0, 0x2E) == 0) && (_bafpctrl_entrypoint_1(arg0) == 0))
	{
		func_80800264_baeggaim(arg0, sp28);
	}
	sp24 = 0;
	if (func_80094510(arg0) == 7)
	{
		if (bakey_held(arg0, BUTTON_Z) != 0)
		{
			sp24 = 1;
		}
	}
	else if (bakey_pressed(arg0, BUTTON_Z) != 0)
	{
		sp24 = 1;
	}
	if ((sp24 != 0) && (_bafpctrl_entrypoint_2(arg0) == 0) && (func_80094B14(arg0) != 0))
	{
		_baeggfire_entrypoint_7(arg0);
	}
	_baeggfire_entrypoint_6(arg0);
}