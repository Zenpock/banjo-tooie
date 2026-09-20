#include "ba/egg/aim.h"

s32 baeggaim_entrypoint_0() 
{
    return 0x4;
}

f32 func_80800008_baeggaim(f32 arg0, f32 arg1, f32 arg2)
{
    s32 var_s0;
    for (var_s0 = 0; var_s0 < func_800D8FEC() * 5; var_s0++)
    {
        arg0 += func_800F0DC0((arg1 - arg0) * 0.04f, arg2);
    }
    return arg0;
}

void func_808000B4_baeggaim(PlayerState* arg0, f32* arg1)
{
    f32 sp24;
    f32 sp20;
    f32 temp_f0;

    _baeggcursor_entrypoint_3(arg0, arg1, &arg1[1]);
    sp24 = (bastick_getX(arg0) * 114.0f) + 114.0f + 38.0f;
    sp20 = (bastick_getY(arg0) * 85.5f) + 85.5f + 28.5f;
    arg1[0] = func_80800008_baeggaim(arg1[0], sp24, 7.4f);
    temp_f0 = func_80800008_baeggaim(arg1[1], sp20, 5.5f);
    arg1[1] = temp_f0;
    _baeggcursor_entrypoint_10(arg0, arg1[0], temp_f0);
}

void func_80800170_baeggaim(f32* arg0, f32* arg1, f32 arg2)
{
    f32 temp_f0;
    f32 var_f12;
    f32 var_f18;

    temp_f0 = 78.0f - arg0[0];
    var_f18 = 0.0f;
    var_f12 = 0.0f;
    if (temp_f0 > 0)
    {
        var_f12 = temp_f0;
    }
    temp_f0 = 226.0f - arg0[0];
    if (temp_f0 < 0)
    {
        var_f12 = temp_f0;
    }
    temp_f0 = 61.0f - arg0[1];
    if (temp_f0 > 0)
    {
        var_f18 = temp_f0;
    }
    temp_f0 = 167.0f - arg0[1];
    if (temp_f0 < 0)
    {
        var_f18 = temp_f0;
    }
    arg1[0] = func_800F1344(var_f12, 0.0f, 40.0f, 0, arg2);
    arg1[1] = func_800F1344(var_f18, 0.0f, 32.5f, 0, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/egg/aim/func_80800264_baeggaim.s")

void baeggaim_entrypoint_1(PlayerState* self)
{
    _baeggcursor_entrypoint_7(self,0x4);
    _baeggfire_entrypoint_4(self);
}

void baeggaim_entrypoint_2(PlayerState* self)
{
    _baeggcursor_entrypoint_7(self,0x3);
    _baeggfire_entrypoint_5(self);
}

void baeggaim_entrypoint_3(PlayerState* self)
{
	f32 sp28[2];
	s32 sp24;

	if (_bafpctrl_entrypoint_2(self) == 0)
	{
		func_80094AB4(self);
	}
	func_808000B4_baeggaim(self, sp28);
	if ((baflag_isTrue(self, 0x2E) == 0) && (_bafpctrl_entrypoint_1(self) == 0))
	{
		func_80800264_baeggaim(self, sp28);
	}
	sp24 = 0;
	if (func_80094510(self) == 7)
	{
		if (bakey_held(self, BUTTON_Z) != 0)
		{
			sp24 = 1;
		}
	}
	else if (bakey_pressed(self, BUTTON_Z) != 0)
	{
		sp24 = 1;
	}
	if ((sp24 != 0) && (_bafpctrl_entrypoint_2(self) == 0) && (func_80094B14(self) != 0))
	{
		_baeggfire_entrypoint_7(self);
	}
	_baeggfire_entrypoint_6(self);
}