#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_00301BF0_0;

void *func_002D2BC0(s32);
unk_func_00301BF0_0 *func_00301C80(void *, s32);
void func_00301CD0(s32 *, s32);
void func_002EA5B0(unk_func_00301BF0_0 *, s32 *);
void c4sdk_malloc(s32 *, s32);

unk_func_00301BF0_0 *func_00301BF0(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_00301BF0_0 *p;
    s32 sp5C;

    void *t;

    p = t = func_002D2BC0(0x1C);
    if (t != 0) {
        p = func_00301C80(t, arg1);
    }
    p->unk_04 = arg0;
    if (arg2 != 0) {
        func_00301CD0(&sp5C, arg2);
        func_002EA5B0(p, &sp5C);
        c4sdk_malloc(&sp5C, 0);
    }
    return p;
}
