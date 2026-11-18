#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_003006A0_0;

void func_002CEA60();
unk_func_003006A0_0 *func_002D2BC0();
s32 func_003007F0();
unk_func_003006A0_0 *func_00300810();

unk_func_003006A0_0 *func_003006A0(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_003006A0_0 *t;
    unk_func_003006A0_0 *p;

    t = func_002D2BC0(0x1C);
    p = t;
    if (t != NULL) {
        p = func_00300810(t, arg1);
    }
    p->unk_04 = arg0;
    if (arg2 != 0) {
        func_002CEA60(p, func_003007F0(arg2));
    }
    return p;
}
