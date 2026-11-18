#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002A54C0_0;

typedef struct {
    void *unk_00;
    s32 unk_04;
    unk_func_002A54C0_0 unk_08;
} unk_func_002A54C0_1;

typedef struct {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    f32 unk_0C;
} unk_func_002A54C0_2;

void *func_0029DA50(s32);
s32 func_0029DB20(f32 *, s32);
void func_002A5550();
void func_002A55B0();

void func_002A54C0(s32 arg0, f32 *arg1) {
    if (arg0 == 0xB66) {
        unk_func_002A54C0_1 *p = func_0029DA50(8);
        unk_func_002A54C0_0 *q;
        q = &p->unk_08;
        q->unk_00 = arg0;
        q->unk_04 = func_0029DB20(arg1, 0x10);
        p->unk_00 = func_002A5550;
    } else {
        f32 f = *arg1;
        unk_func_002A54C0_2 *p = func_0029DA50(8);
        p->unk_08 = arg0;
        p->unk_0C = f;
        p->unk_00 = func_002A55B0;
    }
}
