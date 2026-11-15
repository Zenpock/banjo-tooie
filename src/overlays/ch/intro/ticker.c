#include "ch/intro/ticker.h"

void func_808002DC_chintroticker(Actor*);
void func_808003BC_chintroticker(Actor*);
void func_80800530_chintroticker(Actor*, MapId);
void func_808005AC_chintroticker(Actor*);

s16 D_80800830_chintroticker[][4]=
{
    {0x018E,0xFFFF,0x0087,0x0000},
    {0x018C,0x0087,0x0088,0x0000},
    {0x018F,0x0088,0x0089,0x0000},
    {0x0190,0x0089,0x008A,0x0000},
    {0x017E,0x008A,0x008B,0x0000},
    {0x018D,0x008B,0x008C,0x0000},
    {0x0194,0xFFFF,0x008E,0x0000},
    {0x0197,0x008E,0x008F,0x0000},
    {0x0198,0x008F,0x0090,0x0000},
    {0x0199,0x0090,0x0091,0x0000},
    {0x0195,0x0091,0x0093,0x0000},
    {0x0193,0x0093,0x0094,0x0000},
    {0x0192,0x0094,0x0095,0x0000},
    {0x0191,0xFFFF,0x0098,0x0000},
    {0x0196,0x0098,0x0099,0x0000},
};
s32 D_808008A8_chintroticker[] = {
0,0,0x80,0x81,0x82,0x83
};
s32 D_808008C0_chintroticker[] = {0xA1};
s16 D_808008C4_chintroticker[][2] = 
{
    {0x00A1,0x00A8},
    {0x00A8,0x00A2},
    {0x00A2,0x00A9},
    {0x00A9,0x00A3},
    {0x00A3,0x00AA},
    {0x00AA,0x00A4},
    {0x00A4,0x00AB},
    {0x00AB,0x00A5},
    {0x00A5,0x00AC},
    {0x00AC,0x00A6},
    {0x00A6,0x00A7},
    {0x00A7,0xFFFE},
    {0x018E,0x018C},
    {0x018C,0x018F},
    {0x018F,0x0190},
    {0x0190,0x017E},
    {0x017E,0x018D},
    {0x018D,0xFFFD},
    {0x0194,0x0197},
    {0x0197,0x0198},
    {0x0198,0x0199},
    {0x0199,0x0195},
    {0x0195,0x0193},
    {0x0193,0x0192},
    {0x0192,0xFFFC},
    {0x0191,0x0196},
    {0x0196,0xFFFB},
    {0x018B,0xFFFF}
};

ActorData D_80800934_chintroticker=
{
    /*0x0*/ 0x2C5,
    /*0x2*/ 0x374,
    /*0x4*/ 0x0,
    /*0x6*/ 0x1,
    /*0x8*/ 0x0,
    /*0xC*/ func_808005AC_chintroticker,
    /*0x10*/ func_80105834,
    /*0x14*/ func_8010A730,
    /*0x18*/ 0,
    /*0x1A*/ 0,
    /*0x1C*/ 0.0f,
    /*0x20*/ 0,
    /*0x22*/ 0,
    /*0x24*/ 8,
    /*0x26*/ 4,
    /*0x28*/ func_808003BC_chintroticker,
    /*0x2C*/ 0,
    /*0x30*/ 0,
    /*0x32*/ 0,
    /*0x34*/ func_808002DC_chintroticker,
    /*0x38*/ func_80107C2C,
    /*0x3C*/ 0x8000,
    /*0x3E*/ 0x0202,
    /*0x40*/ NULL,
    /*0x44*/ 0,
    /*0x46*/ 0,
};



