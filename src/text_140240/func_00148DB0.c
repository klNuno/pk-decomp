#include "common.h"

typedef struct unk_func_00148DB0_0 unk_func_00148DB0_0;
typedef struct unk_func_00148DB0_1 unk_func_00148DB0_1;

struct unk_func_00148DB0_0 {
    u8 pad_00[0x14];
    unk_func_00148DB0_0 *unk_14;
    unk_func_00148DB0_0 *unk_18;
    unk_func_00148DB0_1 *unk_1C;
};

struct unk_func_00148DB0_1 {
    u8 pad_00[0x8];
    unk_func_00148DB0_0 *unk_08;
    unk_func_00148DB0_0 *unk_0C;
    s32 unk_10;
};

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_00148DB0_2;

typedef struct {
    u8 pad_00[0xA8];
    unk_func_00148DB0_1 *unk_A8;
} unk_func_00148DB0_3;

unk_func_00148DB0_3 *func_001387B0(unk_func_00148DB0_2 *);

void func_00148DB0(unk_func_00148DB0_2 *arg0, unk_func_00148DB0_0 *arg1, unk_func_00148DB0_1 *arg2) {
    if (((arg0->unk_08 & 0x40000000) ? 1 : 0) == 0) {
        func_001387B0(arg0)->unk_A8 = arg2;
        if (arg1->unk_14 != 0) {
            arg1->unk_14->unk_18 = arg1->unk_18;
        }
        if (arg1->unk_18 != 0) {
            arg1->unk_18->unk_14 = arg1->unk_14;
        }
        if (arg1->unk_1C != 0) {
            arg1->unk_1C->unk_10--;
            if (arg1->unk_1C->unk_08 == arg1) {
                arg1->unk_1C->unk_08 = arg1->unk_14;
            }
            if (arg1->unk_1C->unk_0C == arg1) {
                arg1->unk_1C->unk_0C = arg1->unk_18;
            }
        }
        arg1->unk_14 = 0;
        arg1->unk_18 = 0;
        arg1->unk_1C = 0;
        if (arg1->unk_14 != 0) {
            arg1->unk_14->unk_18 = arg1->unk_18;
        }
        if (arg1->unk_18 != 0) {
            arg1->unk_18->unk_14 = arg1->unk_14;
        }
        if (arg1->unk_1C != 0) {
            arg1->unk_1C->unk_10--;
            if (arg1->unk_1C->unk_08 == arg1) {
                arg1->unk_1C->unk_08 = arg1->unk_14;
            }
            if (arg1->unk_1C->unk_0C == arg1) {
                arg1->unk_1C->unk_0C = arg1->unk_18;
            }
        }
        arg1->unk_14 = 0;
        arg1->unk_18 = 0;
        arg1->unk_1C = 0;
        arg1->unk_14 = 0;
        arg1->unk_18 = arg2->unk_0C;
        arg1->unk_1C = arg2;
        if (arg2->unk_08 == 0) {
            arg2->unk_08 = arg1;
        } else {
            arg2->unk_0C->unk_14 = arg1;
        }
        arg2->unk_0C = arg1;
        arg2->unk_10++;
    }
}
