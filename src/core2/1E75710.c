#include "core2/1E75710.h"


//BaPitch

s32 bapitch_getStructSize() 
{
    return sizeof(ba_unknown_DC_s);
}

void bapitch_update_limited(PlayerState* self, f32 arg1, f32 arg2)
{
	ba_unknown_DC_s* temp2;
	f32 temp_f2;
	f32 sp2C;
	f32 gameSpeed;


	gameSpeed = time_getDelta();
	temp2 = self->unkDC;
	sp2C = ml_absNormalizeAngle_f(temp2->unk4 - temp2->unk0);
	temp_f2 = sp2C * arg2;
	if (temp_f2 != 0.0f)
	{
		temp_f2 = temp_f2 < 0.0f ? ml_clamp_f(temp_f2, -arg1, -3.0f) : ml_clamp_f(temp_f2, 3.0f, arg1);
	}
	temp2->unk0 += func_800F212C(temp_f2 * gameSpeed, sp2C);
	temp2->unk0 = ml_normalizeAngle_f(temp2->unk0);
}

void bapitch_init(PlayerState* self)
{
    self->unkDC->unk0 = 0.0f;
    self->unkDC->unk4 = 0.0f;
    bapitch_resetAngularVelocity(self);
}

void bapitch_update(PlayerState* self)
{
    bapitch_update_limited(self, self->unkDC->unk8, self->unkDC->unkC);
}

void bapitch_setIdeal(PlayerState* self, f32 arg1) {
    self->unkDC->unk4 = ml_normalizeAngle_f(arg1);
}

void bapitch_set(PlayerState* self, f32 arg1) {
    self->unkDC->unk0 = ml_normalizeAngle_f(arg1);
}

void bapitch_applyIdeal(PlayerState* self) {
    self->unkDC->unk0 = self->unkDC->unk4;
}

f32 bapitch_get(PlayerState* self) {
    return self->unkDC->unk0;
}

f32 bapitch_getIdeal(PlayerState* self)
{
    return self->unkDC->unk4;
}

void bapitch_setAngularVelocity(PlayerState* self, f32 arg1, f32 arg2)
{
    self->unkDC->unk8 = arg1;
    self->unkDC->unkC = arg2;
}

void bapitch_resetAngularVelocity(PlayerState* self) {
    bapitch_setAngularVelocity(self, 500.0f, 0.8f);
}