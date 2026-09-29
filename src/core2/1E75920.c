#include "core2/1E75920.h"

s32 func_8009C030() 
{
    return sizeof(PositionInfo);
}

//Clear Position History
void func_8009C038(PlayerState* self)
{
    func_800EFD24(self->posInfo->unk24);
    func_800EFD24(self->posInfo->current);
    func_800EFD24(self->posInfo->oldPos);
    func_800EFD24(self->posInfo->olderPos);
}

void func_8009C08C(PlayerState* self)
{
    func_8009C21C(self);
    func_800EFD24(self->posInfo->unk24);
}

void func_8009C0BC(PlayerState* self, f32* src)
{
    func_800EE7F8(self->posInfo->current, src);
    func_800EE7F8(self->posInfo->oldPos, src);
}

void func_8009C0F8(PlayerState* self, f32* src)
{
    func_800EE7F8(self->posInfo->current, src);
}

void func_8009C118(PlayerState* self, f32 src)
{
    self->posInfo->current[1] = src;
}

void func_8009C128(PlayerState* self, f32* dst) {
    func_800EE7F8(dst, self->posInfo->current);
}

f32 func_8009C150(PlayerState* self)
{
    return self->posInfo->current[1];
}

void func_8009C15C(PlayerState* self, f32* dst) { func_800EE7F8(dst, self->posInfo->oldPos); }

void func_8009C188(PlayerState* self, f32* dst)
{
    func_800EE7F8(dst, self->posInfo->olderPos);
}

void func_8009C1B4(PlayerState* self, f32 src)
{
    self->posInfo->current[1] += src;
}

void func_8009C1CC(PlayerState* self, f32* dst)
{
    func_800EE7F8(dst, self->posInfo->unk24);
}

void func_8009C1F8(PlayerState* self, f32* src)
{
    func_800EE7F8(self->posInfo->unk24, src);
}

void func_8009C21C(PlayerState* self)
{
    func_800EE7F8(self->posInfo->olderPos, self->posInfo->oldPos);
    func_800EE7F8(self->posInfo->oldPos, self->posInfo->current);
}

void func_8009C25C(PlayerState* self)
{
    func_800EF04C(self->posInfo->current, self->posInfo->unk24);
    func_800EFD24(self->posInfo->unk24);
}
