/* profile: opt_300_noexc */
#include "common.h"

extern "C" {
s32 func_002CF630(...);
void func_002D29C0(...);
char *func_002F0900(...);
void func_00308B80(s32);
void func_00308BE0(s32);
int strcmp(const char *, const char *);
}

class unk_func_002ECCD0_0 {
public:
    s32 *unk_00;
    unk_func_002ECCD0_0(s32 *p) : unk_00(p) {
        if (*unk_00 != 0) {
            func_00308BE0(*unk_00);
        }
    }
    ~unk_func_002ECCD0_0() {
        if (*unk_00 != 0) {
            func_00308B80(*unk_00);
        }
    }
};

typedef struct unk_func_002ECCD0_1 {
    u8 pad_00[0x18];
    struct unk_func_002ECCD0_1 *unk_18;
} unk_func_002ECCD0_1;

typedef struct {
    u8 pad_00[0x28];
    unk_func_002ECCD0_1 *unk_28;
    u8 pad_2C[0x20];
    s32 unk_4C;
} unk_func_002ECCD0_2;

typedef struct {
    u8 pad_00[0xC];
    char *unk_0C;
} unk_func_002ECCD0_3;

extern "C" {
void func_002ECCD0(unk_func_002ECCD0_2 *arg0, unk_func_002ECCD0_3 **arg1, s32 arg2) {
    unk_func_002ECCD0_0 lock(&arg0->unk_4C);
    unk_func_002ECCD0_1 *p;
    char *temp;
    s32 sp48;
    s32 sp4C;

    for (p = arg0->unk_28; p != NULL; p = p->unk_18) {
        temp = func_002F0900(p);
        if (temp != NULL && strcmp(temp, (*arg1)->unk_0C) == 0) {
            sp48 = func_002CF630(arg2 + 4);
            func_002D29C0(&sp4C, arg2, &sp48, p);
        }
    }
}
}
