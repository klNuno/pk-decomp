/* profile: opt_300_noexc */
#include "common.h"

extern "C" {
void func_002EFA50(void *, void *, s32);
void func_00308B80(s32);
void func_00308BE0(s32);
}

class unk_func_002EC780_0 {
public:
    s32 *unk_00;
    unk_func_002EC780_0(s32 *p) : unk_00(p) {
        if (*unk_00 != 0) {
            func_00308BE0(*unk_00);
        }
    }
    ~unk_func_002EC780_0() {
        if (*unk_00 != 0) {
            func_00308B80(*unk_00);
        }
    }
};

typedef struct unk_func_002EC780_1 {
    u8 pad_00[0x18];
    struct unk_func_002EC780_1 *unk_18;
} unk_func_002EC780_1;

typedef struct {
    u8 pad_00[0x28];
    unk_func_002EC780_1 *unk_28;
    u8 pad_2C[0xC];
    void *unk_38;
    u8 pad_3C[0x10];
    s32 unk_4C;
} unk_func_002EC780_2;

extern "C" {
void func_002EC780(unk_func_002EC780_2 *arg0) {
    unk_func_002EC780_0 lock(&arg0->unk_4C);
    unk_func_002EC780_1 *p;

    for (p = arg0->unk_28; p != NULL; p = p->unk_18) {
        func_002EFA50(arg0->unk_38, p, 0);
    }
}
}
