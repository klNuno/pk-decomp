#include "common.h"

typedef struct unk_func_002A42E0_1 {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    f32 unk_14;
    f32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
} unk_func_002A42E0_1;

typedef struct unk_func_002A42E0_0 {
    void *unk_00;
    u8 pad_04[0x4];
    unk_func_002A42E0_1 unk_08;
} unk_func_002A42E0_0;

unk_func_002A42E0_0 *func_0029DA50(s32);
s32 func_0029DB20(s32, s32);
void func_002A43C0();

void func_002A42E0(s32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    unk_func_002A42E0_0 *p;
    unk_func_002A42E0_1 *q;

    p = func_0029DA50(0x28);
    q = &p->unk_08;
    q->unk_00 = arg0;
    q->unk_04 = arg1;
    q->unk_08 = arg2;
    q->unk_0C = arg3;
    q->unk_10 = arg4;
    q->unk_14 = arg5;
    q->unk_18 = arg6;
    q->unk_1C = arg7;
    q->unk_20 = arg8;
    q->unk_24 = func_0029DB20(arg9, arg7 * arg8 * 4);
    p->unk_00 = func_002A43C0;
}
