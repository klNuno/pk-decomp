/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_00244DE0_0;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_func_00244DE0_1;

typedef struct {
    u8 pad_00[0x3C];
    f32 unk_3C;
} unk_func_00244DE0_2;

typedef struct {
    u8 pad_00[0xC];
    unk_func_00244DE0_0 *unk_0C;
    unk_func_00244DE0_0 *unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1C;
    u8 pad_1D[7];
    s32 unk_24;
    f32 unk_28;
    u8 pad_2C[0x10];
    f32 unk_3C;
    u8 pad_40[0x30];
    f32 unk_70;
    u8 pad_74[0x1414];
    u32 unk_1488;
    u32 unk_148C;
    u8 pad_1490[8];
    s32 unk_1498;
    u8 pad_149C[4];
    u32 unk_14A0;
    u32 unk_14A4;
    u32 unk_14A8;
    u32 unk_14AC;
    u32 unk_14B0;
    s32 unk_14B4;
} unk_func_00244DE0_3;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00244DE0_4;

unk_func_00244DE0_1 *func_00155EE0(s32);
unk_func_00244DE0_3 *func_00246280(void *);
void func_00246630(unk_func_00244DE0_3 *, s32, s32);
void func_00246920(unk_func_00244DE0_3 *);
void func_00248A20(unk_func_00244DE0_3 *);
void func_00248AA0(unk_func_00244DE0_3 *);
void func_002493E0(unk_func_00244DE0_3 *);
void func_00249A50(unk_func_00244DE0_3 *);
void func_0024A350(unk_func_00244DE0_3 *);
u8 func_0024A4B0(unk_func_00244DE0_3 *);
s32 func_0024A8D0(unk_func_00244DE0_3 *);
void func_0024AFD0(unk_func_00244DE0_3 *);
s32 func_0024C350(unk_func_00244DE0_3 *);
void func_0024C6E0(unk_func_00244DE0_3 *, s32);
s32 rand(void);

extern s32 D_003601C0;
extern s32 D_003601C4;
extern u32 D_005AB800[];

#define UNK_00244DE0_0(arg0, arg1) \
    { \
        (arg0)->unk_00 = func_00155EE0(arg1)->unk_00; \
        (arg0)->unk_04 = func_00155EE0(arg1)->unk_04; \
        (arg0)->unk_08 = func_00155EE0(arg1)->unk_08; \
    }

s32 func_00244DE0(void *arg0, s32 arg1, unk_func_00244DE0_4 *arg2) {
    unk_func_00244DE0_3 *temp;
    u8 unk_01 = 0;
    u16 unk_02 = 0;
    s32 unk_03;

    temp = func_00246280(arg0);
    if (temp != NULL) {
        unk_03 = temp->unk_18;
        temp->unk_14A4 = D_005AB800[0];
        if (temp->unk_14 == 0) {
            if (temp->unk_14A4 - temp->unk_14AC > temp->unk_1488) {
                temp->unk_14AC = temp->unk_14A4;
                temp->unk_14B4 = rand() % 10 < 9;
            } else {
                temp->unk_14B4 = 0;
            }
            if (temp->unk_14A4 - temp->unk_14B0 > temp->unk_148C) {
                temp->unk_14B0 = temp->unk_14A4;
                D_003601C0 = rand() % 10 < 9;
            } else {
                D_003601C0 = 0;
            }
        } else {
            temp->unk_14B4 = 0;
            D_003601C0 = 0;
        }
        D_003601C4 = temp->unk_14B4;
        temp->unk_1498++;
        unk_02 = (u8)temp->unk_1C;

        switch (temp->unk_18) {
        case 1:
            UNK_00244DE0_0((unk_func_00244DE0_1 *)((u8 *)temp + 0x34), temp->unk_0C->unk_24)
            temp->unk_3C += 1.2f;
            UNK_00244DE0_0((unk_func_00244DE0_1 *)((u8 *)temp + (unk_02 - 1) * 0x34 + 0x34),
                          temp->unk_10->unk_24)
            ((unk_func_00244DE0_2 *)((u8 *)temp + (unk_02 - 1) * 0x34))->unk_3C += 0.05f;
            if (temp->unk_14 == 0) {
                if (temp->unk_24 != 0) {
                    func_00246920(temp);
                } else {
                    func_00249A50(temp);
                    func_00248A20(temp);
                    func_00248AA0(temp);
                    func_002493E0(temp);
                }
            } else {
                func_0024AFD0(temp);
            }
            func_0024A350(temp);
            func_0024C6E0(temp, 1);
            break;
        case 0:
            UNK_00244DE0_0((unk_func_00244DE0_1 *)((u8 *)temp + 0x34), temp->unk_0C->unk_24)
            temp->unk_3C += 1.2f;
            UNK_00244DE0_0((unk_func_00244DE0_1 *)((u8 *)temp + 0x68), temp->unk_10->unk_24)
            temp->unk_70 += 0.05f;
            unk_01 = func_0024A4B0(temp);
            switch (unk_01) {
            case 0:
                func_0024C6E0(temp, 0);
                break;
            case 1:
                if (func_0024C350(temp) == 0) {
                    func_00246630(temp, 1, 1);
                } else {
                    func_00246630(temp, 3, 1);
                }
                break;
            case 2:
                func_00246630(temp, 3, 1);
                break;
            }
            func_0024C6E0(temp, 0);
            break;
        case 2:
            UNK_00244DE0_0((unk_func_00244DE0_1 *)((u8 *)temp + 0x34), temp->unk_0C->unk_24)
            temp->unk_3C += 1.2f;
            if (func_0024A8D0(temp) != 0) {
                temp->unk_1C = 0;
                func_00246630(temp, 4, 1);
            } else {
                func_0024C6E0(temp, 2);
            }
            break;
        case 3:
            UNK_00244DE0_0((unk_func_00244DE0_1 *)((u8 *)temp + 0x34), temp->unk_10->unk_24)
            temp->unk_3C += 0.05f;
            if (func_0024A8D0(temp) != 0) {
                temp->unk_1C = 0;
                func_00246630(temp, 4, 1);
            } else {
                func_0024C6E0(temp, 3);
            }
            break;
        }
        temp->unk_14A8 = temp->unk_14A4 - temp->unk_14A0;
        temp->unk_14A0 = temp->unk_14A4;

        switch (temp->unk_18) {
        case 4:
            if (unk_03 == 2) {
                unk_01 = 3;
            } else if (unk_03 == 3) {
                unk_01 = 4;
            } else {
                unk_01 = 0;
            }
            break;
        case 0:
            unk_01 = 2;
            break;
        default:
            if (temp->unk_24 != 0 && !(temp->unk_28 < 60.0f)) {
                temp->unk_28 = 0.0f;
                unk_01 = 5;
            } else {
                unk_01 = 1;
            }
            break;
        }
        arg2->unk_00 = unk_01;
        arg2->unk_0C = 6;
        return arg1;
    }
    arg2->unk_00 = 0;
    arg2->unk_0C = 6;
    return arg1;
}
