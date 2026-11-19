#include "core2/1EC3810.h"

extern s16 D_80132DC0;
extern u16 D_80132DC2;

extern s32 D_80127EF0;
extern s32 D_80127EF4;
extern s32 D_80127EF8;
extern s16 D_80132DCA;
extern s16 D_80132DCC;

void func_800E9F20(s32 arg0, s32 arg1)
{
	GraphicsBuffers* buf;

	buf = graphics_getGraphicsBuffer();
	if (D_80132DCC == 0)
	{
		func_800E44FC(buf);
		return;
	}
	func_800BE9B0();
	func_800BFD6C(buf, arg0); //Draw Skybox
	func_800E44FC(buf);
	func_800D2A44(buf);
	func_800BC8F8(buf);
	func_800BE9E4(buf); //Draw World
	func_800BD594(buf);
	func_800EB51C(1, buf); //Draw solid actors
	func_800EB51C(5, buf); //Draw Shadows
	func_800F5008(buf); //Draw Banjo
	func_800EB51C(0, buf); //Draw Actors
	func_800B525C(buf);
	if (func_800BF3E4() != 0) {
		func_800BEA24(buf); //Transparent Textures
	}
	func_800B7BB0();
	func_800F50D0(buf);
	func_800EB51C(2, buf);
	func_800B52EC(buf); //Particles
	func_800BC948(buf);
	func_800EB51C(6, buf);
	if (D_80127EF4 != 0) {
		_sufade_entrypoint_1(buf);
	}
	func_800A8EF0(buf, arg0);
	func_800F51CC();
}

// Get World Section
MapId map_getCurrent(void) 
{
	return D_80132DC2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA090.s")

s32 func_800EA09C(void) {
    return D_80132DC0;
}

void func_800EA0A8()
{
    _gsworldDll_entrypoint_1(&D_80132DC0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA0CC.s")

void func_800EA124()
{
    _gsworldDll_entrypoint_4(&D_80132DC0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA148.s")

s32 func_800EA170(void)
{
    func_800C718C();
    func_800D8744();
    func_800FA2C0();
    if (func_800A8184() != 4)
    {
        func_800B7E38();
    }
    if (D_80132DCA == 0)
    {
        return 1;
    }
    
    func_800FFBE4();
    func_800EE718();
    if (D_80127EF8 != 0)
    {
        _idworld_entrypoint_5();
    }
    func_800E97C0();
    func_8010D7EC();
    func_800EE748();
    func_800F84FC();
    func_800BF710();
    func_800B592C();
    func_8008B850();
    func_800E1804();
    func_800A8E9C();
    func_800CF264();
    func_800CE628();
    func_800D2574();
    if (func_800EA09C() == 2)
    {
        func_800A1450();
        func_800DAE9C();
    }
    func_800C57F0();
    if (D_80127EF0 != 0)
    {
        _sulights_entrypoint_9();
    }
    func_800BFCC4(1);
    func_8001B50C();
    func_800D6E54(1);
    func_800ABA9C();
    func_800BFF70();
    func_800B50F0();
    func_800DBC68();
    func_800E8A68();
    func_800D5270();
    func_800C0438();
    func_800FFD10(1);
    func_800C7494();
    func_80100534();
    func_80100C74();
    func_800FFBEC();
    func_800BF7E0();
    func_800C8A08();
    func_800D154C();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA334.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA34C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA364.s")

void func_800EA370()
{
    func_800EA3A0();
}

void func_800EA390(void) {
}

void func_800EA398(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA3A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA400.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA51C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA614.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EA628.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EAA2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EADFC.s")

int func_800EB15C(ActorMarker* arg0)
{
	if (arg0->unk18_0)
	{
		return 0;
	}
	if (!arg0->unk24_22)
	{
		return 1;
	}
	if (!game_isMultiplayer())
	{
		if (!func_800F6774(character_getActiveIndex()))
		{
			if ((arg0->unk18_16) && (func_80102F74(func_80106790(arg0), 0x88000000)))
			{
				return 1;
			}
			return 0;
		}
	}
	return 1;
}

void func_800EB210(ActorMarker* arg0, ActorMarker* arg1, s32 arg2)
{
	CallbackTable* temp_v0;

	if (func_800EB15C(arg0) != 0)
	{
		temp_v0 = func_800EC3C4(arg0);
		if (arg0) {}
		switch (arg2)
		{
		case 0:
			if (temp_v0->unk0 != 0)
			{
				temp_v0->unk0(arg0, arg1);
				return;
			}
			break;
		case 1:
			if (temp_v0->unk4 != 0)
			{
				temp_v0->unk4(arg0, arg1);
				return;
			}
			break;
		case 2:
			if (temp_v0->unk8 != 0)
			{
				temp_v0->unk8(arg0, arg1);
			}
			break;
		}
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EB2DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC3810/func_800EB350.s")
