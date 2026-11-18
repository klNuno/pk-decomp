#include "common.h"

typedef struct {
    u8 *unk_00;
} unk_func_002EDFF0_0;

u8 **func_002EE0C0(void *);
u8 *func_002EE0A0(void *);
unk_func_002EDFF0_0 func_002EE0B0(u8 *);
s32 func_002EEE10(void *);
s32 func_002CF630(void *);
unk_func_002EDFF0_0 func_002D29C0(u8 *, s32 *, s32 *);
void func_002CFEF0(unk_func_002EDFF0_0 *);

void func_002EDFF0(u8 *arg0, u8 *arg1) {
    s32 v;
    unk_func_002EDFF0_0 it;
    unk_func_002EDFF0_0 tmp;
    s32 w;
    unk_func_002EDFF0_0 r;
    unk_func_002EDFF0_0 e;

    tmp = func_002EE0B0(*func_002EE0C0(arg0 + 0x1C));
    it.unk_00 = tmp.unk_00;
    while (e = func_002EE0B0(func_002EE0A0(arg0 + 0x1C)), it.unk_00 != e.unk_00) {
        v = func_002EEE10(it.unk_00 + 0xC);
        if (v != 0) {
            w = func_002CF630(arg1 + 4);
            r = func_002D29C0(arg1, &w, &v);
        }
        func_002CFEF0(&it);
    }
}
