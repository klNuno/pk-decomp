/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_002B7260_0;

typedef struct {
    u8 pad_00[0x24];
    unk_func_002B7260_0 *unk_24[7];
    s32 unk_40;
} unk_func_002B7260_1;

typedef struct {
    unk_func_002B7260_1 *unk_00;
    u8 pad_04[0x18];
} unk_func_002B7260_2;

typedef struct {
    u8 pad_00;
    u8 unk_01;
    u8 pad_02[0xA];
    s32 unk_0C;
    u8 pad_10[0xC];
} unk_func_002B7260_3;

typedef union {
    struct {
        u16 unk_00 : 14;
        u16 : 2;
        u8 pad_02[5];
        u8 : 5;
        u8 unk_07 : 3;
    } unk_00;
    struct {
        u64 : 37;
        u64 unk_04 : 14;
        u64 : 13;
    } unk_01;
} unk_func_002B7260_4;

typedef struct {
    u8 pad_00[0x18];
    u64 unk_18;
    unk_func_002B7260_4 unk_20;
    u8 pad_28[8];
    u8 : 2;
    u8 unk_30 : 3;
    u8 : 3;
    u8 pad_31[3];
    u16 unk_34 : 12;
    u16 : 4;
} unk_func_002B7260_5;

typedef struct {
    u8 pad_00;
    u8 : 5;
    u8 unk_01 : 1;
    u8 : 2;
    u8 pad_02[7];
} unk_func_002B7260_6;

extern s32 D_007B8480[], D_007B26F4[], D_007B26FC[], D_007B2704[];
extern unk_func_002B7260_2 D_007B2718[], D_007B271C[], D_007B2720[];
extern unk_func_002B7260_3 D_007B2370[];
extern unk_func_002B7260_5 *D_007B26F0[];
extern unk_func_002B7260_6 D_007B09D2;
extern s32 D_007B6884[], D_007B8328[], D_007B24E8[];
extern u8 D_007B7B84[];
extern u64 D_007B0908[];
extern char D_003512E0[];

void func_002BBD00(s32);
s32 func_002B3960(u32, s32);
void func_0011B418(char *, s32, s32, s32);
void func_002B7B50(unk_func_002B7260_0 *, s32, u8);
void func_002B79B0(unk_func_002B7260_1 *, s32);
void func_002C1E50(unk_func_002B7260_5 *, s32);

static inline s32 func_002B7260_0(s32 arg0) {
    switch (arg0) {
    case 0x80E4: return 1;
    case 0x80E5: return 1;
    case 0x8057: return 2;
    case 0x8051: return 4;
    case 0x8058: return 4;
    default: return 0;
    }
}

