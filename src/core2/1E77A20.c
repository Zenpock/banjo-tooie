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
#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E4AC.s")

void func_8009E4E0(PlayerState* self, s32 arg1, void (*arg2)(PlayerState*, s32, s32)) {
    self->unk114->unk0[arg1].unk8 = arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E4FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E53C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E55C.s")

void func_8009E5A4(PlayerState* self, s32 arg1, s32 arg2) {
    self->unk114->unk0[arg1].unk4 = arg2;
}

s32 func_8009E5C0(void) 
{
    return sizeof(BanjoState);
}


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

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E674.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E69C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E6C4.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E71C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E74C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E77C.s")

void func_8009E7AC(PlayerState* self) {
    self->state->previous = BS_STATE_0_INVALID;
    self->state->current = BS_STATE_0_INVALID;
    self->state->next = BS_STATE_0_INVALID;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E7C8.s")

void func_8009E830(PlayerState* self, s32 arg1) {
    self->state->unkE = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E77A20/func_8009E83C.s")
