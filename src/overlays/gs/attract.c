#include "gs/attract.h"

typedef struct {
    u8 unk0[4];
    f32 unk4;
}D_80135470_struct;
extern D_80135470_struct D_80135470;

typedef struct {
    s16 unk0;
    s8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
}D_80800490_gsattract_2;

typedef struct
{
    s16 unk0;
    u8 unk2;
    u8 unk3;
    D_80800490_gsattract_2* unk4;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
}D_80800490_gsattractStruct;

extern D_80800490_gsattractStruct D_80800490_gsattract[];
void func_808002A4_gsattract(s32);

void gsattract_entrypoint_0(void) {
    D_80135470.unk4 = 0.0f;
}

void gsattract_entrypoint_1(void)
{
    f32 sp1C;

    sp1C = D_80135470.unk4;
    if (func_800C95D4() != 0)
    {
        D_80135470.unk4 += func_800D9004();
    }
    if ((D_80800490_gsattract[D_80135470.unk0[0]].unk8 & 1) && (D_80135470.unk4 >= 6.0f) && (sp1C < 6.0f))
    {
        _chattract_entrypoint_1(controller_getError() ? 3 : 1);
    }
    if ((D_80800490_gsattract[D_80135470.unk0[0]].unk8 & 2) && (D_80135470.unk4 >= 0.5f) && (sp1C < 0.5f))
    {
        _chattract_entrypoint_1(2);
    }
    if ((D_80800490_gsattract[D_80135470.unk0[0]].unk4[D_80135470.unk0[1]].unk3 & 1) && (D_80135470.unk4 >= 1.0f) && (sp1C < 1.0f))
    {
        _chattract_entrypoint_1(0);
    }
    if ((func_800C95D4() != 0) && (func_80015FA0(0U) != 0))
    {
        func_800A9C50();
    }
}

void gsattract_entrypoint_2(s32 arg0) 
{
}

void gsattract_entrypoint_3(void) {
    s32 var_a0;

    if (func_800A8264() == 0) {
        var_a0 = D_80135470.unk0[1] + 1;
        if (var_a0 >= D_80800490_gsattract[D_80135470.unk0[0]].unk3)
        {
            var_a0 = 0;
        }
        func_808002A4_gsattract(var_a0);
    }
}

void gsattract_entrypoint_4(void) {
    D_80135470.unk0[0] = 2;
}

void func_80800274_gsattract(u32 arg0) {
    D_80135470.unk0[0] = arg0;
    D_80135470.unk0[1] = D_80800490_gsattract[arg0 & 0xFF].unk3;
}

void func_808002A4_gsattract(s32 arg0)
{
    //Randomizer Change just go straight to game select instead of playing demos
    map_travelToTarget(MAP_158_GAME_SELECT, 1, 1);
}

void gsattract_entrypoint_5(u32 arg0)
{
    D_80800490_gsattractStruct* temp_v0;

    if (func_800A8264() == 0) {
        if (widescreen_enabled != 0) {
            arg0 = 1;
        }
        if (arg0 != D_80135470.unk0[0]) {
            func_80800274_gsattract(arg0);
        }
        func_800FE4E4();
        func_800A9B84();
        temp_v0 = &D_80800490_gsattract[D_80135470.unk0[0]];
        func_800A9B8C(D_80800490_gsattract[D_80135470.unk0[0]].unk0, temp_v0->unk2);
        gsattract_entrypoint_3();
    }
}