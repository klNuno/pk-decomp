/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u32 unk_04;
    s32 unk_08;
    void *unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
    u8 pad_34[4];
    f32 unk_38[4];
    f32 unk_48[4];
    f32 unk_58;
    f32 unk_5C;
    u8 pad_60[8];
    f32 unk_68;
    s32 unk_6C;
    u8 pad_70[0x60];
} unk_func_00270850_0;

typedef s32 (*unk_func_00270850_1)(u32, unk_func_00270850_0 *, f32 *, f32 *, f32, f32, f32, f32, f32 *, f32 *, f32 *, f32 *, void *, s32, s32, s32);

typedef struct {
    unk_func_00270850_1 unk_00;
    u8 pad_04[0x18];
} unk_func_00270850_2;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x18];
} unk_func_00270850_3;

void *memset(void *, s32, u32);
s32 func_001273A8(f32);
extern f32 D_00360238;
extern u32 D_003602C0;
extern unk_func_00270850_2 D_0075B4C0[];
extern unk_func_00270850_3 D_0075B4C8[];
extern unk_func_00270850_3 D_0075B4D0[];
extern unk_func_00270850_3 D_0075B4D4[];
extern unk_func_00270850_3 D_0075B4D8[];
extern unk_func_00270850_0 D_0075BA40[];

unk_func_00270850_0 *func_00270850(u32 arg0, f32 *arg1, f32 *arg2, f32 arg4, f32 *arg3,
                                  f32 arg5, f32 *arg8, f32 arg6, f32 *arg9,
                                  f32 arg7, f32 *arg10, void *arg11,
                                  s32 arg12, s32 arg13, s32 arg14) {
    unk_func_00270850_0 *out;
    unk_func_00270850_3 *p;
    unk_func_00270850_3 *q;
    unk_func_00270850_2 *entry;

    if (D_003602C0 == 0x12C || arg0 >= 0x32) {
        return NULL;
    }
    p = &D_0075B4C8[arg0];
    if (!p->unk_00 || !(q = &D_0075B4D0[arg0])->unk_00 || !(entry = &D_0075B4C0[arg0])->unk_00) {
        return NULL;
    }
    out = &D_0075BA40[D_003602C0];
    memset(out, 0, 0xD0);
    out->unk_00 = 0;
    out->unk_28 = func_001273A8(D_00360238);
    out->unk_30 = 1.0f;
    out->unk_04 = arg0;
    out->unk_38[0] = arg1[0];
    out->unk_38[1] = arg1[1];
    out->unk_38[2] = arg1[2];
    out->unk_38[3] = arg1[3];
    out->unk_48[0] = arg2[0];
    out->unk_48[1] = arg2[1];
    out->unk_48[2] = arg2[2];
    out->unk_48[3] = arg2[3];
    out->unk_0C = arg11;
    out->unk_10 = arg12;
    out->unk_14 = p->unk_00;
    out->unk_18 = q->unk_00;
    out->unk_1C = D_0075B4D4[arg0].unk_00;
    out->unk_20 = D_0075B4D8[arg0].unk_00;
    out->unk_24 = arg13;
    out->unk_5C = 100.0f;
    out->unk_68 = 1.0f;
    out->unk_58 = 255.0f;
    out->unk_6C = 0;
    out->unk_08 = 0;
    if (entry->unk_00(arg0, out, arg1, arg2, arg4, arg5, arg6, arg7, arg3, arg8, arg9,
                      arg10, arg11, arg12, arg13, arg14)) {
        D_003602C0++;
    }
    return out;
}
