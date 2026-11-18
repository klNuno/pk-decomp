/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    u16 unk_50;
    u8 pad_52[0xC];
    u8 unk_5E;
} unk_func_001C9240_0;

typedef struct {
    u8 pad_00[0xC];
} unk_func_001C9240_1;

extern void **HIE_fn_hGetSuperObjectObject(void *);
extern void *HMU_fn_p_vMalloc(u32, s32);
extern void HMU_fn_vFree(unk_func_001C9240_1 **, s32);
extern void *func_00197860(void *);
extern s32 func_001A7060(void *);
extern unk_func_001C9240_0 *func_001ABA70(void *);
extern u16 func_001C03C0(void *);
extern void func_001C91D0(void *, u8);
extern void func_001C9730(void *);
extern void func_001CA0A0(unk_func_001C9240_1 *, s32, void *);
extern s32 func_001CA3F0(unk_func_001C9240_1 *);
extern u8 func_001CA410(unk_func_001C9240_1 *);
extern unk_func_001C9240_1 *func_001CBDA0(unk_func_001C9240_0 *, s32, s32);
extern void *memcpy(void *, const void *, u32);

void func_001C9240(void *arg0, void *arg1, s32 arg2) {
    unk_func_001C9240_1 *temp0, *temp1;
    s32 temp2;
    unk_func_001C9240_1 *temp3;
    unk_func_001C9240_0 *temp4;
    s32 temp5, temp6;
    unk_func_001C9240_0 *temp7;
    void *temp8;
    void *temp9;
    unk_func_001C9240_1 *temp10, *temp11, *temp12, *temp13;
    u16 temp14;

    temp8 = *HIE_fn_hGetSuperObjectObject(arg0);
    temp9 = func_00197860(temp8);
    if (temp9 != NULL) {
        temp7 = func_001ABA70(temp9);
        if (temp7 != NULL && temp7->unk_5E != 0) {
            temp14 = func_001C03C0(temp8);
            if (temp14 >= temp7->unk_50) {
                temp14 = (s16)temp7->unk_50 - 1;
            }
            temp1 = func_001CBDA0(temp7, temp14, func_001A7060(temp8));
            if (temp1 != NULL && arg2 != 0) {
                temp4 = NULL;
                temp0 = NULL;
                if (arg1 != NULL) {
                    temp4 = func_001ABA70(arg1);
                    if (temp4 != NULL && temp4->unk_5E != 0) {
                        temp0 = func_001CBDA0(temp4, 0, func_001A7060(temp8));
                        if (temp0 != NULL) {
                            temp10 = HMU_fn_p_vMalloc(temp4->unk_5E * sizeof(*temp10), 1);
                            memcpy(temp10, temp0, temp4->unk_5E * sizeof(*temp10));
                            temp0 = temp10;
                            temp1 = func_001CBDA0(temp7, temp14, func_001A7060(temp8));
                            for (temp6 = 0; temp6 < temp7->unk_5E; temp6++, temp11 = temp1++) {
                                temp5 = 0;
                                if (func_001CA410(temp1) != 0xFF) {
                                    break;
                                }
                                for (temp0 = temp10, temp2 = 0; temp2 < temp4->unk_5E;
                                     temp2++, temp3 = temp0, temp0 = temp3 + 1) {
                                    if (func_001CA410(temp0) != 0xFF) {
                                        break;
                                    }
                                    if (func_001CA3F0(temp1) == func_001CA3F0(temp0)) {
                                        temp5 = 1;
                                        break;
                                    }
                                }
                                if (temp5 == 0) {
                                    func_001CA0A0(temp1, 2, arg0);
                                }
                            }
                            HMU_fn_vFree(&temp10, 1);
                        } else {
                            temp1 = func_001CBDA0(temp7, 0, func_001A7060(temp8));
                            for (temp6 = 0; temp6 < temp7->unk_5E; temp6++, temp12 = temp1++) {
                                if (func_001CA410(temp1) == 0xFF) {
                                    func_001CA0A0(temp1, 2, arg0);
                                }
                            }
                        }
                    } else {
                        temp1 = func_001CBDA0(temp7, 0, func_001A7060(temp8));
                        for (temp6 = 0; temp6 < temp7->unk_5E; temp6++, temp13 = temp1++) {
                            if (func_001CA410(temp1) == 0xFF) {
                                func_001CA0A0(temp1, 2, arg0);
                            }
                        }
                    }
                }
            }
        }
        func_001C91D0(temp8, 0);
        func_001C9730(temp8);
    }
}