void func_80800000_chintroticker(s32 arg0)
{
    s32 i;
    MapId currentMap;
    currentMap = map_getCurrent();
    for (i = 0; i < 0xF; i++)
    {
        if (currentMap == D_80800830_chintroticker[i][0])
        {
            if (D_80800830_chintroticker[i][1] != -1 && func_800FCCD4(D_80800830_chintroticker[i][1]))
            {
                func_800FCAE0(D_80800830_chintroticker[i][1], 0U, 0x2EE0U);
                func_800FCA90(D_80800830_chintroticker[i][1]);
            }

            if (D_80800830_chintroticker[i][2] != -1)
            {
                func_800FC6B0(D_80800830_chintroticker[i][2]);
            }
        }
    }
}
s32 func_808000B0_chintroticker(Actor* arg0, MapId arg1)
{
    s32 sp1C;

    sp1C = 0;
    switch (arg1)
    {
        case MAP_A1_CS_INTRO:
        case MAP_A2_CS_DRILL_START:
        case MAP_A3_CS_DRILL_BOULDER:
        case MAP_A4_CS_MAGIC_LIFT_BOULDER:
        case MAP_A5_CS_REVENGE:
        case MAP_A6_CS_WITCHES_LEAVE:
        case MAP_A7_CS_HOUSE_DESTROYED:
        case MAP_A8_CS_POKER:
        case MAP_A9_CS_EARTHQUAKE:
        case MAP_AA_CS_IT_STOPPED:
        case MAP_AB_CS_EVACUATE_HOUSE:
        case MAP_AC_CS_COME_ON:
            sp1C = 2;
            break;
        case MAP_17E_CS_ZOMBIE_JINGALING:
        case MAP_18C_BOB_EXPLANATION:
        case MAP_18D_ENERGY_GAINED_BOB:
        case MAP_18E_MEANWHILE:
        case MAP_18F_BOB_FIRING_AT_JV:
        case MAP_190_JINGALING_TEMPLE_DRAIN:
            sp1C = 3;
            break;
        case MAP_192_CS_BOTTLES_GETS_HOME:
        case MAP_193_CS_BOTTLES_REVIVED:
        case MAP_194_CS_ABOUT_TO_BOB:
        case MAP_195_CS_LETS_FIX_BOTTLES:
        case MAP_197_CS_JINGALING_REVIVE:
        case MAP_198_CS_JINGALING_TEMPLE_FIX:
        case MAP_199_CS_JINGALING_CELEBRATE:
            sp1C = 4;
            break;
        case MAP_191_CS_PARTY_ENDED:
        case MAP_196_CS_GRUNTY_HEAD_PLAYING:
            sp1C = 5;
            break;
        case MAP_18B_CS_STARTUP_INTRO:
            sp1C = 1;
            break;
        case MAP_167_MT_STILL:
            break;
    }
    if (D_808008A8_chintroticker[sp1C] != 0)
    {
        _gcfrontend_entrypoint_9(D_808008A8_chintroticker[sp1C]);
    }
    arg0->unk79_4 = sp1C;
    return 1;
}

void func_80800188_chintroticker(Actor* actor, s32 arg1)
{
    if ((arg1 == MAP_A1_CS_INTRO) || (arg1 == MAP_18B_CS_STARTUP_INTRO) || (arg1 == MAP_18E_MEANWHILE) || (arg1 == MAP_194_CS_ABOUT_TO_BOB) || (arg1 == MAP_196_CS_GRUNTY_HEAD_PLAYING))
    {
        switch (actor->unk79_4)
        {

        case 1:
            if (controller_getError())
            {
                _chattract_entrypoint_1(3);
                return;
            }
            break;
        case 2:
            flag_setValueTrue(FLAG_578_PROGRESS_BOTTLES_ENERGY_RESTORED);
            return;
        case 3:
            flag_setValueFalse(FLAG_360_PROGRESS_JINGALING_LIFE_SAPPED);
            flag_setValueFalse(FLAG_03B_PROGRESS_FINISHED_TOWER_OF_TRAGEDY);
            return;
        case 4:
            flag_setValueTrue(FLAG_360_PROGRESS_JINGALING_LIFE_SAPPED);
            flag_setValueFalse(FLAG_03B_PROGRESS_FINISHED_TOWER_OF_TRAGEDY);
            flag_setValueFalse(FLAG_578_PROGRESS_BOTTLES_ENERGY_RESTORED);
            break;
        case 0:
        case 5:
        default:
            return;
        }
    }
}

void func_80800254_chintroticker(Actor* actor) {

    switch (actor->unk79_4) {
    case 2:
        flag_setValueFalse(FLAG_578_PROGRESS_BOTTLES_ENERGY_RESTORED);
        return;
    case 3:
        flag_setValueTrue(FLAG_360_PROGRESS_JINGALING_LIFE_SAPPED);
        flag_setValueFalse(FLAG_03B_PROGRESS_FINISHED_TOWER_OF_TRAGEDY);
        return;
    case 4:
        flag_setValueFalse(FLAG_360_PROGRESS_JINGALING_LIFE_SAPPED);
        flag_setValueTrue(FLAG_03B_PROGRESS_FINISHED_TOWER_OF_TRAGEDY);
        flag_setValueFalse(FLAG_1A5_UNK);
        flag_setValueTrue(FLAG_578_PROGRESS_BOTTLES_ENERGY_RESTORED);
    default:
    case 0:
    case 1:
    case 5:
        return;
    }
}

