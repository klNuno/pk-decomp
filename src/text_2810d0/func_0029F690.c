#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0029F690_1;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_0029F690_1 unk_08;
} unk_func_0029F690_0;

unk_func_0029F690_0 *func_0029DA50(s32);
s32 func_0029DB20(f32 *, s32);
void func_0029F740();
void func_0029F7C0();

void func_0029F690(s32 arg0, s32 arg1, f32 *arg2) {
    unk_func_0029F690_0 *p;
    unk_func_0029F690_1 *q;
    f32 temp_f20;

    if (arg1 == 0x2501 || arg1 == 0x2502) {
        p = func_0029DA50(0xC);
        q = &p->unk_08;
        q->unk_00 = arg0;
        q->unk_04 = arg1;
        q->unk_08 = func_0029DB20(arg2, 0x10);
        p->unk_00 = func_0029F740;
    } else {
        temp_f20 = *arg2;
        p = func_0029DA50(0xC);
        p->unk_08.unk_00 = arg0;
        p->unk_08.unk_04 = arg1;
        *(f32 *)&p->unk_08.unk_08 = temp_f20;
        p->unk_00 = func_0029F7C0;
    }
}
