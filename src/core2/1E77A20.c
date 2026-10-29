#include "core2/1E77A20.h"

s32 func_8009E130() 
{
    return 0xF4;
}

f32 func_8009E138(PlayerState* self, s32 arg1) {
    return self->unk114->unk0[arg1].unk0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E154.s")

void func_8009E388(s32 arg0) 
{
}

void func_8009E390(PlayerState* arg0) {
	s32 var_s0;
	BaUnknown114_2* temp;
	arg0->unk114->unkF0 = 0;
	for (var_s0 = 0; var_s0 < 3; var_s0++)
	{
		temp = &arg0->unk114->unk0[var_s0];
		temp->unk0 = 0.0f;
		temp->unk4 = 0;
		temp->unk8 = 0;
		temp->unk20 = 0.0f;
		temp->unk24 = 0.0f;
		temp->unk1C = 0.0f;
		temp->unk18 = 0.0f;
		ml_vec3f_clear(temp->unkC);
	}
	func_8009E5A4(arg0, 0, 1);
	func_8009E5A4(arg0, 1, 2);
	func_8009E5A4(arg0, 2, 3);
	func_8009E55C(arg0, 0, 32.0f);
	func_8009E55C(arg0, 1, 28.0f);
	func_8009E55C(arg0, 2, 0);
}

void func_8009E474(PlayerState* arg0)
{
	rare_memcpy(arg0->unk114, &arg0->unk114->unk0[3], 0x78);
	arg0->unk114->unkF0 = 0;
}

void func_8009E4AC(PlayerState* arg0)
{
	arg0->unk114->unkF0 = 1;
	rare_memcpy(&arg0->unk114->unk0[3], arg0->unk114, 0x78);
}

void func_8009E4E0(PlayerState* self, s32 arg1, void (*arg2)(PlayerState*, s32, s32)) {
    self->unk114->unk0[arg1].unk8 = arg2;
}

void func_8009E4FC(PlayerState* arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
	arg0->unk114->unk0[arg1].unk20 = arg2;
	arg0->unk114->unk0[arg1].unk24 = arg3;
	arg0->unk114->unk0[arg1].unk1C = arg4;
}

void func_8009E53C(PlayerState* arg0, s32 arg1, f32 arg2) {
	arg0->unk114->unk0[arg1].unk18 = arg2;
}

void func_8009E55C(PlayerState* arg0, s32 arg1, f32 arg2) {
	arg0->unk114->unk0[arg1].unk0 = arg2;
	if (arg2 == 0.0f) {
		func_8009E4E0(arg0, arg1, NULL);
	}
}

void func_8009E5A4(PlayerState* self, s32 arg1, s32 arg2) {
    self->unk114->unk0[arg1].unk4 = arg2;
}

s32 func_8009E5C0(void) 
{
    return sizeof(BanjoState);
}

//remove
void (*func_8009CAAC(PlayerState *, BanjoStateId))(PlayerState *);
void (*func_8009CAF8(PlayerState *, BanjoStateId))(PlayerState *);

void bs_setState(PlayerState *self, BanjoStateId nextState) {
    if (nextState != BS_STATE_0_INVALID) {
        self->state->next = nextState;
        if (func_8009CAAC(self, self->state->current) != NULL) {
            func_8009CAAC(self, self->state->current)(self);
        }
        self->state->previous = self->state->current;
        self->state->current = self->state->next;
        self->state->next = NULL;
        if (func_8009CAF8(self, self->state->current) != NULL) {
            func_8009CAF8(self, self->state->current)(self);
        }
    }
}

s32 func_8009E674(PlayerState* arg0, s32 arg1) {
	return func_8009CA70(arg0, arg0->state->current, arg1);
}

s32 func_8009E69C(PlayerState* arg0, s32 arg1) {
	return func_8009CA70(arg0, arg0->state->next, arg1);
}

s32 func_8009E6C4(PlayerState* arg0, s32 arg1) {
	return func_8009CA70(arg0, arg0->state->previous, arg1);
}

s16 func_8009E6EC(PlayerState *self) {
    return self->state->unkC;
}

BanjoStateId bs_getCurrentState(PlayerState *self) {
    return self->state->current;
}

BanjoStateId bs_getNextState(PlayerState *self) {
    return self->state->next;
}

BanjoStateId bs_getPreviousState(PlayerState *self) {
    return self->state->previous;
}

s32 func_8009E71C(PlayerState* arg0, s32 arg1) {
	return func_8009CBDC(arg0, arg0->state->current) == arg1;
}

s32 func_8009E74C(PlayerState* arg0, s32 arg1) {
	return func_8009CBDC(arg0, arg0->state->next) == arg1;
}

s32 func_8009E77C(PlayerState* arg0, s32 arg1) {
	return func_8009CBDC(arg0, arg0->state->previous) == arg1;
}

void func_8009E7AC(PlayerState* self) {
    self->state->previous = BS_STATE_0_INVALID;
    self->state->current = BS_STATE_0_INVALID;
    self->state->next = BS_STATE_0_INVALID;
}

//Remove
void (*func_8009CB44(PlayerState*, BanjoStateId))(PlayerState*);

s32 func_8009E7C8(PlayerState* arg0, s32 arg1) {
	arg0->state->unkC = (s16)arg1;
	arg0->state->unkE = 1;
	if (func_8009CB44(arg0, arg0->state->current) != NULL)
	{
		func_8009CB44(arg0, arg0->state->current)(arg0);
	}
	return arg0->state->unkE;
}

void func_8009E830(PlayerState* self, s32 arg1) {
    self->state->unkE = arg1;
}

//remove
void (*func_8009CB90(PlayerState*, BanjoStateId))(PlayerState*);

void func_8009E83C(PlayerState* arg0)
{
	void (*temp_v0)(PlayerState*);

	temp_v0 = func_8009CB90(arg0, arg0->state->current);
	if (temp_v0 != NULL)
	{
		temp_v0(arg0);
	}
}