void func_808002DC_chintroticker(Actor* arg0)
{
    MapId currentMap;
    s32 var_s0;

    currentMap = map_getCurrent();
    for (var_s0 = 0; var_s0 < 1; var_s0++)
    {
        if (currentMap == D_808008C0_chintroticker[var_s0])
        {
            _glintrosyncDll_entrypoint_2(0);
        }
    }
    if (func_808000B0_chintroticker(arg0, currentMap) == 0)
    {
        actor_mark_delete(arg0);
        return;
    }
    func_80800188_chintroticker(arg0, currentMap);
    if (_glcutDll_entrypoint_18() == 0x68)
    {
        arg0->unk64_20 = 1;
    }
    func_80800000_chintroticker(arg0);
    ((f32*)arg0->actorData)[4] = 0.0f;
    ((f32*)arg0->actorData)[5] = 0.0f;
}

void func_808003BC_chintroticker(Actor* arg0)
{
}
void func_808003C4_chintroticker(Actor* actor)
{
    func_80800254_chintroticker(actor);
    if (func_800D395C() != 0)
    {
        _gcfrontend_entrypoint_10();
        func_800EA334(1);
        return;
    }
    if (func_800DB9B0() != 0)
    {
        _glcutDll_entrypoint_12(1);
        _glcutDll_entrypoint_17();
        return;
    }
    switch (actor->unk79_4)
    {
    default:
        break;
    case 2:
        func_800A7990(MAP_AF_SM_SPIRAL_MOUNTAIN, 4, 1);
        break;
    case 1:
        _gsattract_entrypoint_5(0);
        break;
    case 4:
        func_800A7990(MAP_160_CK_GUN_CHAMBER, 4, 1);
        break;
    case 5:
        _gcfrontend_entrypoint_13();
        break;
    case 3:
        break;
    }
}

void func_808004A8_chintroticker(Actor* arg0, s32 arg1)
{
    if (func_800A8264() == 0)
    {
        if (arg1 >= 0)
        {
            if (arg0->unk64_20)
            {
                _glcutDll_entrypoint_14(1);
                _glcutDll_entrypoint_24((u32)arg1, -1U, -1U);
                return;
            }
            func_800A7990(arg1, 0, 1);
            return;
        }
        func_808003C4_chintroticker(arg0);
    }
}

void func_80800530_chintroticker(Actor* arg0, MapId arg1)
{
    s32 i;

    for (i = 0; i < 28U; i++)
    {
        if (arg1 == D_808008C4_chintroticker[i][0])
        {
            break;
        }
    }
    for (; i < 28U; i++)
    {

        if (D_808008C4_chintroticker[i][1] < 0)
        {
            func_808004A8_chintroticker(arg0, D_808008C4_chintroticker[i][1]);
            break;
        }
    }
}

//Update
void func_808005AC_chintroticker(Actor* actor)
{
    s32 index;
    MapId currentMap;

    currentMap = map_getCurrent();
    if (func_800DA9E4(FLAG0_000_STATE_CANARY_MARY_CAGE_TRIGGER_DIALOG, 0) != 0)
    {
        for (index = 0; index < 0x1C; index++)
        {
            if (currentMap == D_808008C4_chintroticker[index][0])
            {
                func_808004A8_chintroticker(actor, D_808008C4_chintroticker[index][1]);
            }
        }
    }
    switch (actor->unk79_4)
    {
    case 1:
        if ((flag_getValue(FLAG5_D56_LOGO_SCREEN_SKIPPABLE) != 0) && (func_800A8264() == 0)) {
            if ((func_80015FA0(0) == 1)) {
                _gcfrontend_entrypoint_10();
            }
        }
        break;
    default:
    case 2:
        if (func_80016B30(0, 1) == 1)
        {
            func_80800530_chintroticker(actor, currentMap);
        }
        break;
    }
    _glintrosyncDll_entrypoint_4(func_800D9004());
    ((f32*)actor->actorData)[4] += func_800D9004();
    ((f32*)actor->actorData)[5] += time_getDelta();
}

ActorData* chintroticker_entrypoint_0()
{
    return &D_80800934_chintroticker;
}
