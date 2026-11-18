/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0030EBE0_0 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[8];
    struct unk_func_0030EBE0_0 *unk_10;
    struct unk_func_0030EBE0_0 *unk_14;
} unk_func_0030EBE0_0;

s32 func_00305C00(s32);
u32 func_00305C10(s32);
void func_00308B80(s32);
void func_00308BE0(s32);
s32 func_0030D700(unk_func_0030EBE0_0 *);
void func_0030D730(unk_func_0030EBE0_0 *, s32);
f32 func_0030DA10(unk_func_0030EBE0_0 *);
void func_0030DD20(unk_func_0030EBE0_0 *);
void func_0030DDB0(unk_func_0030EBE0_0 *);
void func_0030E4E0(unk_func_0030EBE0_0 *);
void func_0030E600(unk_func_0030EBE0_0 *);
extern u32 D_0035F7C0;
extern u32 D_0035F7C4;
extern s32 D_00360894;
extern u8 D_00360898;
extern unk_func_0030EBE0_0 *D_0036089C;
extern unk_func_0030EBE0_0 *D_003608A4;
extern s32 D_003608A8;

#define UNK_00(p) {                            \
    --D_00360894;                             \
    if (D_003608A4 == (p)) {                   \
        D_003608A4 = (p)->unk_10;              \
    }                                         \
    if (D_0036089C == (p)) {                   \
        D_0036089C = (p)->unk_14;              \
    }                                         \
    if ((p)->unk_14 != NULL) {                 \
        (p)->unk_14->unk_10 = (p)->unk_10;      \
    }                                         \
    if ((p)->unk_10 != NULL) {                 \
        (p)->unk_10->unk_14 = (p)->unk_14;      \
    }                                         \
    (p)->unk_14 = NULL;                        \
    (p)->unk_10 = NULL;                        \
}

void func_0030EBE0(void)
{
    unk_func_0030EBE0_0 *temp2;
    unk_func_0030EBE0_0 *temp0;
    unk_func_0030EBE0_0 *temp1;
    unk_func_0030EBE0_0 *temp3;
    u32 temp4;
    s32 temp5;
    f32 temp6;
    s32 temp7;

    if (D_00360898 != 0) {
        if (D_003608A8 != 0) {
            func_00308BE0(D_003608A8);
        }
        temp1 = D_003608A4;
        D_0036089C = NULL;
        D_003608A4 = NULL;
        if (temp1 != NULL) {
            do {
                temp2 = temp1->unk_10;
                func_0030E600(temp1);
                func_0030E4E0(temp1);
                temp1 = temp2;
            } while (temp2 != NULL);
        }
        temp2 = D_003608A4;
        temp0 = D_0036089C;
        if (temp2 != NULL) {
            do {
                while (temp2 != NULL && func_0030D700(temp2) != 0xFF) {
                    temp2 = temp2->unk_10;
                }
                if (temp2 != NULL) {
                    temp4 = func_00305C10(temp2->unk_04);
                    if (D_0035F7C0 >= temp4) {
                        temp7 = 0;
                    } else if (D_0035F7C4 >= temp4) {
                        temp7 = 1;
                    } else {
                        temp7 = 0xFF;
                    }
                    func_0030D730(temp2, temp7);
                    while (temp0 != NULL && func_0030D700(temp2) == 0xFF) {
                        while (temp0 != NULL && func_0030D700(temp0) == 0xFF) {
                            temp0 = temp0->unk_14;
                        }
                        if (temp0 != NULL) {
                            temp6 = func_0030DA10(temp2);
                            if (!(temp6 <= func_0030DA10(temp0))) {
                                temp5 = func_0030D700(temp0);
                                temp4 = func_00305C10(temp0->unk_04);
                                if (temp5 == 0) {
                                    D_0035F7C0 += temp4;
                                } else if (temp5 == 1) {
                                    D_0035F7C4 += temp4;
                                }
                                func_0030D730(temp0, 0xFF);
                                if (D_003608A8 != 0) {
                                    func_00308B80(D_003608A8);
                                }
                                func_0030DD20(temp0);
                                if (D_003608A8 != 0) {
                                    func_00308BE0(D_003608A8);
                                }
                                if (func_00305C00(temp0->unk_04) == 0) {
                                    temp3 = temp0;
                                    temp0 = temp0->unk_14;
                                    UNK_00(temp3)
                                } else {
                                    temp0 = temp0->unk_14;
                                }
                                temp4 = func_00305C10(temp2->unk_04);
                                if (D_0035F7C0 >= temp4) {
                        temp7 = 0;
                    } else if (D_0035F7C4 >= temp4) {
                        temp7 = 1;
                    } else {
                        temp7 = 0xFF;
                    }
                    func_0030D730(temp2, temp7);
                            } else {
                                temp0 = NULL;
                            }
                        } else {
                            temp0 = NULL;
                        }
                    }
                    if (func_0030D700(temp2) != 0xFF) {
                        temp5 = func_0030D700(temp2);
                        temp4 = func_00305C10(temp2->unk_04);
                        if (temp5 == 0) {
                            D_0035F7C0 -= temp4;
                        } else if (temp5 == 1) {
                            D_0035F7C4 -= temp4;
                        }
                        func_0030DDB0(temp2);
                        temp2 = temp2->unk_10;
                    } else {
                        if (func_00305C00(temp2->unk_04) == 0) {
                            temp1 = temp2;
                            temp2 = temp2->unk_10;
                            UNK_00(temp1)
                            if (D_003608A8 != 0) {
                                func_00308B80(D_003608A8);
                            }
                            func_0030DD20(temp1);
                            if (D_003608A8 != 0) {
                                func_00308BE0(D_003608A8);
                            }
                        } else {
                            temp2 = temp2->unk_10;
                        }
                    }
                }
            } while (temp2 != NULL);
        }
        if (D_003608A8 != 0) {
            func_00308B80(D_003608A8);
        }
    }
}
