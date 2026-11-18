/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x14];
} unk_00265560_0;

typedef struct {
    u8 pad_00[0x10];
} unk_00265560_1;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x14];
    f32 unk_20[2];
    f32 unk_28;
    u8 pad_2C[4];
    f32 unk_30[3];
    u8 pad_3C[0x20];
    f32 unk_5C;
    u8 pad_60[0xC];
    f32 unk_6C;
    s32 unk_70;
    f32 unk_74;
    u8 pad_78[4];
    s32 unk_7C;
    s32 unk_80;
    u8 pad_84[0xC];
} unk_00265560_2;

f32 func_00167A50(void);
void func_00167A70(f32);
s32 func_0016BE80(s32);
s32 func_0016D000(void);
void func_00179AB0(void);
void func_0017D910(void);
s32 func_0017D970(unk_00265560_1 *, s32, s32, s32, f32, f32);
void func_0017DF90(s32);
void func_0017E040(void);
void func_0017E9E0(void);
u8 func_0019C120(void);
void func_002582E0(s32, unk_00265560_0 *);
void func_00258580(s32);
void func_002587B0(void);
void func_00258BC0(s32);
void func_0025CD20(s32, void *, void *, s32, f32);
void func_00262560(u32, s32);
void func_00266D90(void);
void func_002702F0(s32);
void func_002706E0(void);
s32 rand(void);
extern s32 D_0035F5AC;
extern u8 D_0035FAD0;
extern s8 D_0035FAD4;
extern s8 D_0035FAD8;
extern f32 D_0035FAE0;
extern s32 D_0035FD60;
extern s32 D_0035FD70;
extern u8 D_003601AC;
extern u32 D_00360210;
extern s32 D_00360214;
extern u8 D_00360224;
extern s32 D_00360228;
extern s32 D_0036022C;
extern s8 D_00360230;
extern f32 D_00360238;
extern f32 D_0036023C;
extern f32 D_00360240;
extern s32 D_00360244;
extern s32 D_00360250;
extern s32 D_00360290;
extern s32 D_00360294;
extern u32 D_0036029C;
extern union { f32 unk_00; u32 unk_04; } D_003602B0;
extern u32 D_003602B4;
extern u32 D_003602B8;
extern u32 D_005AB800[];
extern unk_00265560_0 D_00618040[];
extern s8 D_006180E0[];
extern unk_00265560_1 D_00618180[];
extern unk_00265560_2 D_00633320[];

