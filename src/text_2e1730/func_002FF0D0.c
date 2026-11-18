#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_002FF0D0_0;

void func_002DD6C0(unk_func_002FF0D0_0 *, s32);
unk_func_002FF0D0_0 *func_002D2BC0();
s32 func_002FF230();
unk_func_002FF0D0_0 *func_002FF250();

unk_func_002FF0D0_0 *func_002FF0D0(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002FF0D0_0 *p;
    unk_func_002FF0D0_0 *temp;

    temp = func_002D2BC0(0x1C);
    p = temp;
    if (temp != NULL) {
        p = func_002FF250(temp, arg1);
    }
    p->unk_04 = arg0;
    if (arg2 != 0) {
        func_002DD6C0(p, func_002FF230(arg2));
    }
    return p;
}
