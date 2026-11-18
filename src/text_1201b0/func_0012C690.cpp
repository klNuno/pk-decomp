/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_0012C690_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_0012C690_1;

typedef struct unk_0012C690_2 {
    s32 unk_00;
    s32 unk_04;
    struct unk_0012C690_2 *unk_08;
    u8 pad_0C[8];
    struct unk_0012C690_2 *unk_14;
    u8 pad_18[0xC];
    void *unk_24;
    u8 pad_28[8];
    u32 unk_30;
    s32 unk_34;
} unk_0012C690_2;

typedef struct {
    s32 unk_00;
    s16 unk_04;
    u8 pad_06[2];
    unk_0012C690_0 unk_08;
    f32 unk_14;
} unk_0012C690_3;

extern "C" {
extern s32 D_0035F850;
extern f32 D_0035F854;
extern s32 D_0035F868;
extern s32 D_0035F86C;
extern s32 D_0035F870;
extern u8 D_0035F874;
extern u8 D_0035F878;
extern unk_0012C690_0 *D_0035F87C;
extern s32 D_0035F880;
extern s32 D_0035F884;
extern u8 D_00364CA0[];
extern unk_0012C690_1 D_00364D00;
extern f32 D_00364D10[];
extern f32 D_00364D14[];
extern f32 D_00364D18[];
extern f32 D_00364D20[];
extern f32 D_00364D24[];
extern f32 D_00364D28[];
extern f32 D_00364D30[];
extern f32 D_00364D34[];
extern f32 D_00364D38[];

s32 func_00133AA0(s32);
s32 func_00133AB0(s32);
s32 func_00133B30(f32 *, unk_0012C690_1 *, s32, unk_0012C690_3 *);
s32 func_00133CE0(s32);
void func_00154B00(void *, void *);
void func_00155810(void *, void *, const void *);
void func_001559E0(void *, void *, const void *);
unk_0012C690_0 *func_00155EE0(void *);
f32 func_00156150(void *);
s32 func_0015CA30(s32);
void func_001687E0(s32, s32, f32 *, s32 *);
s32 func_001B2EF0(s32, unk_0012C690_2 *);
f32 func_001DCF00(s32);
unk_0012C690_0 *func_001DCF10(s32);
unk_0012C690_0 *func_001DCF70(s32);
unk_0012C690_0 *func_001DCF80(s32);
s32 func_001E1410(unk_0012C690_0 *, unk_0012C690_1 *, unk_0012C690_0 *, f32);
s32 func_001E2850(unk_0012C690_0 *, unk_0012C690_1 *, f32 *, f32 *, f32 *);
s32 func_001E46F0(f32 *, unk_0012C690_1 *, s32);

s8 func_0012C690(unk_0012C690_0 *arg0, unk_0012C690_1 *arg1, unk_0012C690_2 *arg2,
                 s8 arg3, s32 *arg4, s16 *arg5)
{
    unk_0012C690_3 temp0[3];
    s32 temp1[50];
    unk_0012C690_0 temp2;
    s16 temp3;
    unk_0012C690_2 *temp6 = arg2;
    s32 temp4;

    *arg5 = 0;
    D_0035F884 = 0;
    D_0035F880 = 0;
    D_0035F870 = 0;
    D_0035F86C = 0;

    if ((u8)(temp6->unk_30 & 2) && (temp6->unk_30 & 1)) {
        return 0;
    }

    D_0035F87C = func_00155EE0(temp6->unk_24);
    if ((D_0035F878 = (u8)(temp6->unk_30 & 0x10)) != 0) {
        D_0035F880 = temp6->unk_34;
        if (D_0035F880 != 0) {
            unk_0012C690_0 *temp4 = func_001DCF80(D_0035F880);
            unk_0012C690_0 *temp5 = func_001DCF70(D_0035F880);
            D_00364D30[0] = temp4->unk_00 + D_0035F87C->unk_00;
            D_00364D34[0] = temp4->unk_04 + D_0035F87C->unk_04;
            D_00364D38[0] = temp4->unk_08 + D_0035F87C->unk_08;
            D_00364D20[0] = temp5->unk_00 + D_0035F87C->unk_00;
            D_00364D24[0] = temp5->unk_04 + D_0035F87C->unk_04;
            D_00364D28[0] = temp5->unk_08 + D_0035F87C->unk_08;
        }
    } else {
        D_0035F884 = temp6->unk_34;
    }

    temp4 = D_0035F884;
    if (temp4 == 0 && D_0035F880 == 0) {
        D_0035F874 = 1;
    } else if (D_0035F878 == 0) {
        void *temp5 = temp6->unk_24;
        func_001559E0(&temp2, temp5, func_001DCF10(temp4));
        D_0035F874 = func_001E1410(arg0, arg1, &temp2,
                                  func_001DCF00(temp4) * func_00156150(temp5));
    } else {
        D_0035F874 = func_001E2850(arg0, arg1, D_00364D30, D_00364D20, 0);
    }

    if (D_0035F874 != 0) {
        D_0035F868 = temp6->unk_00;
        if (D_0035F868 & 0x600) {
            D_0035F870 = 0;
            D_0035F86C = 0;
        } else if (D_0035F868 & 0x18) {
            func_001687E0(func_00133AB0(temp6->unk_04), 0, &D_0035F854, &D_0035F850);
            D_0035F86C = 0;
            D_0035F870 = D_0035F850;
        } else if (D_0035F868 & 0x60) {
            s32 temp5 = func_00133AA0(func_0015CA30(temp6->unk_04));
            D_0035F86C = temp5 != 0 ? func_00133CE0(temp5) : 0;
        } else if (D_0035F868 == 2) {
            D_0035F870 = 0;
            D_0035F86C = func_001B2EF0(3, temp6);
        }

        if (D_0035F870 != 0 || D_0035F86C != 0) {
            if ((u8)(temp6->unk_30 & 4)) {
                D_00364D10[0] = arg0->unk_00 - D_0035F87C->unk_00;
                D_00364D14[0] = arg0->unk_04 - D_0035F87C->unk_04;
                D_00364D18[0] = arg0->unk_08 - D_0035F87C->unk_08;
                s32 *temp = (s32 *)&D_00364D00;
                temp[0] = arg1->unk_00;
                temp[1] = arg1->unk_04;
                temp[2] = arg1->unk_08;
            } else {
                func_00154B00(D_00364CA0, temp6->unk_24);
                func_001559E0(D_00364D10, D_00364CA0, arg0);
                func_00155810(&D_00364D00, D_00364CA0, arg1);
            }

            if (D_0035F86C != 0 && func_00133B30(D_00364D10, &D_00364D00, D_0035F86C, temp0)) {
                if (arg3 == 0) {
                    *arg4 = D_0035F870;
                    *arg5 = 1;
                    return 1;
                }
                if (*arg5 < 50) {
                    arg4[*arg5] = D_0035F870;
                    (*arg5)++;
                }
            }
            if (D_0035F86C != 0 && func_001E46F0(D_00364D10, &D_00364D00, D_0035F86C) && arg3 == 0) {
                *arg4 = D_0035F86C;
                *arg5 = 1;
                return 2;
            }
        }
    }

    if (D_0035F874 || (u8)((temp6->unk_30 & 0x200) >> 8)) {
        for (temp6 = temp6->unk_08; temp6 != NULL; temp6 = temp6->unk_14) {
            if (temp6->unk_00 != 2) {
                s8 temp5 = func_0012C690(arg0, arg1, temp6, arg3, temp1, &temp3);
                if (arg3 == 0) {
                    if (temp5 != 0) {
                        *arg4 = temp1[0];
                        return temp5;
                    }
                } else {
                    s16 temp7;
                    for (temp7 = 0; temp7 < temp3; temp7++) {
                        if (*arg5 >= 50) {
                            break;
                        }
                        arg4[*arg5] = temp1[temp7];
                        (*arg5)++;
                    }
                }
            }
        }
    }

    if (arg3 == 0) {
        *arg4 = 0;
        *arg5 = 0;
        return 0;
    }
    return 3;
}
}
