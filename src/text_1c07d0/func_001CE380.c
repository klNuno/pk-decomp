/* profile: o0_301_p */
#include "common.h"

typedef struct {
    union {
        struct {
            u16 unk_00 : 15;
            u16 pad_01 : 1;
        } unk_00;
        struct {
            u8 pad_00;
            u8 pad_01 : 7;
            u8 unk_01 : 1;
        } unk_01;
    } unk_00;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
} unk_001CE380_0;

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u8 unk_04;
    u8 unk_05;
} unk_001CE380_1;

typedef struct {
    u8 pad_00[0x53];
    u8 unk_53;
} unk_001CE380_2;

typedef struct {
    unk_001CE380_0 *unk_00;
    u8 pad_04[0x18];
    unk_001CE380_2 *unk_1C;
} unk_001CE380_3;

typedef struct {
    u8 pad_00[0x5C];
    u16 unk_5C;
} unk_001CE380_4;

typedef struct {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u8 pad_08[8];
} unk_001CE380_5;

typedef struct {
    u8 pad_00[0xC];
    u16 unk_0C;
} unk_001CE380_6;

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
    u8 pad_10[0x24];
    u16 unk_34;
    u16 unk_36;
} unk_001CE380_7;

extern unk_001CE380_7 *func_001CAAA0(s32, s32);
extern u16 *D_00360048;
extern unk_001CE380_5 *D_0036004C;
extern unk_001CE380_6 *D_00360050;
extern unk_001CE380_1 *D_00360054;

void func_001CE380(void *arg0, unk_001CE380_3 *arg1, unk_001CE380_4 *arg2, u16 arg3, u8 arg4)
{
    u16 i;
    unk_001CE380_0 *temp0;
    u16 *temp1;
    unk_001CE380_5 *temp2;
    u16 j;
    unk_001CE380_7 *temp3;
    u16 temp4;
    unk_001CE380_6 *temp5;

    s32 temp6;

    temp6 = arg2->unk_5C;

    temp3 = func_001CAAA0(temp6, arg3);
    temp2 = &D_0036004C[temp3->unk_36];
    temp5 = &D_00360050[temp3->unk_34 + arg3];
    temp4 = temp5->unk_0C;
    for (j = 0; j < temp3->unk_0E; temp2++, j++) {
        temp1 = &D_00360048[temp2->unk_06 + temp4];
        temp0 = arg1->unk_00;
        for (i = 0; i < arg1->unk_1C->unk_53; i++) {
            if (temp2->unk_02 == temp0[i].unk_02) {
                if (*temp1 != 0xFFFF) {
                    temp0[i].unk_00.unk_00.unk_00 = D_00360054[*temp1].unk_02;
                    temp0[i].unk_02 = (u8)temp2->unk_02;
                    temp0[i].unk_00.unk_01.unk_01 = 1;
                    temp0[i].unk_03 = (u8)((s8)D_00360054[*temp1].unk_00 & 0xFF);
                    temp0[i].unk_04 = D_00360054[*temp1].unk_04;
                    temp0[i].unk_05 = arg4;
                } else {
                    temp0[i].unk_00.unk_00.unk_00 = 0xFFFF;
                    temp0[i].unk_02 = (u8)temp2->unk_02;
                    temp0[i].unk_00.unk_01.unk_01 = 1;
                    temp0[i].unk_03 = 2;
                    temp0[i].unk_04 = 0;
                    temp0[i].unk_05 = 0xFF;
                }
                break;
            }
        }
    }
}
