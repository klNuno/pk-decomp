#include "common.h"

typedef struct unk_func_0012BEA0_0 {
    s32 unk_00;
    s32 unk_04;
    struct unk_func_0012BEA0_0 *unk_08;
    u8 pad_0C[8];
    struct unk_func_0012BEA0_0 *unk_14;
    u8 pad_18[0x14];
    s32 unk_2C;
    s32 unk_30;
} unk_func_0012BEA0_0;

void func_0012C4B0();
void func_0012D980(unk_func_0012BEA0_0 *);
s32 func_00133AB0(s32);
void func_0016F270(s32);

void func_0012BEA0(s32 arg0, unk_func_0012BEA0_0 *arg1, s32 arg2) {
    unk_func_0012BEA0_0 *p;

    if ((u8)(arg1->unk_30 & 0x20)) {
        return;
    }
    func_0012D980(arg1);
    arg2 &= arg1->unk_2C;
    if (((arg2 & 0x800000) && (arg2 & 0x2000000)) || ((arg2 & 0x1000000) && !(arg2 & 0x2000000))) {
        if (!(u8)(arg1->unk_30 & 2) && arg1->unk_00 == 8) {
            func_0016F270(func_00133AB0(arg1->unk_04));
        }
    }
    for (p = arg1->unk_08; p != NULL; p = p->unk_14) {
        if (p->unk_00 != 2) {
            func_0012BEA0(arg0, p, arg2);
        }
    }
    func_0012C4B0();
}
