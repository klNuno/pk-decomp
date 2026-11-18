/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00209E50_0;

extern s16 D_003338E0[];
extern s32 D_0035F594;
extern s32 D_0035F598;
extern s32 D_0035F864;
extern s32 D_0035FF6C;
extern u8 D_0035FF98;
extern s32 D_00360180;
extern s32 D_00360184;
extern unk_func_00209E50_0 D_005ACCE0[];
extern unk_func_00209E50_0 D_005ACE50[];
extern unk_func_00209E50_0 D_006053C0;
extern unk_func_00209E50_0 D_006053D0;
extern unk_func_00209E50_0 D_006053E0;
extern unk_func_00209E50_0 D_006053F0;

s32 HIE_fn_hGetSuperObjectFather(s32);
s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_0012CC10(unk_func_00209E50_0 *, unk_func_00209E50_0 *, s32,
                  unk_func_00209E50_0 *, unk_func_00209E50_0 *, s32 *, s32 *);
s32 func_00131D10(s32);
s32 func_00132470(s32, unk_func_00209E50_0 *);
void func_001328A0(s32 *, unk_func_00209E50_0 *);
void func_001328C0(s32 *, unk_func_00209E50_0 *);
s32 func_001971C0(s32);
s32 func_00198500(s32);
s32 func_00198520(s32);
s32 func_00198540(s32);
s32 func_001987D0(s32);
s32 func_001987F0(s32);
s32 func_00198810(s32);
s32 func_00198840(s32);
s32 func_0019ABE0(s32);
s32 func_001B0BA0(s32);
s32 func_001B0BC0(s32);
s32 func_001B0BE0(s32);
s32 func_001B0C10(s32);
s32 func_001BFB20(s32);
s32 func_001E2850(unk_func_00209E50_0 *, unk_func_00209E50_0 *,
                  unk_func_00209E50_0 *, unk_func_00209E50_0 *, void *);
s8 func_0020A580(s32);

void func_00209E50(s32 arg0) {
    unk_func_00209E50_0 temp0, temp1, temp2, temp3;
    s32 temp4, temp5, temp6, temp7, temp8;
    s32 *temp9;
    s32 temp10, temp11, temp12, temp13, temp14, temp15, temp16;
    s32 temp17, temp18, temp19, temp20, temp21, temp22, temp23;
    s32 i;

    temp7 = 0;
    temp8 = 0;
    temp1.unk_08 = temp1.unk_04 = temp1.unk_00 = 0.0f;
    D_006053D0.unk_08 = D_006053D0.unk_04 = D_006053D0.unk_00 = 0.0f;
    D_006053C0.unk_08 = D_006053C0.unk_04 = D_006053C0.unk_00 = 0.0f;
    D_00360184 = 0;
    D_00360180 = 0;
    temp5 = 0;
    temp4 = 0;
    (void)temp7;
    (void)temp1;
    (void)temp5;
    if (D_0035FF98) {
        for (i = 0; i < 30; i++) {
            if (D_003338E0[i] <= 0) {
                D_005ACE50[i] = D_006053F0;
                D_005ACCE0[i].unk_00 = D_006053F0.unk_00 + D_006053E0.unk_00;
                D_005ACCE0[i].unk_04 = D_006053F0.unk_04 + D_006053E0.unk_04;
                D_005ACCE0[i].unk_08 = D_006053F0.unk_08 + D_006053E0.unk_08;
                D_003338E0[i] = 100;
                break;
            }
        }
    }

    temp6 = func_00132470(D_0035FF6C, &D_006053F0);
    temp0.unk_08 = temp0.unk_04 = temp0.unk_00 = 0.0f;
    (void)temp0;
    if (D_0035F594 != 1) {
        D_0035F864 = D_0035F598;
        if (!temp6) {
            func_0012CC10(&D_006053F0, &D_006053E0, D_0035FF6C, &D_006053D0, &D_006053C0, &D_00360184, &temp8);
        } else {
            func_0012CC10(&D_006053F0, &D_006053E0, temp6, &D_006053D0, &D_006053C0, &D_00360184, &temp8);
            temp18 = func_001B0C10(temp6);
            temp10 = temp19 = func_001B0BE0(temp6);
            (void)temp10;
            while (temp18 > 0) {
                if (func_0020A580(temp19) == 2) {
                    break;
                }
                temp17 = func_001B0BC0(temp19);
                if (!func_00131D10(temp17)) {
                    func_0012CC10(&D_006053F0, &D_006053E0, temp17, &D_006053D0, &D_006053C0, &D_00360184, &temp8);
                }
                temp18--;
                temp11 = temp19 = func_001B0BA0(temp19);
                (void)temp11;
            }
        }
        if (!D_0035F594) {
            D_00360180 = temp8;
            return;
        }
    }

    D_0035F864 = 0;
    temp18 = 0;
    temp12 = temp20 = func_00198540(temp6);
    (void)temp12;
    while (temp20) {
        temp21 = func_00198500(temp20);
        if (temp21 != arg0 && (func_001BFB20(temp21) & 0x10) &&
            func_0019ABE0(HIE_fn_hGetSuperObjectObject(temp21)[1]) &&
            func_0012CC10(&D_006053F0, &D_006053E0, temp21, &D_006053D0, &D_006053C0, &temp4, &temp8)) {
            temp7 = 1;
            while (temp4 && func_001971C0(temp4) != 2) {
                temp4 = HIE_fn_hGetSuperObjectFather(temp4);
            }
            if (temp4) {
                D_00360184 = temp4;
            }
        }
        temp18++;
        temp13 = temp20 = func_00198520(temp20);
        (void)temp13;
    }

    temp18 = func_00198840(temp6);
    temp14 = temp22 = func_00198810(temp6);
    (void)temp14;
    while (temp18 > 0) {
        temp17 = func_001987F0(temp22);
        temp9 = HIE_fn_hGetSuperObjectObject(temp17);
        func_001328C0(temp9, &temp2);
        func_001328A0(temp9, &temp3);
        if (func_001E2850(&D_006053F0, &D_006053E0, &temp2, &temp3, NULL)) {
            temp23 = 0;
            temp15 = temp20 = func_00198540(temp17);
            (void)temp15;
            while (temp20) {
                temp21 = func_00198500(temp20);
                if (temp21 != arg0 && (func_001BFB20(temp21) & 0x10) &&
                    func_0019ABE0(HIE_fn_hGetSuperObjectObject(temp21)[1]) &&
                    func_0012CC10(&D_006053F0, &D_006053E0, temp21, &D_006053D0, &D_006053C0, &temp4, &temp8)) {
                    while (temp4 && func_001971C0(temp4) != 2) {
                        temp4 = HIE_fn_hGetSuperObjectFather(temp4);
                    }
                    if (temp4) {
                        D_00360184 = temp4;
                    }
                }
                temp23++;
                {
                    s32 temp24 = temp20 = func_00198520(temp20);
                    (void)temp24;
                }
            }
        }
        temp18--;
        temp16 = temp22 = func_001987D0(temp22);
        (void)temp16;
    }
    D_00360180 = temp8;
}
