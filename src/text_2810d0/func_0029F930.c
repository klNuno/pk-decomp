#include "common.h"

typedef struct unk_func_0029F930_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0029F930_1;

typedef struct unk_func_0029F930_0 {
    void *unk_00;
    u8 pad_04[4];
    unk_func_0029F930_1 unk_08;
} unk_func_0029F930_0;

unk_func_0029F930_0 *func_0029DA50(s32);
s32 func_0029DB20(s32 *, s32);
void func_0029FA50();
void func_0029F9D0();

void func_0029F930(s32 arg0, s32 arg1, s32 *arg2) {
    if (arg1 == 0x2200) {
        s32 v = *arg2;
        unk_func_0029F930_0 *temp = func_0029DA50(0xC);

        temp->unk_08.unk_00 = arg0;
        temp->unk_08.unk_04 = arg1;
        temp->unk_08.unk_08 = v;
        temp->unk_00 = func_0029FA50;
    } else {
        unk_func_0029F930_0 *temp = func_0029DA50(0xC);
        unk_func_0029F930_1 *sub = &temp->unk_08;

        sub->unk_00 = arg0;
        sub->unk_04 = arg1;
        sub->unk_08 = func_0029DB20(arg2, 0x10);
        temp->unk_00 = func_0029F9D0;
    }
}
