#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00262220_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00262220_1;

extern s32 rand(void);
extern f32 D_003602B0;
extern void func_00266E40(s32, unk_func_00262220_0 *, unk_func_00262220_1 *, s32, f32, f32, f32);

void func_00262220(unk_func_00262220_0 *arg0, s32 arg1, s32 arg2, f32 arg3) {
    unk_func_00262220_0 sp80;
    unk_func_00262220_1 sp90;

    arg0->unk_08 += 0.6f;
    D_003602B0 = 0.7f + (1.3f * (f32)rand()) / 2147483648.0f;
    sp80.unk_00 = arg0->unk_00;
    sp80.unk_04 = 0.5f + arg0->unk_04;
    sp80.unk_08 = 0.8f + arg0->unk_08;
    sp90.unk_00 = 0x3F800000;
    sp90.unk_04 = 0x3F0F5C29;
    sp90.unk_08 = 0xBF07AE14;
    func_00266E40(0x1103, &sp80, &sp90, arg2, arg3, 0.8f, 0.8f);

    D_003602B0 = 0.7f + (1.3f * (f32)rand()) / 2147483648.0f;
    sp80.unk_00 = arg0->unk_00;
    sp80.unk_04 = arg0->unk_04 - 0.5f;
    sp80.unk_08 = 1.5f + arg0->unk_08;
    sp90.unk_00 = 0xBF000000;
    sp90.unk_04 = 0xBF7AE148;
    sp90.unk_08 = 0x3E6B851F;
    func_00266E40(0x1103, &sp80, &sp90, arg2, arg3, 0.5f, 0.6f);

    D_003602B0 = 0.7f + (1.3f * (f32)rand()) / 2147483648.0f;
    sp80.unk_00 = arg0->unk_00;
    sp80.unk_04 = 0.5f + arg0->unk_04;
    sp80.unk_08 = arg0->unk_08 - 0.5f;
    sp90.unk_00 = 0x3F000000;
    sp90.unk_04 = 0x3E23D70A;
    sp90.unk_08 = 0x3E051EB8;
    func_00266E40(0x1103, &sp80, &sp90, arg2, arg3, 0.3f, 0.3f);

    D_003602B0 = 0.7f + (1.3f * (f32)rand()) / 2147483648.0f;
    sp80.unk_00 = arg0->unk_00;
    sp80.unk_04 = arg0->unk_04 - 0.5f;
    sp80.unk_08 = arg0->unk_08;
    sp90.unk_00 = 0x3F800000;
    sp90.unk_04 = 0xBE947AE1;
    sp90.unk_08 = 0xBF2147AE;
    func_00266E40(0x1103, &sp80, &sp90, arg2, arg3, 1.0f, 1.0f);
}
