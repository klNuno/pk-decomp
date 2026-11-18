/* profile: opt_300_noprop */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_0012CEC0_0;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_0012CEC0_4;

typedef union {
    unk_0012CEC0_0 unk_00;
    unk_0012CEC0_4 unk_04;
} unk_0012CEC0_5;

typedef struct unk_0012CEC0_1 {
    s32 unk_00;
    s32 unk_04;
    struct unk_0012CEC0_1 *unk_08;
    u8 pad_0C[8];
    struct unk_0012CEC0_1 *unk_14;
    u8 pad_18[0xC];
    void *unk_24;
    u8 pad_28[8];
    u32 unk_30;
    u8 pad_34[4];
    s32 unk_38;
} unk_0012CEC0_1;

typedef struct {
    u8 pad_00[0x14];
    f32 unk_14;
    u8 pad_18[0x38];
} unk_0012CEC0_2;

typedef struct {
    unk_0012CEC0_1 *unk_00;
    s32 unk_04;
    s32 unk_08;
    unk_0012CEC0_2 unk_0C;
} unk_0012CEC0_3;

void func_0012C4B0(void);
void func_0012D980(unk_0012CEC0_1 *);
s32 func_00133AA0(s32);
s32 func_00133B30(f32 *, unk_0012CEC0_5 *, s32, unk_0012CEC0_2 *);
s32 func_00133CE0(s32);
void func_00154B00(void *, void *);
void func_00155810(void *, void *, void *);
void func_001559E0(void *, void *, void *);
unk_0012CEC0_0 *func_00155EE0(void *);
f32 func_00156150(void *);
s32 func_0015CA30(s32);
s32 func_001B2EF0(s32, unk_0012CEC0_1 *);
s32 func_001BFB20(unk_0012CEC0_1 *);
f32 func_001DCF00(s32);
void *func_001DCF10(s32);
unk_0012CEC0_0 *func_001DCF70(s32);
unk_0012CEC0_0 *func_001DCF80(s32);
u8 func_001E1410(unk_0012CEC0_0 *, unk_0012CEC0_5 *, unk_0012CEC0_0 *, f32);
u8 func_001E2850(unk_0012CEC0_0 *, unk_0012CEC0_5 *, f32 *, f32 *, s32);
extern u32 D_0035F864;
extern s32 D_0035F888;
extern u8 D_0035F88C;
extern u8 D_0035F890;
extern s32 D_0035F894;
extern s32 D_0035F898;
extern s32 D_0035F89C;
extern u8 D_0035F8CC;
extern unk_0012CEC0_2 D_00364D40[];
extern f32 D_00364D48[];
extern f32 D_00364D4C[];
extern f32 D_00364D50[];
extern f32 D_00364D54[];
extern u8 D_00364D90[];
extern unk_0012CEC0_5 D_00364DF0[];
extern f32 D_00364E00[];
extern f32 D_00364E04[];
extern f32 D_00364E08[];
extern f32 D_00364E10[];
extern f32 D_00364E14[];
extern f32 D_00364E18[];
extern f32 D_00364E20[];
extern f32 D_00364E24[];
extern f32 D_00364E28[];

