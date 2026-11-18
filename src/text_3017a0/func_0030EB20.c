#include "common.h"

typedef struct unk_func_0030EB20_0 {
    u8 pad_00[0x10];
    struct unk_func_0030EB20_0 *unk_10;
    struct unk_func_0030EB20_0 *unk_14;
} unk_func_0030EB20_0;

void func_0030DDB0(unk_func_0030EB20_0 *);
void func_00308BE0(s32);
void func_0030D730(unk_func_0030EB20_0 *, s32);
void func_00308B80(s32);
extern u8 D_00360898;
extern s32 D_003608A8;
extern u32 D_00360894;
extern unk_func_0030EB20_0 *D_003608A4;
extern unk_func_0030EB20_0 *D_0036089C;

void func_0030EB20(unk_func_0030EB20_0 *arg0) {
    if (D_00360898 == 0) {
        func_0030DDB0(arg0);
        return;
    }
    if (D_003608A8 != 0) {
        func_00308BE0(D_003608A8);
    }
    func_0030D730(arg0, 0xFF);
    D_00360894++;
    if (D_00360894 <= 0x80) {
        arg0->unk_10 = D_003608A4;
        arg0->unk_14 = NULL;
        D_003608A4 = arg0;
        if (arg0->unk_10 != NULL) {
            arg0->unk_10->unk_14 = arg0;
        }
        if (D_0036089C == NULL) {
            D_0036089C = arg0;
        }
    }
    if (D_003608A8 != 0) {
        func_00308B80(D_003608A8);
    }
}
