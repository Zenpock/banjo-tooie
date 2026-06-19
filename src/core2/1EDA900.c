#include "core2/1EDA900.h"
extern Unk80132ED0* D_80135A80;

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDA900/func_80101010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDA900/func_80101038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDA900/func_8010105C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDA900/func_80101068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDA900/func_80101074.s")

Unk80132ED0* func_80101080()
{
    return D_80135A80;
}

s32 func_8010108C(Actor* actor, s32 eventId, s32 arg2)
{
    s32 pad;
    s32 sp28;
    s32 sp24;
    s32 syscallIndex;

    if (actor->unk74_28)
    {
        syscallIndex = func_80081D34(actor->pointerToSyscallEntry);
        if (syscallIndex != 0)
        {
            sp24 = func_80081D80(syscallIndex);
        }
        else
        {
            sp24 = 0;
        }
        //Call the actor's event handler function
        sp28 = (func_80100368(actor))->eventHandler(actor, eventId, arg2);
        if ((syscallIndex != 0) && (sp24 == 0) && (sp28 <= 0))
        {
            func_800819B4((Syscall*)actor->pointerToSyscallEntry);
        }
        return sp28;
    }
    return -1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDA900/func_8010114C.s")

s32 func_80101180(s32 propId, s32 eventId, s32 arg2)
{
    Actor* actorToCheck;
    s32 LastIndex;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    actorToCheck = func_801067C4(&LastIndex);
    //Loop through the actors to find matching propIds to send events to
    while (actorToCheck != NULL)
    {
        if (!(actorToCheck->unk64_17) && (propId == actorToCheck->unk6C_9))
        {
            //Send the event to the actor's event handler
            temp_v0 = func_8010108C(actorToCheck, eventId, arg2);
            if ((temp_v0 > 0) && (var_s0 == 0))
            {
                var_s0 = temp_v0;
            }
        }
        //Get the next Actor in the list
        actorToCheck = func_8010682C(&LastIndex);
    }
    return var_s0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDA900/func_80101238.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDA900/func_801012D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDA900/func_801013A8.s")