void func_00265560(s32 arg0)
{
    s32 temp0;
    u32 temp1;
    u32 temp2;
    unk_00265560_2 *temp3;
    s32 temp4;
    u32 temp5;
    u32 temp6;
    f32 temp7;
    s32 temp8;
    s32 temp9;
    u32 temp10;
    u32 temp11;
    f32 temp12;
    f32 temp13;
    f32 temp14;
    s32 unk_04;
    unk_00265560_2 *unk_00;

    func_00179AB0();
    func_0017DF90(arg0);
    func_0017E040();
    D_003602B4 = D_003602B8;
    D_003602B8 = D_005AB800[0];
    temp14 = 0.001f * (f32)D_005AB800[0];
    D_00360238 = temp14;
    if (0.0f != D_0036023C) {
        if (func_0019C120() || func_0016D000()) {
            D_00360240 = 0.0f;
            D_00360238 = D_0036023C;
        } else {
            temp13 = D_00360238 - D_0036023C;
            D_0036023C = D_00360238;
            D_00360240 = temp13;
        }
    } else {
        D_00360240 = 0.0f;
        D_0036023C = temp14;
    }
    if (D_003601AC && !D_00360250 && !D_00360224) {
        D_00360210 = 0;
        D_00360250 = 1;
        D_00360244 = 0;
    } else if (!D_003601AC && D_00360250 && !D_00360224) {
        D_00360250 = 0;
        D_00360210 = 0;
        D_00360244 = 0;
    }
    if (D_00360230) {
        D_00360230++;
        if (D_00360230 == 10) {
            D_00360230 = 0;
        }
    }

    func_002706E0();
    D_0035FD70 = 0;
    func_002702F0(arg0);
    func_002587B0();
    func_00258580(arg0);
    func_0017D910();
    D_0035FD60 = 1;
    D_0035FD70 = 0;
    func_00167A70(255.0f);
    for (temp0 = 0; temp0 < D_00360290; temp0++) {
        func_002582E0(arg0, &D_00618040[temp0]);
    }
    D_0035FD60 = 0;
    D_0035FD70 = 0;
    func_0017D910();
    if (D_0036029C) {
        D_0035FD60 = 1;
        D_0035FD70 = func_0016BE80(D_00360294);
        func_00167A70(255.0f);
        for (temp1 = 0; temp1 < D_0036029C; temp1++) {
            if (D_006180E0[temp1]) {
                func_0017D970(&D_00618180[temp1], D_00360294, arg0, 1, 1.0f, 1.0f);
            }
        }
        func_0017D910();
    }

    D_0035FD60 = 0;
    D_0035FD70 = 0;
    if (!D_00360210) {
        func_00258BC0(arg0);
        func_0017E9E0();
        return;
    }

    D_00360214 = D_00360214 ? 0 : 1;
    temp7 = func_00167A50();
    D_0035FAD4 = 1;
    for (temp10 = 0; temp10 < D_00360210;) {
        u32 unk_08;
        unk_00 = (unk_00265560_2 *)((u8 *)D_00633320 + (((s32)(temp10 << 3) + (s32)temp10) << 4));
        unk_04 = 0;
        unk_08 = unk_00->unk_00;

        if (unk_08 & 0x10000) {
            if (D_00360238 - unk_00->unk_08 > unk_00->unk_6C) {
                unk_04 = 1;
            }
        } else if (unk_08 & 0x200000) {
            unk_00->unk_6C -= 1.0f;
            if (unk_00->unk_6C < 0.0f) {
                unk_04 = 1;
            }
        }

        if (unk_08 & 0x40000) {
            if (unk_00->unk_28 > unk_00->unk_6C) {
                unk_04 = 1;
            }
        } else if ((unk_08 & 0x100000) && unk_00->unk_28 < unk_00->unk_6C) {
            unk_04 = 1;
        }
        if (unk_00->unk_74 <= 0.0f) {
            unk_04 = 1;
        }

        D_0035FAD0 = 0;
        if (!(unk_00->unk_00 & 0x04000000)) {
            D_0035FAD8 = 1;
        }
        if (*(u8 *)&unk_00->unk_00 == 0xC) {
            D_003602B0.unk_04 = 0x3F800000;
        } else {
            D_003602B0.unk_00 = unk_00->unk_5C;
        }
        if (unk_00->unk_00 & 0x400000) {
            D_0035FAD4 = 0;
        } else {
            D_0035FAD4 = 1;
        }
        D_0035FAE0 = (f32)unk_00->unk_04;
        unk_00->unk_7C = func_0016BE80(unk_00->unk_70);
        D_0035FAD8 = 0;
        unk_00->unk_80 = 0;
        if (D_0035FAD0) {
            D_0035FAD0 = 0;
            unk_04 = 1;
        }

        if (unk_04 || (unk_00->unk_00 & 0x01000000)) {
            temp11 = unk_00->unk_00;
            if ((temp11 & 0x20000) && (temp11 & 0x80000)) {
                temp12 = -6.0f + (7.0f * (f32)rand()) / 2147483648.0f;
                if (temp12 > 0.0f) {
                    f32 *unk_20 = &unk_00->unk_20[0];
                    f32 *unk_30 = &unk_00->unk_30[0];
                    func_0025CD20(0x44, (void *)unk_20, (void *)unk_30, unk_00->unk_70, 1.0f);
                }
            }
            temp10++;
            unk_00->unk_00 |= 0x01000000;
        } else {
            temp10++;
        }
    }

    func_00266D90();
    D_00360228 = 1;
    D_0036022C = 0;
    if (D_00360210) {
        temp6 = 0;
        do {
            temp4 = -1;
            temp8 = D_00633320[temp6].unk_7C;
            func_0017D910();
            D_0035FD70 = temp8;
            D_0035FD60 = 1;
            temp5 = temp6;
            temp2 = (s32)temp6 * (s32)sizeof(unk_00265560_2);
            for (; temp5 < D_00360210; temp2 += sizeof(unk_00265560_2), temp5++) {
                temp3 = (unk_00265560_2 *)((u8 *)D_00633320 + temp2);
                temp9 = temp3->unk_7C;
                if (temp9 == temp8) {
                    func_00262560(temp5, arg0);
                    temp3->unk_80 = 1;
                } else if (temp4 == -1 && temp3->unk_80 == 0) {
                    temp4 = temp9;
                    temp6 = temp5;
                }
            }
        } while (temp4 != -1);
    }
    func_0017D910();
    D_0035FD60 = 0;
    D_0035FD70 = 0;
    D_0035FAD4 = 0;
    D_0036022C = 0;
    func_00258BC0(arg0);
    D_00360228 = 0;
    D_0036022C = 0;
    func_00167A70(temp7);
    D_0035F5AC = 0;
    func_0017E9E0();
}
