#include "common.h"

typedef struct {
    u8 pad_00[0x185];
    s8 unk_185;
    u8 unk_186;
} unk_func_00131C30_0;

typedef struct {
    u8 pad_00[0x4];
    unk_func_00131C30_0 *unk_04;
} unk_func_00131C30_1;

void func_0012F560(unk_func_00131C30_1 *, s8);

s32 func_00131C30(unk_func_00131C30_1 *arg0, s8 arg1) {
    unk_func_00131C30_0 *p = arg0->unk_04;

    if (arg1 == -1) {
        return 0;
    }
    if (p->unk_185 == arg1) {
        return 0;
    }
    switch (p->unk_185) {
    case -1:
        p->unk_185 = arg1;
        break;
    case 0:
        if (arg1 == 1) {
            p->unk_185 = arg1;
        }
        break;
    }
    if (arg1 == 1 && p->unk_186 == 0) {
        func_0012F560(arg0, arg1);
    }
    return 1;
}
