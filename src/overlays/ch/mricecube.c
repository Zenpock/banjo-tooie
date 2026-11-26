#include "ch/mricecube.h"

void func_80800778_chmricecube(Actor*);
void func_808007B0_chmricecube(Actor*);
void func_80800850_chmricecube(Actor*);
extern s32 D_808008B0_chmricecube;
extern s32 D_80800970_chmricecube;
extern u32 D_80800980_chmricecube;
extern s32 D_80800990_chmricecube;
extern f32 D_808009A8_chmricecube;
extern s32 D_808009B8_chmricecube;
extern s32 D_808009C8_chmricecube;
extern u32 D_80800A00_chmricecube;

extern ActorData D_80800928_chmricecube;
ActorData* chmricecube_entrypoint_0()
{
    return &D_80800928_chmricecube;
}
void func_8080000C_chmricecube(Actor* actor)
{
    ml_vec3f_copy(actor->actorData, actor->position);
    ((f32*)actor->actorData)[5] = 0;
    actor->unk54 = actor->rotation[1];
    actor_setCollision(actor, flag_getValue(FLAG_1C9_FTT_CCL_GEORGE_ICE_CUBE));
    if (_glcutDll_entrypoint_20() != 0)
    {
        actor->rotation[1] -= 180.0f;
        func_80102424(actor, 6);
        return;
    }
    if (flag_getValue(FLAG_31B_PROGRESS_HFP_WATER_COOLED) != 0)
    {
        actor_mark_delete(actor);
    }
}

void chmricecube_update(Actor* actor)
{
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    f32 sp30;

    switch (actor->unk70_10)
    {
        case 1:
            func_80800778_chmricecube(actor);
            return;
        case 2:
            actor->unk64_19 = 1;
            func_80800850_chmricecube(actor);
            if (func_80101DDC(actor) != 0)
            {
                func_80102424(actor, 3);
                return;
            }
        default:
            return;
        case 4:
            if (func_80101DDC(actor) != 0)
            {
                actor->unk64_19 = 0;
                func_80102424(actor, 1);
                return;
            }
            break;
        case 5:
            sp3C = time_getDelta();
            ((f32*)actor->actorData)[3] = func_800F15F8(((f32*)actor->actorData)[3], 200.0f, sp3C * 150.0f);
            ml_translateAngleDist(actor->position, actor->unk54, -(((f32*)actor->actorData)[3] * sp3C));
            actor->unk64_19 = 1;
            ((f32*)actor->actorData)[6] = func_800F15F8((f32)((f32*)actor->actorData)[6], 100.0f, sp3C * 120.0f);
            actor->rotation[1] += ((f32*)actor->actorData)[6] * sp3C;
            if (func_800EFC7C(actor->position, (f32*)actor->actorData) > 160000.0f) {
                if (!(actor->unk64_20))
                {
                    _subaddieaudioquick_entrypoint_2(actor, actor->position, &D_80800970_chmricecube);
                    actor->unk64_20 = 1;
                }
                ((f32*)actor->actorData)[5] = ((f32*)actor->actorData)[5] + (sp3C * 800.0f);
                actor->position[1] -= sp3C * ((f32*)actor->actorData)[5];
                if (actor->position[1] < ((f32*)actor->actorData)[1] - 8000.0f) {
                    _capod_entrypoint_14();
                    _glcutDll_entrypoint_6(MAP_127_HP_LAVA_SIDE, 0x49U);
                    return;
                }
            }
            else {
                _subaddieaudioloop_entrypoint_4(actor, actor->position, 1U, &D_80800980_chmricecube);
                return;
            }
            break;
        case 8:
            sp38 = time_getDelta();
            ((f32*)actor->actorData)[6] = func_800F15F8((f32)((f32*)actor->actorData)[6], 100.0f, sp38 * 120.0f);
            ((f32*)actor->actorData)[5] = ((f32*)actor->actorData)[5] + (sp38 * 800.0f);
            actor->position[1] -= sp38 * (f32)((f32*)actor->actorData)[5];
            actor->rotation[1] += ((f32*)actor->actorData)[6] * sp38;
            if (actor->position[1] < 600.0f)
            {
                actor->position[1] = 600.0f;
                func_800C4AF0(actor->position, &D_80800990_chmricecube);
                func_80102424(actor, 9);
                actor->unk58 = 4.0f;
                event_sendToActorsOfType(0x439, 0xA, 0x3E7);
                return;
            }
            break;
        case 9:
            sp34 = timer_reachedZero(&actor->unk58);
            sp30 = time_getDelta();
            actor->position[1] = func_800F12D4(actor->unk58, 0, 4.0f, 400.0f, 600.0f);
            func_80102FDC(actor, func_800F12D4(actor->unk58, 0, 4.0f, 0.5f, 1.0f));
            _subaddiefade_entrypoint_1(actor, func_800F12D4(actor->unk58, 0, 4.0f, 0.0f, 255.0f));
            if (actor->unk58 > 1.0f)
            {
                ((f32*)actor->actorData)[6] = func_800F15F8(((f32*)actor->actorData)[6], 0.0f, sp30 * 40.0f);
                func_808007B0_chmricecube(actor);
            }
            actor->rotation[1] += (f32)((f32*)actor->actorData)[6] * sp30;
            if (sp34 != 0)
            {
                flag_setValueTrue(FLAG_31B_PROGRESS_HFP_WATER_COOLED);
                _glcutDll_entrypoint_17();
                return;
            }
            break;
        case 6:
            func_80800850_chmricecube(actor);
            actor->unk64_19 = 1;
            if (func_80101DDC(actor) != 0)
            {
                func_80102424(actor, 7);
            }
            break;
    }
}

