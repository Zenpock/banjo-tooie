#include "ch/bigterrysbits.h"

void func_8080022C_chbigterrysbits(Actor* actor);
extern s32 D_80800458_chbigterrysbits;

extern ActorData D_80800380_chbigterrysbits;
ActorData* chbigterrysbits_entrypoint_0()
{
    return &D_80800380_chbigterrysbits;
}
extern ActorData D_808003C8_chbigterrysbits;
ActorData* chbigterrysbits_entrypoint_1()
{
    return &D_808003C8_chbigterrysbits;
}
extern ActorData D_80800410_chbigterrysbits;
ActorData* chbigterrysbits_entrypoint_2()
{
    return &D_80800410_chbigterrysbits;
}
void func_80800024_chbigterrysbits(Actor* actor)
{
    s32 isReplay;
    s32 isRetry;

    isReplay = game_isReplayMinigame();
    isRetry = flag_getValue(FLAG_172_RETRY_BOSS_TERRY);
    if ((character_includedInTransformMask(character_getActiveIndex(), 0x1000) != 0) || (_glcutDll_entrypoint_20() != 0))
    {
        func_80101FDC(actor, 1U);
    }
    actor->rotation[0] = -50.0f;
    func_8010A800(actor, 0);
    if (_chdoormake_entrypoint_3(actor, 0.0f, actor->rotation[0] + 90.0f, -400.0f, 0x802, -1) != 0)
    {
        _chdoormake_entrypoint_5(actor, 3.0f);
        _chdoormake_entrypoint_6(actor, 0x3F4CCCCD);
        _chdoormake_entrypoint_8(actor, 0xEU);
    }
    if ((_glcutDll_entrypoint_20() == 0) && (isReplay) && (!isRetry))
    {
        event_sendToActor(actor, 8, 0);
    }
}

void func_80800130_chbigterrysbits(Actor* actor)
{
    if (_glcutDll_entrypoint_20() != 0)
    {
        actor_mark_delete(actor);
    }
}

void func_80800160_chbigterrysbits(Actor* actor)
{
    if (((actor->unk70_10) == 2) && (_subaddieDll_entrypoint_6(actor, 0xB)))
    {
        func_8080022C_chbigterrysbits(actor);
    }
}

s32 func_808001A8_chbigterrysbits(Actor* actor, s32 arg1, s32 arg2)
{
    switch (arg1)
    {
        case 0x3F:
            if (_subaddieDll_entrypoint_5(actor, arg2))
            {
                func_80103110(actor, 1U);
                func_80101FDC(actor, 2U);
            }
            break;
        case 0x40:
            func_8080022C_chbigterrysbits(actor);
            break;
        default:
            return 0;
    }
    if (arg2) {}
    return 1;
}

void func_8080022C_chbigterrysbits(Actor* actor)
{
    f32 sp1C[3];

    ml_vec3f_copy(&sp1C, actor->position);
    sp1C[1] -= 80.0f;
    _chexploder_entrypoint_3(actor, &sp1C, 0xCU);
    _subaddieaudioquick_entrypoint_2(actor, actor->position, &D_80800458_chbigterrysbits);
    flag_setValueTrue(FLAG_173_UNK);
}

void func_8080029C_chbigterrysbits(Actor* actor)
{
    s32 terryDefeated;
    s32 isReplay;

    terryDefeated = flag_getValue(FLAG_0E5_PROGRESS_TDL_TERRY_DEFEATED);
    isReplay = game_isReplayMinigame();
    if (_glcutDll_entrypoint_20() != 0)
    {
        actor_mark_delete(actor);
        return;
    }
    if ((terryDefeated) && (!isReplay))
    {
        func_80101FDC(actor, 4U);
    }
    actor->rotation[0] = -90.0f;
    func_8010A800(actor, 0);
    if (_chdoormake_entrypoint_3(actor, actor->rotation[1], actor->rotation[0] + 90.0f, -400.0f, 3, -1))
    {
        _chdoormake_entrypoint_5(actor, 3.0f);
        _chdoormake_entrypoint_6(actor, 0x3F4CCCCD);
    }
}
