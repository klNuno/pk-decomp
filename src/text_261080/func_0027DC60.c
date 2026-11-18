/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    char *unk_04;
    s32 unk_08;
    void *unk_0C;
} unk_0027DC60_0;

typedef struct {
    char unk_00[6];
    u16 unk_06;
    u8 pad_08[4];
    s32 unk_0C;
    u8 unk_10[0x40];
    u8 unk_50[0x30];
    u8 unk_80[0x30];
    u8 unk_B0[0x10];
    u8 unk_C0[0x44];
    char unk_104[0x40];
    char unk_144[0x40];
    char unk_184[0x40];
    u8 pad_1C4[0x200];
} unk_0027DC60_1;

typedef struct { __int128 unk_00[4]; } unk_0027DC60_2;
typedef struct { __int128 unk_00[3]; } unk_0027DC60_3;
typedef struct { __int128 unk_00[1]; } unk_0027DC60_4;

extern unk_0027DC60_0 D_0033FD30[];
extern unk_0027DC60_2 D_0033FDC0[];
extern unk_0027DC60_3 D_0033FE00[];
extern unk_0027DC60_3 D_0033FE30[];
extern unk_0027DC60_4 D_0033FE60[];
extern char D_0034F3C0[];
extern char D_0034F3D8[];
extern char D_0034F448[];
extern char D_0034F450[];
extern char D_0034F458[];
extern char D_0034F468[];

void *memset(void *, s32, u32);
void *memcpy(void *, const void *, u32);
char *strcpy();
void func_0011CBB0(char *, const char *, ...);
void func_0027D860(void *, s32, char *, u16 *);
s32 func_0027C760(s32, s32, const char *, void *, s32);
s32 func_0027ECD0(s32, s32, const char *, s32, void *);
s32 func_0027C240(s32, s32, const char *);

s32 func_0027DC60(s32 arg0, s32 arg1, char *arg2, char *arg3)
{
    s32 i;
    unk_0027DC60_1 temp0;
    char temp1[0x40];
    char temp2[0x50];
    unk_0027DC60_2 temp3 = *D_0033FDC0;
    unk_0027DC60_3 temp4 = *D_0033FE00;
    unk_0027DC60_3 temp5 = *D_0033FE30;
    unk_0027DC60_4 temp6 = *D_0033FE60;

    memset(&temp0, 0, sizeof(temp0));
    strcpy((void *)temp0.unk_00, D_0034F448);
    func_0011CBB0(temp2, D_0034F450, D_0034F458, arg3);
    func_0011CBB0(temp2, D_0034F450, D_0034F458, D_0034F468);
    func_0027D860(temp0.unk_C0, 0x21, temp2, &temp0.unk_06);
    temp0.unk_0C = 0x60;
    memcpy(temp0.unk_10, &temp3, sizeof(temp3));
    memcpy(temp0.unk_50, &temp4, sizeof(temp4));
    memcpy(temp0.unk_80, &temp5, sizeof(temp5));
    memcpy(temp0.unk_B0, &temp6, sizeof(temp6));
    strcpy((void *)temp0.unk_104, D_0033FD30[0].unk_04);
    strcpy((void *)temp0.unk_144, D_0033FD30[D_0033FD30[1].unk_08 != 0 ? 1 : 0].unk_04);
    strcpy((void *)temp0.unk_184, D_0033FD30[D_0033FD30[2].unk_08 != 0 ? 2 : 0].unk_04);
    func_0011CBB0(temp1, D_0034F3C0, arg2);
    if (func_0027C760(arg0, arg1, temp1, &temp0, sizeof(temp0)) != 1) {
        return 0;
    }
    for (i = 0; i < 3; i++) {
        if (D_0033FD30[i].unk_08 != 0 && D_0033FD30[i].unk_0C != NULL) {
            func_0011CBB0(temp1, D_0034F3D8, arg2, D_0033FD30[i].unk_04);
            if ((func_0027ECD0(arg0, arg1, temp1, 0, NULL) == 0 ||
                 D_0033FD30[i].unk_08 != func_0027C240(arg0, arg1, temp1))) {
                if (func_0027C760(arg0, arg1, temp1, D_0033FD30[i].unk_0C, D_0033FD30[i].unk_08) != 1) {
                    return 0;
                }
            }
        }
    }
    return 1;
}
