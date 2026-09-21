#include "ba/physics.h"

extern f32 D_80117EF0;
extern f32 D_80117EF4;
extern f32 D_801252A0;
extern f32 D_801252A4;
extern f32 D_801252A8;

s32 func_8009AD70() 
{
    return 0xF;
}

s32 func_8009AD78(PlayerState* self, s32 arg1) {
    return self->unkC4[arg1];
}

void func_8009AD88(s32 arg0) 
{
}

void func_8009AD90(PlayerState* arg0)
{
	s32 var_v0;
	for (var_v0 = 0; var_v0 != 0xF; var_v0++)
	{
		arg0->unkC4[var_v0] = 0;
	}
}

void func_8009ADF0(PlayerState* self, s32 arg1, s32 arg2) {
    self->unkC4[arg1] = arg2;
}

s32 func_8009AE00() 
{
    return 0xC4;
}

void func_8009AE08(PlayerState* arg0) {
	f32 sp7C[3];
	f32 sp70[3];
	f32 sp64[3];
	f32 sp58[3];
	f32 sp4C[3];
	f32 sp40[3];
	f32 sp3C;
	f32 sp38;
	f32 var_f12;

	func_800EEB9C(arg0->unkC8->unk1C, arg0->unkC8->unk40[0], arg0->unkC8->unk4C[1] * arg0->unkC8->unk34[2]);
	sp64[0] = arg0->unkC8->unk10[0];
	sp64[1] = 0.0f;
	sp64[2] = arg0->unkC8->unk10[2];
	func_800EE7F8(sp58, arg0->unkC8->unk1C);
	sp58[1] = 0.0f;
	if (func_80096518(arg0) != 0)
	{
		func_800963C0(arg0, sp4C);
		func_800EF410(sp40, sp58);
		sp3C = func_800EEAA4(sp40, sp4C);
		sp38 = func_800A3378(arg0);
		if (sp3C != 0.0f)
		{
			if (sp3C < 0.0f)
			{
				if (func_8008E1C4(arg0) != 0)
				{
					sp38 = func_800F10B4(sp38, 0.0f, 1.0f, sp3C * 0.5f, -1.0f);
				}
				else
				{
					sp38 = sp3C * 0.5f;
				}
				func_800EF334(sp58, 1.0f + sp38);
			}
			else
			{
				func_800EF334(sp58, (0, 1.0f) + sp3C * D_801252A0);
			}
		}
	}
	func_800EFA20(sp7C, sp58, func_80094E98(arg0));
	func_800EFA20(sp70, sp64, func_80094E98(arg0));
	func_800EF3DC(sp7C, sp70);
	func_800EF334(sp7C, time_getDelta() * 30.0f);
	func_800EF04C(arg0->unkC8->unk10, sp7C);
	arg0->unkC8->unk10[1] += (arg0->unkC8->unk34[0] * time_getDelta());
	if (arg0->unkC8->unk10[1] < arg0->unkC8->unk34[1])
	{
		arg0->unkC8->unk10[1] = arg0->unkC8->unk34[1];
	}
	func_800EFA20(arg0->unkC8->unk28, arg0->unkC8->unk10, time_getDelta());
	func_800EF04C(arg0->unkC8->unk4, arg0->unkC8->unk28);
	func_800F2168(arg0->unkC8->unk10, 0.0001f);
}

void func_8009B08C(PlayerState* arg0) {
	f32 sp2C[3];
	f32 sp28;

	sp28 = time_getDelta();
	func_800EFB24(sp2C, arg0->unkC8->unk1C, arg0->unkC8->unk10);
	func_800EF334(sp2C, arg0->unkC8->unk40[1] * sp28);
	if (((SQ(sp2C[0]) + SQ(sp2C[1]) + SQ(sp2C[2]))) < D_801252A4)
	{
		func_800EE7F8(arg0->unkC8->unk10, arg0->unkC8->unk1C);
	}
	else
	{
		func_800EF04C(arg0->unkC8->unk10, sp2C);
	}
	func_800EFA20(arg0->unkC8->unk28, arg0->unkC8->unk10, sp28);
	func_800EF04C(arg0->unkC8->unk4, arg0->unkC8->unk28);
}

