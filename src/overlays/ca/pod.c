#include "ca/pod.h"
#include "common.h"

s32 capod_entrypoint_0(ActorEventId arg0, s32 arg1, void* arg2)
{
    UNKPODSTRUCT* sp24;

    sp24 = func_80110024(func_8008FFE8());
    if (sp24 != NULL)
    {
        sp24 = sp24;
        return _ncpod_entrypoint_6(func_8008FFE8(), sp24, arg0, arg1, arg2);
    }
    return -1;
}

void capod_entrypoint_1(f32* arg0, f32* arg1)
{
    UNKPODSTRUCT* temp_v0;

    temp_v0 = func_80110024(func_8008FFE8());
    if (temp_v0 != NULL)
    {
        _ncpod_entrypoint_8(temp_v0, arg0, arg1);
    }
}

s32 capod_entrypoint_2(ActorMarker* arg0, s32 arg1, s32 arg2)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        return _ncpod_entrypoint_16(temp_v0, arg0, arg1, arg2);
    }
    return 0;
}

s32 capod_entrypoint_3(s32 arg0)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        return _ncpod_entrypoint_17(temp_v0, arg0);
    }
    return 0;
}

s32 capod_entrypoint_4(void)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        return _ncpod_entrypoint_18(temp_v0);
    }
    return -1;
}

void capod_entrypoint_5(s32 arg0)
{
    UNKPODSTRUCT* temp_v0;

    temp_v0 = func_80110024(func_8008FFE8());
    if (temp_v0 != NULL)
    {
        _ncpod_entrypoint_19(temp_v0, arg0);
    }
}

s32 capod_entrypoint_6(s32 arg0, s32 arg1, s32 arg2)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        return _ncpod_entrypoint_20(temp_v0, arg0, arg1, arg2);
    }
    return 0;
}

void capod_entrypoint_7(s32 arg0, s32 arg1)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        _ncpod_entrypoint_21(temp_v0, arg0, arg1);
    }
}

void capod_entrypoint_8(s32 arg0)
{
    UNKPODSTRUCT* temp_v0;

    temp_v0 = func_80110024(func_8008FFE8());
    if (temp_v0 != NULL)
    {
        _ncpod_entrypoint_12(temp_v0, arg0);
    }
}

void capod_entrypoint_9(s32 arg0, s32 arg1)
{
    UNKPODSTRUCT* temp_v0;

    temp_v0 = func_80110024(func_8008FFE8());
    if (temp_v0 != NULL)
    {
        _ncpod_entrypoint_22(temp_v0, arg0, arg1);
    }
}
void capod_entrypoint_10(s32 arg0, s32 arg1)
{
    UNKPODSTRUCT* temp_v0;
    temp_v0 = func_80110024(func_8008FFE8());
    if (temp_v0 != NULL)
    {
        _ncpod_entrypoint_23(temp_v0, arg0, arg1);
    }
}
void capod_entrypoint_11(s32 arg0, s32 arg1)
{
    UNKPODSTRUCT* temp_v0;

    temp_v0 = func_80110024(func_8008FFE8());
    if (temp_v0 != NULL)
    {
        _ncpod_entrypoint_24(temp_v0, arg0, arg1);
    }
}

void capod_entrypoint_12(s32 arg0)
{
    UNKPODSTRUCT* temp_v0;

    temp_v0 = func_80110024(func_8008FFE8());
    if (temp_v0 != NULL)
    {
        _ncpod_entrypoint_25(temp_v0, arg0);
    }
}

s32 capod_entrypoint_13(ActorMarker* arg0, ActorMarker* arg1, s32 arg2, s32 arg3)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if ((temp_v0 != 0) && (_ncpod_entrypoint_26(temp_v0, arg0, arg1, arg2, arg3) != 0))
    {
        return 1;
    }
    return 0;
}

s32 capod_entrypoint_14(void)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        return _ncpod_entrypoint_27(temp_v0, 0);
    }
    return 0;
}

s32 capod_entrypoint_15(void)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        return _ncpod_entrypoint_27(temp_v0, 1);
    }
    return 0;
}

s32 capod_entrypoint_16(f32 arg0)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        return _ncpod_entrypoint_28(temp_v0, arg0);
    }
    return 0;
}

s32 capod_entrypoint_17(f32 arg0)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        return _ncpod_entrypoint_29(temp_v0, arg0);
    }
    return 0;
}

f32 capod_entrypoint_18(void)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        return _ncpod_entrypoint_30(temp_v0);
    }
    return 0.0f;
}

void capod_entrypoint_19(f32 arg0[3])
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        _ncpod_entrypoint_31(temp_v0, arg0);
    }
}

s32 capod_entrypoint_20(s32 arg0, s32 arg1, s32 arg2)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        return _ncpod_entrypoint_32(temp_v0, arg0, arg1, arg2);
    }
    return 0;
}

s32 capod_entrypoint_21(ActorMarker* arg0, ActorMarker* arg1, s32 arg2, s32 arg3)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if ((temp_v0 != 0) && (_ncpod_entrypoint_33(temp_v0, arg0, arg1, arg2, arg3) != 0))
    {
        return 1;
    }
    return 0;
}

s32 capod_entrypoint_22(void)
{
    s32 temp_v0;

    temp_v0 = func_8008FFE8();
    if (temp_v0 != 0)
    {
        return _ncpod_entrypoint_27(temp_v0, 0);
    }
    return 0;
}