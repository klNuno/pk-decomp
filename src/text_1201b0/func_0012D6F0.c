#include "common.h"

typedef struct unk_func_0012D6F0_0 unk_func_0012D6F0_0;

typedef struct {
    u8 pad_00[8];
    unk_func_0012D6F0_0 *unk_08;
    unk_func_0012D6F0_0 *unk_0C;
    s32 unk_10;
    u8 pad_14[0x10];
    s32 unk_24;
} unk_func_0012D6F0_1;

struct unk_func_0012D6F0_0 {
    u8 pad_00[0x14];
    unk_func_0012D6F0_0 *unk_14;
    unk_func_0012D6F0_0 *unk_18;
    unk_func_0012D6F0_1 *unk_1C;
    s32 unk_20;
    s32 unk_24;
};

typedef struct {
    u8 pad_00[0x60];
} unk_func_0012D6F0_2;

void func_00154B00(unk_func_0012D6F0_2 *, s32);
void func_00153920(s32, unk_func_0012D6F0_2 *, s32);

static inline void unlink(unk_func_0012D6F0_0 *arg0) {
    if (arg0->unk_14 != NULL) {
        arg0->unk_14->unk_18 = arg0->unk_18;
    }
    if (arg0->unk_18 != NULL) {
        arg0->unk_18->unk_14 = arg0->unk_14;
    }
    if (arg0->unk_1C != NULL) {
        arg0->unk_1C->unk_10--;
        if (arg0->unk_1C->unk_08 == arg0) {
            arg0->unk_1C->unk_08 = arg0->unk_14;
        }
        if (arg0->unk_1C->unk_0C == arg0) {
            arg0->unk_1C->unk_0C = arg0->unk_18;
        }
    }
    arg0->unk_14 = NULL;
    arg0->unk_18 = NULL;
    arg0->unk_1C = NULL;
}

void func_0012D6F0(unk_func_0012D6F0_0 *arg0, unk_func_0012D6F0_1 *arg1, s32 arg2) {
    unk_func_0012D6F0_2 sp20;

    unlink(arg0);
    if (arg2) {
        unlink(arg0);
        arg0->unk_18 = NULL;
        arg0->unk_14 = arg1->unk_08;
        arg0->unk_1C = arg1;
        if (arg1->unk_0C == NULL) {
            arg1->unk_0C = arg0;
        } else {
            arg1->unk_08->unk_18 = arg0;
        }
        arg1->unk_08 = arg0;
        arg1->unk_10++;
    } else {
        unlink(arg0);
        arg0->unk_14 = NULL;
        arg0->unk_18 = arg1->unk_0C;
        arg0->unk_1C = arg1;
        if (arg1->unk_08 == NULL) {
            arg1->unk_08 = arg0;
        } else {
            arg1->unk_0C->unk_14 = arg0;
        }
        arg1->unk_0C = arg0;
        arg1->unk_10++;
    }
    func_00154B00(&sp20, arg0->unk_1C->unk_24);
    func_00153920(arg0->unk_20, &sp20, arg0->unk_24);
}
