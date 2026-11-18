/* profile: opt_300_noexc */
#include "common.h"

extern "C" {
s32 func_0011D3F8(...);
void func_002D3AD0(...);
char *func_002F0900(...);
void func_00308B80(s32);
void func_00308BE0(s32);
extern char D_0035BD40[];
}

class unk_func_002ED3C0_0 {
public:
    s32 *unk_00;
    unk_func_002ED3C0_0(s32 *p) : unk_00(p) {
        if (*unk_00 != 0) {
            func_00308BE0(*unk_00);
        }
    }
    ~unk_func_002ED3C0_0() {
        if (*unk_00 != 0) {
            func_00308B80(*unk_00);
        }
    }
};

typedef struct unk_func_002ED3C0_1 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x10];
    struct unk_func_002ED3C0_1 *unk_18;
} unk_func_002ED3C0_1;

typedef struct {
    u8 pad_00[0x28];
    unk_func_002ED3C0_1 *unk_28;
    u8 pad_2C[0x20];
    s32 unk_4C;
} unk_func_002ED3C0_2;

extern "C" {
s32 func_002ED3C0(unk_func_002ED3C0_2 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    unk_func_002ED3C0_0 lock(&arg0->unk_4C);
    unk_func_002ED3C0_1 *p;
    char *temp;

    for (p = arg0->unk_28; p != NULL; p = p->unk_18) {
        if (p->unk_00 == arg1) {
            break;
        }
    }
    if (p == NULL) {
        return 0;
    }
    *arg3 = p->unk_04;
    temp = func_002F0900(p);
    if (temp == NULL) {
        func_002D3AD0(arg2, D_0035BD40, func_0011D3F8(D_0035BD40));
        return 1;
    }
    func_002D3AD0(arg2, temp, func_0011D3F8(temp));
    return 1;
}
}
