#include "core2/1EB5980.h"

extern s32 D_8011B9A0;
extern s32 D_8011B9A4;
extern s32 D_8012C7F0;
extern s32 D_8012C7F4;
extern s32 D_8012C7F8;
extern s32 D_8012C7FC;

s32 func_800DC090(void)
{
    return D_8012C7F0 = (D_8012C7F0 * 0x19660D) + 0x3C6EF35F;
}

//Produces a random float between 1 and 0
f32 func_800DC0C0(void)
{
    s32 sp4;
    f32 returnV0;
    D_8012C7F0 = (D_8012C7F0 * 0x19660D) + 0x3C6EF35F;
    sp4 = ((D_8011B9A4 & D_8012C7F0) | D_8011B9A0);
    returnV0 = *(f32*)&sp4 - 1.0f;
    return returnV0;
}
//Random int within bounds
s32 func_800DC128(s32 lowerBound, s32 upperBound) {
    return (s32)((func_800DC0C0() * (f32)(upperBound - lowerBound)) + (f32)lowerBound);
}

//Random float within bounds
f32 func_800DC178(f32 lowerBound, f32 upperBound) {
    return (func_800DC0C0() * (upperBound - lowerBound)) + lowerBound;
}

f32 func_800DC1AC(void)
{
    s32 sp4;
    f32 returnV0;
    D_8012C7F4 = (D_8012C7F4 * 0x19660D) + 0x3C6EF35F;
    sp4 = ((D_8011B9A4 & D_8012C7F4) | D_8011B9A0);
    returnV0 = *(f32*)&sp4 - 1.0f;
    return returnV0;
}

s32 func_800DC214(s32 lowerBound, s32 upperBound)
{
    return (s32)((func_800DC1AC() * (f32)(upperBound - lowerBound)) + (f32)lowerBound);
}

f32 func_800DC264(f32 lowerBound, f32 upperBound)
{
    return (func_800DC1AC() * (upperBound - lowerBound)) + lowerBound;
}

int func_800DC298(f32 arg0)
{
    return func_800DC0C0() < arg0 ? 1 : 0;
}

int func_800DC2D4(f32 arg0)
{

    return func_800DC1AC() < arg0 ? 1 : 0;

}

void func_800DC310(void)
{
    D_8012C7F0 = 0xEAA0C7;
}

void func_800DC324(s32 arg0)
{
    D_8012C7F0 = arg0;
}

void func_800DC330(void) {
    D_8012C7F8 = D_8012C7F0;
    D_8012C7FC = D_8012C7F4;
}

void func_800DC354(void) {
    D_8012C7F0 = D_8012C7F8;
    D_8012C7F4 = D_8012C7FC;
}