s32 chmricecube_eventHandler(Actor* actor, s32 arg1, s32 arg2) {
    s32 pad2;
    f32 sp38[3];
    //I'm just guessing that this is actormarker
    ActorMarker* sp34;
    s32 dialog;
    switch (arg1)
    {
        case EVENT_2E_ACTOR_DIALOG_ENDED:
            dialog = ((s16*)&arg2)[0];
            if (_subaddiedialog_entrypoint_9(actor, dialog, &D_808008B0_chmricecube, 5) == 1)
            {
                actor_enableCollision(actor);
            }
            if ((actor->unk70_10 == 3) || (actor->unk70_10 == 2))
            {
                func_80102424(actor, 4);
            }
            break;
        case 0x40:
            sp34 = arg2;
            func_8010A624(actor);
            ml_vec3f_copy(sp38, actor->position);
            ml_translateAngleDist(sp38, actor->rotation[1], 300.0f);
            func_800F77E8(sp34->unk18_5, sp38);
            _capod_entrypoint_13(actor->unk0, NULL, 0U, 0x831U);
            func_80102424(actor, 5);
            _subaddieDll_entrypoint_4(actor, 1U);
            actor_disableCollision(actor);
            func_800FC660(0xE);
            break;
        case 0x49:
            if ((map_getCurrent() == MAP_127_HP_LAVA_SIDE) && (_glcutDll_entrypoint_19(0x49U) != 0))
            {
                _subaddiedialog_entrypoint_11(actor->unk0, 0x13CCU, 4U, NULL, 0xA9U);
                func_80102424(actor, 8);
                _subaddieDll_entrypoint_4(actor, 1U);
                ((f32*)actor->actorData)[6] = 100.0f;
                ((f32*)actor->actorData)[5] = 1200.0f;
                _capod_entrypoint_13(actor->unk0, NULL, 0x13U, 0x2831U);
                break;
            }
            return 0;
        case 0x52:
            _gcdialogcamera_entrypoint_3(&D_808009A8_chmricecube, actor->scale);
            break;
        case EVENT_95_ACTOR_SPAWNED:
            if ((map_getCurrent() == MAP_127_HP_LAVA_SIDE) && (_glcutDll_entrypoint_19(0x49U) == 0))
            {
                actor_mark_delete(actor);
            }
            break;
        default:
            return 0;
    }
    return 1;
}

void func_80800734_chmricecube(Actor* actor, GraphicsBuffers* arg1)
{
    func_800DF744(3, actor->unk64_19);
    func_80101870(actor, arg1);
}

void func_80800778_chmricecube(Actor* actor) {
    _subaddiedialog_entrypoint_8(actor, actor->position, &D_808009B8_chmricecube, &D_808008B0_chmricecube, 5);
}

void func_808007B0_chmricecube(Actor* actor)
{
    f32 sp34[3];
    f32 sp28[3];

    if (timer_reachedZero_dupe(&((f32*)actor->actorData)[4]) != 0)
    {
        ml_vec3f_copy(&sp34, actor->position);
        sp34[1] = 200.0f;
        ml_vec3f_copy(&sp28, actor->position);
        sp28[1] = 600.0f;
        func_800BBCB8(&sp28, &sp34, actor->scale, 5, &D_808009C8_chmricecube);
        ((f32*)actor->actorData)[4] = rand_fBounded(0.1f, 0.15f);
    }
}

void func_80800850_chmricecube(Actor* actor) {
    _subaddieaudioquick_entrypoint_3(actor, actor->position, &D_80800A00_chmricecube, 0.1f);
}