#include "ch/dino/coaster.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/dino/coaster/chdinocoaster_entrypoint_0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/dino/coaster/func_8080000C_chdinocoaster.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/dino/coaster/func_80800064_chdinocoaster.s")

extern s32 D_80800468_chdinocoaster;
extern u32 D_80800544_chdinocoaster;

s32 func_808001C8_chdinocoaster(Actor* arg0, s32 arg1, s32 arg2)
{
    f32 sp2C[3];
    s16* split = (s16*)&arg2;
    switch (arg1)
    {
    case 0x2E:
        func_80101FDC(arg0, 0x14U);
        func_8010A590((s32)arg0);
        if (split[0] == 0x17B8)
        {
            
            volatile s32 type = 9;
            s32 flag = 16;
            if (type == 9)
            {
                func_8009032C(0x20); //Give T-Rex Roar
            }
            else
            {
                _sujiggy_entrypoint_2(type << 16 | flag | 0x15000000);
            }
            
            
        }
        break;
    case 0x38:
        func_80101074(&D_80800468_chdinocoaster);
        return 0xA;
    case 0x52:
        func_800EFA4C(sp2C, 0.0f, func_8010CD28(arg0), 0.0f);
        _gcdialogcamera_entrypoint_3(&D_80800544_chdinocoaster, arg0->scale);
        _gcdialogcamera_entrypoint_5(sp2C);
        break;
    case 0x95:
        arg0->unk64_20 = 0;
    default:
        return _sucoaster_entrypoint_21(arg0, arg1, arg2);
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/dino/coaster/func_808002CC_chdinocoaster.s")
