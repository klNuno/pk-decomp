/* profile: opt_300_noexc */
#include "common.h"

extern "C" {
void func_00308B80(s32);
void func_00308BE0(s32);
}

class unk_func_002EC830_0 {
public:
    s32 *unk_00;
    unk_func_002EC830_0(s32 *p) : unk_00(p) {
        if (*unk_00 != 0) {
            func_00308BE0(*unk_00);
        }
    }
    ~unk_func_002EC830_0() {
        if (*unk_00 != 0) {
            func_00308B80(*unk_00);
        }
    }
};

typedef struct unk_func_002EC830_1 {
    s32 unk_00;
    u8 pad_04[0x14];
    struct unk_func_002EC830_1 *unk_18;
    u8 pad_1C[8];
    s32 unk_24;
} unk_func_002EC830_1;

typedef struct {
    u8 pad_00[0x28];
    unk_func_002EC830_1 *unk_28;
    u8 pad_2C[0x20];
    s32 unk_4C;
} unk_func_002EC830_2;

extern "C" {
void func_002EC830(unk_func_002EC830_2 *arg0, s32 arg1) {
    unk_func_002EC830_0 lock(&arg0->unk_4C);
    unk_func_002EC830_1 *p;

    for (p = arg0->unk_28; p != NULL; p = p->unk_18) {
        if (p->unk_00 == arg1) {
            break;
        }
    }
    p->unk_24--;
}
}