void func_8009B170(PlayerState* arg0)
{
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = time_getDelta();
    arg0->unkC8->unk10[1] += arg0->unkC8->unk34[0] * temp_f0;
    temp_f2 = arg0->unkC8->unk34[1];
    if (arg0->unkC8->unk10[1] < temp_f2)
    {
        arg0->unkC8->unk10[1] = temp_f2;
    }
    func_800EFA20(arg0->unkC8->unk28, arg0->unkC8->unk10, temp_f0);
    func_800EF04C(arg0->unkC8->unk4, arg0->unkC8->unk28);
}

void func_8009B1FC(PlayerState* self) {
    f32 temp_f0;
    f32 temp_f12;
    f32 var_f2;

    temp_f0 = time_getDelta();

    self->unkC8->unk10[1] += self->unkC8->unk34[0] * temp_f0;

    var_f2 = self->unkC8->unk10[1];
    temp_f12 = self->unkC8->unk34[1];

    if (var_f2 < temp_f12) {
        self->unkC8->unk10[1] = temp_f12;
        var_f2 = self->unkC8->unk10[1];
    }

    self->unkC8->unk28[1] = var_f2 * temp_f0;
    self->unkC8->unk4[1] += self->unkC8->unk28[1];
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B27C.s")

void func_8009B3B8(PlayerState* self)
{
    func_800EE7F8(self->unkC8->unk28, self->unkC8->unk10);
    func_800EF334(self->unkC8->unk28, time_getDelta());
    func_800EF04C(self->unkC8->unk4, self->unkC8->unk28);
}

void func_8009B414(PlayerState* arg0)
{
    f32 sp1C[3];

    func_8009C128(arg0, sp1C);
    func_800EFB24(arg0->unkC8->unk28, arg0->unkC8->unk4, sp1C);
}

void func_8009B450(PlayerState* arg0)
{
    arg0->unkC8->unk4C[0] += time_getDelta();
    arg0->unkC8->unk4[1] = arg0->unkC8->unk40[2] + (func_80013970(func_800F0F9C(arg0->unkC8->unk4C[0], D_801252A8) * 360.0f) * 5.0f);
}

void func_8009B4D0(PlayerState* self, f32 arg1[3]) 
{
    func_800EE7F8(arg1, self->unkC8->unk28);
}

void func_8009B4FC(PlayerState* arg0)
{
    arg0->unkC8->unk0 = 0;
    arg0->unkC8->unk4C[1] = 1.0f;
    func_800EFA4C(arg0->unkC8->unk10, 0.0f, -1.0f, 0.0f);
    func_800EFD24(arg0->unkC8->unk1C);
    func_800EFD24(arg0->unkC8->unk28);
    func_800EFD24(arg0->unkC8->unk4);
    arg0->unkC8->unk40[1] = 2.0f;
    func_8009BC34(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B590.s")
void func_8009B7C0(PlayerState* self)
{
    baphysics_set_target_horizontal_velocity(self, 0.0f);
    self->unkC8->unk10[2] = 0.0f;
    self->unkC8->unk10[0] = self->unkC8->unk10[2];
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_type.s")

void func_8009B94C(PlayerState* self, f32* arg1)
{
    if (arg1 != NULL)
    {
        func_800EE7F8(self->unkC8->unk1C, arg1);
        return;
    }
    func_800EFD24(self->unkC8->unk1C);
}

void func_8009B98C(PlayerState* self, f32* arg1) {
    func_800EE7F8(self->unkC8->unk4, arg1);
}

void baphysics_set_target_horizontal_velocity(PlayerState* self, f32 vel) {
    self->unkC8->unk34[2] = vel;
}

void baphysics_set_target_yaw(PlayerState* self, f32 target_yaw) {
    self->unkC8->unk40[0] = func_800136E4(target_yaw);
}

void func_8009B9F0(PlayerState* self, f32 arg1)
{
    baphysics_set_target_horizontal_velocity(self, arg1);
    func_800EEB9C(self->unkC8->unk1C, self->unkC8->unk40[0], self->unkC8->unk34[2]);
    self->unkC8->unk1C[1] = 0.0f;
    self->unkC8->unk10[0] = self->unkC8->unk1C[0];
    self->unkC8->unk10[2] = self->unkC8->unk1C[2];
}

void baphysics_set_vertical_velocity(PlayerState* self, f32 arg1) {
    self->unkC8->unk10[1] = arg1;
}

void baphysics_set_horizontal_velocity(PlayerState* self, f32 yaw, f32 vel) {
    func_800EEB9C(self->unkC8->unk10, yaw, vel);
}

void func_8009BA9C(PlayerState* self, f32* arg1)
{
    if (arg1 != NULL)
    {
        func_800EE7F8(self->unkC8->unk10, arg1);
        return;
    }
    func_800EFD24(self->unkC8->unk10);
}

f32 func_8009BADC(PlayerState* self) {
    return self->unkC8->unk34[0];
}

f32 func_8009BAE8(PlayerState* self) {
    return self->unkC8->unk34[1];
}
s32 func_8009BAF4(PlayerState* self) {
    return self->unkC8->unk0;
}

f32 baphysics_get_target_horizontal_velocity(PlayerState* self) {
    return self->unkC8->unk34[2];
}
f32 func_8009BB0C(PlayerState* self) {
    return self->unkC8->unk1C[1];
}

f32 func_8009BB18(PlayerState* self) {
    return self->unkC8->unk40[0];
}

void func_8009BB24(PlayerState* self, f32* arg1) { func_800EE7F8(arg1, self->unkC8->unk10); }

f32 baphysics_get_vertical_velocity(PlayerState* self) {
    return self->unkC8->unk10[1];
}
f32 func_8009BB5C(PlayerState* self)
{
    f32 temp_f0;
    f32 temp_f2;
    temp_f0 = self->unkC8->unk10[2];
    temp_f2 = self->unkC8->unk10[0];
    return sqrtf((temp_f0 * temp_f0) + (temp_f2 * temp_f2));
}

f32 func_8009BB94(PlayerState* self) {
    return func_800EEF94(self->unkC8->unk10);
}

f32 func_8009BBB8(PlayerState* self) {
    f32 sp1C;
    f32 temp_f0;
    f32 var_f12;

    sp1C = func_8009BB5C(self);
    temp_f0 = baphysics_get_target_horizontal_velocity(self);
    if (sp1C < temp_f0) {
        var_f12 = sp1C / temp_f0;
    }
    else {
        var_f12 = 1.0f;
    }
    return var_f12;
}

void func_8009BC08(PlayerState* self, f32* arg1) {
    func_800EE7F8(arg1, self->unkC8->unk4);
}

void func_8009BC34(PlayerState* self)
{
    baphysics_reset_gravity(self);
    baphysics_reset_terminal_velocity(self);
}

void func_8009BC5C(PlayerState* self, f32 arg1) {
    self->unkC8->unk40[1] = arg1;
}

void baphysics_reset_gravity(PlayerState* self) {
    baphysics_set_gravity(self, D_80117EF0);
}

void baphysics_reset_terminal_velocity(PlayerState* self) {
    baphysics_set_terminal_velocity(self, D_80117EF4);
}

void baphysics_set_gravity(PlayerState* self, f32 arg1)
{
    self->unkC8->unk34[0] = arg1;
}

void baphysics_set_terminal_velocity(PlayerState* self, f32 arg1) {
    self->unkC8->unk34[1] = arg1;
}

s32 func_8009BCD4(PlayerState* arg0, f32 arg1)
{
    f32 temp_f0;
    f32 temp_f2;
    s32 var_v0;

    var_v0 = 0;
    temp_f0 = arg0->unkC8->unk10[2];
    temp_f2 = arg0->unkC8->unk10[0];
    return (((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) <= (arg1 * arg1));
}

void func_8009BD18(PlayerState* arg0, f32 arg1) {
    arg0->unkC8->unk4C[1] = arg1;
}