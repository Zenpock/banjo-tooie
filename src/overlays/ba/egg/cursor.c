#include "ba/egg/cursor.h"

void baeggcursor_entrypoint_10(PlayerState*, f32, f32);
void baeggcursor_entrypoint_7(PlayerState*, s32);
extern f32* D_80800690_baeggcursor[];

f32* func_80800000_baeggcursor(s32 arg0)
{
    return D_80800690_baeggcursor[arg0];
}

s32 baeggcursor_entrypoint_0() 
{
    return 0x1C;
}

void baeggcursor_entrypoint_1(PlayerState* self)
{
    s32 sp30[2];
    s32 sp2C;

    sp2C = func_800A89F8();
    if (func_800A4C68(self) == sp2C)
    {
        if ((self->cursor->unk8 != 0) && (self->cursor->unkA != 0) && (func_800A9C98() == 0))
        {
            func_800E253C(self->cursor->unk18);
            func_800E257C(self->cursor->unk14);
            func_800E2434(1);
            func_800E24CC(1);
            sp30[0] = (self->cursor->unk0 * 4.0f);
            sp30[1] = (self->cursor->unk4 * 4.0f);
            func_800E30E0((s32)func_800A7180(), func_800D674C(0x64E), 0, sp30);
        }
    }
}

u8 baeggcursor_entrypoint_2(PlayerState* self) {
    return self->cursor->unk9;
}

void baeggcursor_entrypoint_3(PlayerState* self, f32* arg1, f32* arg2) {
    *arg1 = self->cursor->unk0;
    *arg2 = self->cursor->unk4;
}

void baeggcursor_entrypoint_4(PlayerState* self)
{
    baeggcursor_entrypoint_7(self,0);
}

void baeggcursor_entrypoint_5(PlayerState* self)
{
    self->cursor->unk9 = 0;
    baeggcursor_entrypoint_7(self, 1);
}

void baeggcursor_entrypoint_6(PlayerState* self, s32 arg1) {
    self->cursor->unkA = arg1;
}

void baeggcursor_entrypoint_7(PlayerState* self, s32 arg1)
{
    switch (self->cursor->unk9)
    {
    case 0:
        self->cursor->unk8 = 0;
        self->cursor->unkA = 1;
        break;
    case 1:
        self->cursor->unk8 = 1;
        self->cursor->unk14 = 0x78;
        break;
    case 3:
        self->cursor->unk14 = 0x78;
        break;
    }
    self->cursor->unk9 = arg1;
    switch (arg1)
    {
    case 0:
    case 1:
        func_8009ADF0(self, 8, 0);
        if (self->cursor->unk8 != 0)
        {
            self->cursor->unk8 = 0U;
            return;
        }
    default:
        return;
    case 2:
        func_8009ADF0(self, 8, 1);
        self->cursor->unk18 = 1.0f;
        self->cursor->unk14 = 0x78;
        return;
    case 3:
        func_8009ADF0(self, 8, 1);
        self->cursor->unkC = 0.3f;
        baeggcursor_entrypoint_10(self, 152.0f, 114.0f);
        self->cursor->unk18 = 16.0f;
        self->cursor->unk14 = 0;
        return;
    case 4:
        func_8009ADF0(self, 8, 1);
        self->cursor->unkC = 0.2f;
        return;
    case 5:
        func_8009ADF0(self, 8, 1);
        self->cursor->unkC = 0.0f;
        self->cursor->unk10 = 0;
        break;
    }
}

void baeggcursor_entrypoint_8(PlayerState* self)
{
    switch (self->cursor->unk9)
    {
    default:
        baeggcursor_entrypoint_7(self, 5);
    case 0:
    case 1:
    case 4:
        break;
    }
}

s32 baeggcursor_entrypoint_9(PlayerState* self) {
    switch (self->cursor->unk9)
    {
    default:
        return 1;
    case 0:
    case 1:
    case 4:
        return 0;
    }
}

void baeggcursor_entrypoint_10(PlayerState* self, f32 arg1, f32 arg2) {
    self->cursor->unk0 = arg1;
    self->cursor->unk4 = arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/egg/cursor/baeggcursor_entrypoint_11.s")
