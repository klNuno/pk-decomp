#include "common.h"

typedef struct unk_func_001410D0_0 {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[0x70];
    u8 unk_80[0x60];
    u8 unk_E0[4];
} unk_func_001410D0_0;

s32 func_00138800();
void func_001420F0(void *, s32, s32, s32, f32);
void func_00143A60();
s32 func_00146770();
void func_00155E80();
void func_00155FA0();
u8 func_001B7150();
extern s32 D_0035F3C4;

void func_001410D0(unk_func_001410D0_0 *arg0, s32 arg1, f32 arg2) {
    u8 sp60[0x6C];
    s32 spCC;
    void *var_s2;
    void *var_s3;
    u32 temp;

    var_s2 = arg0->unk_E0;
    if (func_001B7150(arg1) > 1) {
        var_s3 = sp60;
        func_00155FA0(var_s3, arg0->unk_80);
        func_00155E80(var_s3, func_00138800(arg0) + 0x54);
    } else {
        var_s3 = arg0->unk_80;
    }
    if (func_00146770(&spCC, D_0035F3C4, arg0, arg1, var_s3, var_s2, (u8)((arg0->unk_0C & 0x400000) ? 1 : 0))) {
        func_00143A60(arg0, spCC, D_0035F3C4, 0);
        func_001420F0(arg0, arg1, spCC, D_0035F3C4, arg2);
        return;
    }
    temp = arg0->unk_0C & ~0x10000;
    arg0->unk_0C = temp;
    arg0->unk_0C = temp;
}
