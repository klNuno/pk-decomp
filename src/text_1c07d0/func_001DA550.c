#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_001DA550_0;

extern unk_func_001DA550_0 D_005ECF50[];

s32 func_001DA550(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_001DA550_0 *p;

    p = &D_005ECF50[arg0];
    switch (arg2) {
    case 1:
        p->unk_08 += arg1;
        break;
    case 0:
        p->unk_08 = arg1;
        break;
    case 2:
        p->unk_08 = p->unk_04 - arg1 - 1;
        break;
    }
    if (p->unk_08 < 0) {
        p->unk_08 = 0;
    }
    if (p->unk_08 >= p->unk_04) {
        p->unk_08 = p->unk_04 - 1;
    }
    return p->unk_08;
}
