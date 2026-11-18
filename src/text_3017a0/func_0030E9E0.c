#include "common.h"

typedef struct unk_func_0030E9E0_0 {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x8];
    struct unk_func_0030E9E0_0 *unk_10;
    struct unk_func_0030E9E0_0 *unk_14;
} unk_func_0030E9E0_0;

s32 func_00305C10(s32);
void func_00308B80(s32);
void func_00308BE0(s32);
s32 func_0030D700(unk_func_0030E9E0_0 *);
void func_0030DD20(unk_func_0030E9E0_0 *);
extern s32 D_0035F7C0;
extern s32 D_0035F7C4;
extern s32 D_00360894;
extern u8 D_00360898;
extern unk_func_0030E9E0_0 *D_0036089C;
extern unk_func_0030E9E0_0 *D_003608A4;
extern s32 D_003608A8;

void func_0030E9E0(unk_func_0030E9E0_0 *arg0) {
    s32 type;
    s32 size;

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
        type = func_0030D700(arg0);
        size = func_00305C10(arg0->unk_04);
        if (type == 0) {
            D_0035F7C0 += size;
        } else if (type == 1) {
            D_0035F7C4 += size;
        }
        func_0030DD20(arg0);
    }
    if (D_003608A8 != 0) {
        func_00308B80(D_003608A8);
    }
}
