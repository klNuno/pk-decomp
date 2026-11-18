#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002A3E00_1;

typedef struct {
    void (*unk_00)();
    u8 pad_04[4];
    unk_func_002A3E00_1 unk_08;
} unk_func_002A3E00_0;

unk_func_002A3E00_0 *func_0029DA50(s32);
s32 func_0029DB20(s32 *, s32);
void func_002A3EA0();
void func_002A3F20();

void func_002A3E00(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_002A3E00_0 *temp;
    unk_func_002A3E00_1 *p;

    if (arg1 == 0x1601) {
        s32 v = *arg2;

        temp = func_0029DA50(0xC);
        temp->unk_08.unk_00 = arg0;
        temp->unk_08.unk_04 = arg1;
        temp->unk_08.unk_08 = v;
        temp->unk_00 = func_002A3F20;
    } else {
        unk_func_002A3E00_0 *t;
        unk_func_002A3E00_1 *q;

        t = func_0029DA50(0xC);
        q = &t->unk_08;
        q->unk_00 = arg0;
        q->unk_04 = arg1;
        q->unk_08 = func_0029DB20(arg2, 0x10);
        t->unk_00 = func_002A3EA0;
    }
}
