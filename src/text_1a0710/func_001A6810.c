/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s8 unk_00[0x1E];
} unk_func_001A6810_0;

typedef struct {
    u8 pad_00[0x707];
    unk_func_001A6810_0 unk_707[];
} unk_func_001A6810_1;

void func_00117BC0(s32);
s32 func_001181E8(char *, char *);
void func_00118218(s32, char *, s8 *);
u8 func_0015A7F0(s32);
void func_0019B510(s8 *, s32);
void func_0019D9C0(void);
void func_0019DAB0(void);
void func_001A5800(void);
void func_001AECB0(u8, s32);
s32 func_001AF230(s32);
void func_001CEE30(s32);
extern char D_0034B3D0[];
extern char D_0034B3E0[];
extern char D_0034B3F0[];
extern u8 D_0035F8F0;
extern s8 D_0035F8F4;
extern s8 D_0035FF54;
extern u8 D_0035FF98;
extern s8 D_0035FF9C;
extern u8 D_0035FFA0;
extern u8 D_0035FFA4;
extern s8 D_0035FFA8;
extern u8 D_0035FFAC;
extern u8 D_0035FFB0;
extern s8 D_0035FFBC;
extern u8 D_0035FFC0;
extern u8 D_00360144;
extern s32 D_005AB670[];
extern s32 D_005AB674[];
extern s32 D_005AB684[];
extern s32 D_005AB68C[];
extern s32 D_005AB694[];
extern s32 D_005AB698[];
extern s32 D_005AB6A0[];
extern s32 D_005AB6A4[];
extern s32 D_005AB6A8[];
extern s32 D_005AB6AC[];
extern s32 D_005AB6B0[];
extern s32 D_005AB6B4[];
extern s32 D_005AB6B8[];
extern s32 D_005AB6BC[];
extern s32 D_005AB6F4[];
extern s32 D_005AB72C[];
extern unk_func_001A6810_1 D_005AB790;
extern s8 D_005AB791[];
extern s32 D_005AB7F0[];
extern s32 D_005ABD90[];
extern s32 D_005ABDBC[];
extern s32 D_005ABDC0[];
extern u8 D_005ACAC8[];
extern u8 D_005ACAD0[];

void func_001A6810(void) {
    s32 temp2;
    s32 temp;
    s32 temp3;

    temp = (u8)(u8)(func_0015A7F0(D_005AB670[0]) == 1);
    (void)temp;
    if (D_0035FFA4 || temp) {
        func_0019D9C0();
        func_0019DAB0();
    }
    if (func_0015A7F0(D_005AB674[0]) == 1) {
        if (D_005AB7F0[0] & 4) {
            D_005AB7F0[0] &= ~4;
        } else {
            D_005AB7F0[0] |= 4;
        }
    }
    if (func_0015A7F0(D_005AB694[0]) == 1) {
        D_0035F8F0 = (D_0035F8F0 + 1) % 5;
    }
    if (func_0015A7F0(D_005AB698[0]) == 1) {
        if (D_00360144 == 0) {
            D_00360144 = 1;
        } else if ((D_00360144 & 4) == 4) {
            D_00360144 = 0;
        } else if ((D_00360144 & 2) == 2) {
            D_00360144 |= 4;
        } else if ((D_00360144 & 1) == 1) {
            D_00360144 |= 2;
        }
    }
    if (func_0015A7F0(D_005AB6A0[0]) == 1) {
        D_0035FF98 = (D_0035FF98 + 1) % 2;
    }
    if (func_0015A7F0(D_005AB6A4[0]) == 1) {
        D_0035FFB0 = (D_0035FFB0 + 1) % 2;
    }
    if (func_0015A7F0(D_005AB6A8[0]) == 1) {
        D_0035FFB0 = 0;
        D_00360144 = 0;
        D_0035FF98 = 0;
        D_0035FF9C = 0;
        D_0035FFBC = 0;
        D_0035F8F0 = 0;
        D_005AB7F0[0] |= 4;
        D_0035F8F4 = 0;
    }
    if ((func_0015A7F0(D_005AB684[0]) == 1) && !D_005ACAD0[0]) {
        func_001A5800();
    }
    if (func_0015A7F0(D_005AB68C[0]) == 1) {
        D_0035FFC0 = 1 - (s8)D_0035FFC0;
    }
    if ((func_0015A7F0(D_005AB6AC[0]) == 1) && D_005ACAC8[0] > 1) {
        D_0035FF54 = 0;
    }
    if (D_0035FF54 > -1) {
        if (func_0015A7F0(D_005AB6B0[0]) == 1) {
            D_0035FF54 = (D_0035FF54 + 1) % D_005ACAC8[0];
        }
        if (func_0015A7F0(D_005AB6B4[0]) == 1) {
            D_0035FF54 = (D_0035FF54 + D_005ACAC8[0] - 1) % D_005ACAC8[0];
        }
        if (func_0015A7F0(D_005AB6B8[0]) == 1 &&
            D_005AB790.unk_707[D_0035FF54].unk_00[0] != 0) {
            D_0035FFB0 = 0;
            D_0035FFA8 = 0;
            D_00360144 = 0;
            func_0019B510(D_005AB790.unk_707[D_0035FF54].unk_00, 1);
        }
        if (func_0015A7F0(D_005AB6BC[0]) == 1) {
            D_0035FF54 = -1;
        }
    }
    if (func_0015A7F0(D_005AB6F4[0]) == 1) {
        temp2 = func_001181E8(D_0034B3D0, D_0034B3E0);
        if (temp2 != 0) {
            func_00118218(temp2, D_0034B3F0, D_005AB791);
            func_001CEE30(temp2);
            func_00117BC0(temp2);
        }
    }
    if ((func_0015A7F0(D_005AB72C[0]) == 1) && (D_005ABDC0[0] != 0)) {
        if (D_0035FFA0 && !D_0035FFAC) {
            D_0035FFAC = 1;
            D_005ABDBC[0] = D_005ABDC0[0];
            return;
        }
        if (++D_0035FFA0 < D_005ABD90[0]) {
            D_0035FFAC = 0;
            temp3 = func_001AF230(D_0035FFA0);
            if (temp3 != 0) {
                func_001AECB0(0, temp3);
                if (D_0035FFA0 == 1) {
                    func_001AECB0(1, D_005ABDBC[0]);
                    D_005ABDC0[0] = D_005ABDBC[0];
                }
                D_005ABDBC[0] = func_001AF230(D_0035FFA0);
                return;
            }
            D_0035FFA0 = 0;
            return;
        }
        D_005ABDBC[0] = D_005ABDC0[0];
        func_001AECB0(0, D_005ABDBC[0]);
        D_0035FFA0 = 0;
    }
}
