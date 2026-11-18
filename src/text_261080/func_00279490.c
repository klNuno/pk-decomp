#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x1C];
    u32 unk_2C;
    s32 unk_30;
} unk_func_00279490_0;

extern char D_0034F168[];
extern char D_0034F170[];
extern char D_0034F178[];
extern char D_0034F180[];
extern char D_0034F188[];
extern char D_0034F190[];
extern char D_0034F198[];
extern char D_0034F1B0[];
extern char D_0034F1E0[];
extern char D_0034F200[];
extern char D_0034F220[];
extern s32 D_00360370;

extern s32 func_0010C218(s32 *, const char *);
extern void func_0010C9A0(s32);
extern void func_0010CC80(s32);
extern void func_0010CE78(s32);
extern void func_0010D400(s32, s32, u32);
extern void func_0010D430(s32, s8 *);
extern char *func_00119260(char *, s32);
extern void func_0011B418(const char *, ...);
extern void func_0011CBB0(char *, const char *, ...);
extern s32 func_0011D3F8(const char *);
extern void func_0011D8F0(char *, const char *, s32);
extern s32 func_0011F0D0(s32);
extern s32 func_0031E420(const char *, s32);
extern void func_0031E6A8(s32);
extern s32 func_0031E828(s32, s32, s32);
extern u32 func_00321238(u32);
extern s32 strcmp(const char *, const char *);
extern char *strcpy(char *, const char *);

s32 func_00279490(unk_func_00279490_0 *arg0, char *arg1) {
    s8 temp0[3];
    char temp2[0x100];
    char temp1[0x40];
    char *temp3;
    s32 i;
    s32 temp7;
    s32 temp4;

    temp3 = func_00119260(arg1, ':');
    if (temp3 != NULL) {
        temp7 = temp3 - arg1;
        func_0011D8F0(temp1, arg1, temp7);
        temp1[temp7] = 0;
        if (strcmp(temp1, D_0034F168) == 0) {
            const char *temp5;

            temp4 = func_0011D3F8(temp3 + 1);
            i = 0;
            arg0->unk_00 = 1;
            for (; i < temp4; ++i) {
                char *temp6 = temp3 + i + 1;

                if (*temp6 == '/') {
                    *temp6 = '\\';
                }
                *temp6 = func_0011F0D0(*temp6);
            }
            if (func_00119260(arg1, ';') != NULL) {
                temp5 = D_0034F170;
            } else {
                temp5 = D_0034F178;
            }
            func_0011CBB0(temp2, D_0034F180, temp3 + 1, temp5);
        } else {
            arg0->unk_00 = 0;
            func_0011CBB0(temp2, D_0034F188, temp1, temp3 + 1);
        }
    } else {
        strcpy(temp1, D_0034F190);
        arg0->unk_00 = 0;
        func_0011CBB0(temp2, D_0034F188, temp1, arg1);
    }

    func_0011B418(D_0034F198, temp2);
    if (arg0->unk_00 != 0) {
        if (D_00360370 == 0) {
            func_0010C9A0(0);
            func_0010CE78(1);
            func_0010CC80(0);
            D_00360370 = 1;
        }
        arg0->unk_2C = func_00321238(0x28010);
        func_0010D400(0x50, 5, (arg0->unk_2C + 0xF) & ~0xFU);
        func_0010CC80(0);
        if (func_0010C218(&arg0->unk_08, temp2) == 0) {
            func_0011B418(D_0034F1B0, temp2);
            return 0;
        }
        arg0->unk_04 = arg0->unk_0C;
        temp0[0] = 0;
        temp0[1] = 0;
        temp0[2] = 0;
        func_0010D430(arg0->unk_08, temp0);
    } else {
        func_0010CC80(0);
        arg0->unk_30 = func_0031E420(temp2, 1);
        if (arg0->unk_30 < 0) {
            func_0011B418(D_0034F1E0, temp2);
            return 0;
        }
        func_0010CC80(0);
        arg0->unk_04 = func_0031E828(arg0->unk_30, 0, 2);
        if (arg0->unk_04 < 0) {
            func_0011B418(D_0034F200, temp2, arg0->unk_04);
            func_0031E6A8(arg0->unk_30);
            return 0;
        }
        func_0010CC80(0);
        if (func_0031E828(arg0->unk_30, 0, 0) < 0) {
            func_0011B418(D_0034F220, temp2);
            func_0031E6A8(arg0->unk_30);
            return 0;
        }
    }
    return 1;
}