s16 func_0012CEC0(unk_0012CEC0_0 *arg0, unk_0012CEC0_5 *arg1, unk_0012CEC0_1 *arg2,
                  unk_0012CEC0_3 *arg3, s16 *arg4)
{
    unk_0012CEC0_0 spA0;
    u32 temp0;
    unk_0012CEC0_0 *temp1;
    unk_0012CEC0_0 *temp2;
    unk_0012CEC0_0 *temp3;
    s32 temp4;
    void *temp5;
    f32 temp6;
    s32 temp7;
    unk_0012CEC0_1 *temp8;
    unk_0012CEC0_4 *temp9;

    temp0 = arg2->unk_30;
    if (D_0035F8CC == 0 && (temp0 & 1)) {
        return *arg4;
    }
    D_0035F888 = arg2->unk_00;
    if (D_0035F888 != 2) {
        if (temp0 & D_0035F864) {
            return *arg4;
        }
    } else if (!func_001BFB20(arg2) & 0x200) {
        return *arg4;
    }
    D_0035F89C = 0;
    D_0035F898 = 0;
    D_0035F894 = 0;
    func_0012D980(arg2);
    D_0035F890 = temp0 & 0x10;
    if (D_0035F890 != 0) {
        D_0035F898 = arg2->unk_38;
        if (D_0035F898 != 0) {
            temp1 = func_001DCF80(D_0035F898);
            temp2 = func_001DCF70(D_0035F898);
            temp3 = func_00155EE0(arg2->unk_24);
            D_00364E20[0] = temp1->unk_00 + temp3->unk_00;
            D_00364E24[0] = temp1->unk_04 + temp3->unk_04;
            D_00364E28[0] = temp1->unk_08 + temp3->unk_08;
            D_00364E10[0] = temp2->unk_00 + temp3->unk_00;
            D_00364E14[0] = temp2->unk_04 + temp3->unk_04;
            D_00364E18[0] = temp2->unk_08 + temp3->unk_08;
        }
    } else {
        D_0035F89C = arg2->unk_38;
    }
    temp4 = D_0035F89C;
    if (temp4 == 0 && D_0035F898 == 0) {
        D_0035F88C = 1;
    } else if (D_0035F890 == 0) {
        temp5 = arg2->unk_24;
        func_001559E0(&spA0, temp5, func_001DCF10(temp4));
        temp6 = func_001DCF00(temp4);
        D_0035F88C = func_001E1410(arg0, arg1, &spA0, temp6 * func_00156150(temp5));
    } else {
        D_0035F88C = func_001E2850(arg0, arg1, D_00364E20, D_00364E10, 0);
    }
    if (D_0035F88C != 0) {
        if (D_0035F888 & 0x600) {
            D_0035F894 = 0;
        } else if (D_0035F888 & 0x18) {
            temp7 = func_00133AA0(arg2->unk_04);
            D_0035F894 = temp7 != 0 ? func_00133CE0(temp7) : 0;
        } else if (D_0035F888 & 0x60) {
            temp7 = func_00133AA0(func_0015CA30(arg2->unk_04));
            D_0035F894 = temp7 != 0 ? func_00133CE0(temp7) : 0;
        } else if (D_0035F888 == 2) {
            D_0035F894 = func_001B2EF0(3, arg2);
        }
        if (D_0035F894 != 0) {
            if (temp0 & 4) {
                D_00364E00[0] = arg0->unk_00 - func_00155EE0(arg2->unk_24)->unk_00;
                D_00364E04[0] = arg0->unk_04 - func_00155EE0(arg2->unk_24)->unk_04;
                D_00364E08[0] = arg0->unk_08 - func_00155EE0(arg2->unk_24)->unk_08;
                temp9 = &D_00364DF0[0].unk_04;
                temp9->unk_00 = arg1->unk_04.unk_00;
                temp9->unk_04 = arg1->unk_04.unk_04;
                temp9->unk_08 = arg1->unk_04.unk_08;
            } else {
                func_00154B00(D_00364D90, arg2->unk_24);
                func_001559E0(D_00364E00, D_00364D90, arg0);
                func_00155810(D_00364DF0, D_00364D90, arg1);
            }
            if (func_00133B30(D_00364E00, D_00364DF0, D_0035F894, D_00364D40) != 0) {
                if (*arg4 == 0) {
                    arg3->unk_0C = D_00364D40[0];
                    arg3->unk_00 = arg2;
                    arg3->unk_04 = 0;
                    arg3->unk_08 = D_0035F894;
                    *arg4 = 1;
                    arg1->unk_00.unk_00 = D_00364D48[0] - arg0->unk_00;
                    arg1->unk_00.unk_04 = D_00364D4C[0] - arg0->unk_04;
                    arg1->unk_00.unk_08 = D_00364D50[0] - arg0->unk_08;
                } else if (D_00364D54[0] < arg3->unk_0C.unk_14) {
                    arg3->unk_0C = D_00364D40[0];
                    arg3->unk_00 = arg2;
                    arg3->unk_04 = 0;
                    arg3->unk_08 = D_0035F894;
                    arg1->unk_00.unk_00 = D_00364D48[0] - arg0->unk_00;
                    arg1->unk_00.unk_04 = D_00364D4C[0] - arg0->unk_04;
                    arg1->unk_00.unk_08 = D_00364D50[0] - arg0->unk_08;
                }
            }
        }
    }
    if (D_0035F88C != 0 || (u8)((arg2->unk_30 & 0x200) >> 8)) {
        temp8 = arg2->unk_08;
        if (temp8 != 0) {
            do {
                func_0012CEC0(arg0, arg1, temp8, arg3, arg4);
                temp8 = temp8->unk_14;
            } while (temp8 != 0);
        }
    }
    func_0012C4B0();
    return *arg4;
}
