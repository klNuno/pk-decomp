/* profile: o0_301_p */
#include "common.h"

typedef union {
    s32 unk_00;
    f32 unk_00_f;
    u8 unk_00_b;
} unk_Q_1;

typedef struct {
    unk_Q_1 unk_00;
    u8 pad_04[0xC];
} unk_Q_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_Q_0 *);
void func_001669E0(s32, void *, s32, f32, f32);
void func_001669D0(s32, void *, s32, f32, f32);
void func_00166960(s32, s32);
void func_001EDBB0(s32, void *);

s32 *func_00237210(s32 arg0, s32 *arg1) {
    unk_Q_0 sp60;
    s32 type;
    s32 handle;
    s32 mode;
    u8 b;
    u8 c;
    f32 x;
    f32 y;
    f32 z;
    f32 w;

    type = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    handle = sp60.unk_00.unk_00;
    if (type == 0x1C4) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        x = sp60.unk_00.unk_00_f;
        x = x / 100.0f;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        y = sp60.unk_00.unk_00_f;
        y = y / 100.0f;
        func_001669E0(handle, NULL, 1, x, y);
        return arg1;
    } else if (type == 0x1C5) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        b = sp60.unk_00.unk_00_b;
        func_00166960(handle, b);
        return arg1;
    } else if (type == 0x1C6) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        z = sp60.unk_00.unk_00_f;
        z = z / 100.0f;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        w = sp60.unk_00.unk_00_f;
        w = w / 100.0f;
        func_001669D0(handle, NULL, 2, z, w);
        return arg1;
    } else if (type == 0x1C7) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        c = sp60.unk_00.unk_00_b;
        if (c) {
            mode = 3;
        } else {
            mode = 1;
        }
        func_00166960(handle, mode);
        return arg1;
    }
    func_001EDBB0(0x27, NULL);
    return arg1;
}
