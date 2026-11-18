#include "common.h"

typedef struct unk_func_0030E880_0 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[8];
    struct unk_func_0030E880_0 *unk_10;
    struct unk_func_0030E880_0 *unk_14;
} unk_func_0030E880_0;

void func_0030DD20(unk_func_0030E880_0 *);
void func_00308BE0(s32);
void func_00308B80(s32);
s32 func_0030D700(unk_func_0030E880_0 *);
s32 func_00305C10(s32);
extern u8 D_00360898;
extern s32 D_003608A8;
extern unk_func_0030E880_0 *D_003608A4;
extern unk_func_0030E880_0 *D_0036089C;
extern s32 D_00360894;
extern s32 D_0035F7C0;
extern s32 D_0035F7C4;

void func_0030E880(unk_func_0030E880_0 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    if (D_00360898 == 0) {
        func_0030DD20(arg0);
        return;
    }
    if (D_003608A8 != 0) {
        func_00308BE0(D_003608A8);
    }
    if (arg0->unk_10 != NULL || arg0->unk_14 != NULL || arg0 == D_003608A4) {
        D_00360894--;
        if (D_003608A4 == arg0) {
            D_003608A4 = arg0->unk_10;
        }
        if (D_0036089C == arg0) {
            D_0036089C = arg0->unk_14;
        }
        if (arg0->unk_14 != NULL) {
            arg0->unk_14->unk_10 = arg0->unk_10;
        }
        if (arg0->unk_10 != NULL) {
            arg0->unk_10->unk_14 = arg0->unk_14;
        }
        arg0->unk_14 = NULL;
        arg0->unk_10 = NULL;
        temp_s1 = func_0030D700(arg0);
        temp_v0 = func_00305C10(arg0->unk_04);
        if (temp_s1 == 0) {
            D_0035F7C0 += temp_v0;
        } else if (temp_s1 == 1) {
            D_0035F7C4 += temp_v0;
        }
        if (D_003608A8 != 0) {
            func_00308B80(D_003608A8);
        }
        func_0030DD20(arg0);
        if (D_003608A8 != 0) {
            func_00308BE0(D_003608A8);
        }
    }
    if (D_003608A8 != 0) {
        func_00308B80(D_003608A8);
    }
}