void func_002B7260(s32 arg0) {
    s32 temp, temp14, temp15;
    unk_func_002B7260_3 *temp2;
    unk_func_002B7260_0 **temp3;
    unk_func_002B7260_0 *temp4;
    s32 temp5;
    unk_func_002B7260_1 *temp6;
    s32 temp7;
    u32 temp8;

    switch (arg0) {
    case 0xDE0:
        temp = D_007B26F4[*D_007B8480];
        break;
    case 0xDE1:
        temp = D_007B26FC[*D_007B8480];
        break;
    case 0x8513:
    case 0x8515:
    case 0x8516:
    case 0x8517:
    case 0x8518:
    case 0x8519:
    case 0x851A:
        temp = *D_007B2704;
        break;
    default:
        temp = 0;
        break;
    }

    switch (arg0) {
    case 0xDE0:
        temp6 = D_007B2718[D_007B26F4[*D_007B8480]].unk_00;
        break;
    case 0xDE1:
        temp6 = D_007B271C[D_007B26FC[*D_007B8480]].unk_00;
        break;
    case 0x8513:
    case 0x8515:
    case 0x8516:
    case 0x8517:
    case 0x8518:
    case 0x8519:
    case 0x851A:
        temp6 = D_007B2720[*D_007B2704].unk_00;
        break;
    default:
        temp6 = NULL;
        break;
    }

    temp2 = (unk_func_002B7260_3 *)((u8 *)&D_007B2370[temp] + 0x398);
    temp5 = 0;
    if (temp6 == NULL) {
        return;
    }
    func_002BBD00(arg0);
    temp4 = temp6->unk_24[0];
    temp3 = temp6->unk_24;
    if (temp2->unk_01 == 0) {
        s32 temp9;
        s32 temp11;
        u32 temp10;

        if (temp4 == NULL) {
            return;
        }
        if (temp4->unk_14 == 0) {
            return;
        }
        temp5 = 1;
        if (temp4->unk_08 > 0x20 && temp4->unk_0C < 0x20) {
            temp9 = (((temp4->unk_08 << 5) * func_002B7260_0(temp4->unk_10)) + 0xFF) >> 8;
            temp10 = temp9;
        } else {
            temp9 = ((temp4->unk_08 * temp4->unk_0C * func_002B7260_0(temp4->unk_10)) + 0xFF) >> 8;
            temp10 = temp9;
        }
        if (temp4->unk_10 == 0x80E4) {
            temp10 = temp9 = (u32)temp9 >> 1;
        }
        temp11 = 1;
        do {
            if (temp3[temp11] == NULL) {
                break;
            }
            if (temp10 > 1) {
                temp10 >>= 1;
            }
            temp9 += temp10;
            temp11++;
        } while (temp11 < 7);

        if (temp4->unk_10 == 0x80E4 || temp4->unk_10 == 0x80E5) {
            temp6->unk_40 = temp9;
            if (temp4->unk_10 == 0x80E4) {
                temp9 += 1;
            } else {
                temp9 += 4;
            }
        }
        temp2->unk_0C = func_002B3960((u32)(temp9 + 15) >> 4, temp);
        if (temp2->unk_0C < 0) {
            func_0011B418(D_003512E0, temp, temp4->unk_08, temp4->unk_0C);
        }
    }

    if (temp2->unk_0C < 0) {
        temp2->unk_0C = 0;
    }
    temp8 = (u32)(*D_007B6884 + ((temp2->unk_0C >= 0 ? temp2->unk_0C : 0) << 12) + 0xFF) >> 8;
    (*D_007B26F0)->unk_20.unk_00.unk_00 = temp8;
    temp7 = 1;
    do {
        if (temp3[temp7] == NULL) {
            break;
        }
        temp7++;
    } while (temp7 < 7);
    (*D_007B26F0)->unk_30 = temp7 - 1;
    if (temp7 > 1) {
        (*D_007B26F0)->unk_34 = *D_007B8328;
    }
    for (temp14 = 0; temp14 < temp7; temp14++) {
        unk_func_002B7260_0 *temp12 = *temp3++;
        if (temp12 == NULL) {
            break;
        }
        if (temp12->unk_14 != 0) {
            func_002B7B50(temp12, temp14, temp2->unk_01);
        }
    }
    if (temp4->unk_10 == 0x80E4 || temp4->unk_10 == 0x80E5) {
        if (*D_007B24E8 & 0x10) {
            if (*D_007B7B84 == 0) {
                func_002B79B0(NULL, *D_007B6884 - 4);
                *D_007B7B84 = 1;
                temp5 = 2;
                (*D_007B26F0)->unk_20.unk_01.unk_04 = 0x3FFC;
                (*D_007B26F0)->unk_20.unk_00.unk_07 = 1;
            } else {
                (*D_007B26F0)->unk_20.unk_00.unk_07 = 1;
            }
        } else {
            temp15 = temp8 + temp6->unk_40;
            func_002B79B0(temp6, temp15);
            temp5 = 2;
            (*D_007B26F0)->unk_20.unk_01.unk_04 = (s64)temp15;
            (*D_007B26F0)->unk_20.unk_00.unk_07 = 1;
            *D_007B7B84 = 0;
        }
    } else {
        (*D_007B26F0)->unk_20.unk_00.unk_07 = 0;
    }

    if (temp5 == 2) {
        (*D_007B26F0)->unk_18 = 0x3F;
    } else {
        (*D_007B26F0)->unk_18 = 0x7F;
        if (temp5 == 1) {
            *D_007B0908 = 1;
            D_007B09D2.unk_01 = 1;
        }
    }
    temp2->unk_01 = 1;
    func_002C1E50(*D_007B26F0, 7);
}
