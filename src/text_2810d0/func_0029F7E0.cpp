#include "common.h"

struct unk_func_0029F7E0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct unk_func_0029F7E0_1 {
    void *unk_00;
    u8 pad_04[4];
    unk_func_0029F7E0_0 unk_08;
};

struct unk_func_0029F7E0_2 {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    f32 unk_10;
};

extern "C" {
void *func_0029DA50(s32);
s32 func_0029DB20(s64 *, s32);
void func_0029F7C0();
void func_0029F8A0();
void func_0029F7E0(s32 arg0, s32 arg1, s64 *arg2);
f32 int2dB__Fi(...);
}

void func_0029F7E0(s32 arg0, s32 arg1, s64 *arg2) {
    unk_func_0029F7E0_1 *p;
    unk_func_0029F7E0_2 *q;
    f32 temp;
    unk_func_0029F7E0_0 *r;

    if (arg1 == 0x2501 || arg1 == 0x2502) {
        p = (unk_func_0029F7E0_1 *)func_0029DA50(0xC);
        r = &p->unk_08;
        r->unk_00 = arg0;
        r->unk_04 = arg1;
        r->unk_08 = func_0029DB20(arg2, 0x20);
        p->unk_00 = (void *)func_0029F8A0;
    } else {
        temp = int2dB__Fi(*arg2);
        q = (unk_func_0029F7E0_2 *)func_0029DA50(0xC);
        q->unk_08 = arg0;
        q->unk_0C = arg1;
        q->unk_10 = temp;
        q->unk_00 = (void *)func_0029F7C0;
    }
}
