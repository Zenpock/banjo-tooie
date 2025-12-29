#include "ch/gold/fish.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/gold/fish/func_80800000_chgoldfish.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/gold/fish/func_8080009C_chgoldfish.s")

void func_808005F0_chgoldfish(Actor*, s32);
extern u32 D_80800D3C_chgoldfish;

s32 func_808004AC_chgoldfish(Actor* arg0, s32 arg1, s32 arg2)
{
    s16 split0 = ((s16*)&arg2)[0];
    s16 split2 = ((s16*)&arg2)[1];

    switch (arg1)
    {
        //Dialog End
    case 0x2E:
        switch (split0)
        {
        case 0x15BF:
            func_808005F0_chgoldfish(arg0, 3);
            break;
        case 0x15C0:

            {
                volatile s32 type = 9;
                s32 flag = 16;
                if (type == 9)
                {
                    func_800C7074(0x30, !func_800DA298(FLAG2_648_UNK)); //Give Fast Swimming                
                }
                else
                {
                    _sujiggy_entrypoint_2(type << 16 | flag | 0x15000000);
                }
            }
            
            func_808005F0_chgoldfish(arg0, 0xA);
            break;
        default:
            break;
        }
        return 1;
    case 0x2F:

        switch (split0)
        {
        case 0x15C0:
            if (split2 == 1 && func_800DA298(FLAG2_649_UNK))
            {
                func_800CF700();
            }
            break;
        }
        return 1;
    case 0x52:
        _gcdialogcamera_entrypoint_3(&D_80800D3C_chgoldfish, arg0->scale);
        return 1;
    case 0x3E:
        if (((arg0->unk70_10 == 3) || (arg0->unk70_10 == 4)) && (func_800F64A4(func_800F54E4(), 1) != 0))
        {
            func_808005F0_chgoldfish(arg0, 5);
        }
        return 1;
    default:
        break;
    }
    return 0 * split0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/gold/fish/func_808005F0_chgoldfish.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/gold/fish/func_80800924_chgoldfish.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/gold/fish/func_80800964_chgoldfish.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/gold/fish/func_80800AB4_chgoldfish.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/gold/fish/func_80800BA8_chgoldfish.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/gold/fish/chgoldfish_entrypoint_0.s")
