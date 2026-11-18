/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} unk_0022CBC0_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_0022CBC0_1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_0022CBC0_2;

typedef union {
    unk_0022CBC0_2 *unk_00;
    s32 unk_04;
    unk_0022CBC0_1 unk_08;
    u8 pad_0C[16];
} unk_0022CBC0_3;

typedef struct {
    u8 pad_00[0xC];
    s16 *unk_0C;
} unk_0022CBC0_4;

typedef struct {
    unk_0022CBC0_1 unk_00;
    s16 unk_0C;
    s16 unk_0E;
} unk_0022CBC0_5;

typedef struct {
    unk_0022CBC0_1 unk_00;
    u8 pad_0C[4];
    unk_0022CBC0_1 unk_10;
    u8 pad_1C[4];
    unk_0022CBC0_5 unk_20;
} unk_0022CBC0_6;

extern char D_0034E478[];
unk_0022CBC0_0 *fn_p_stEvalTree(s32, unk_0022CBC0_0 *, unk_0022CBC0_3 *);
s32 fn_h_StandardGameGetSuperObject(s32);
unk_0022CBC0_4 *func_001B0B00(u8, u16, s32);
void func_001EDBB0(s32, s32);
void func_001DB9F0(unk_0022CBC0_4 *, s16, s16, s16 *, s16 *);
void func_001DD290(unk_0022CBC0_4 *, unk_0022CBC0_1 *, s16);
void func_001DD2D0(unk_0022CBC0_4 *, unk_0022CBC0_1 *, s16);

unk_0022CBC0_0 *func_0022CBC0(s32 arg0, unk_0022CBC0_0 *arg1) {
    s32 temp = arg1[-1].unk_00;
    unk_0022CBC0_3 temp2;
    s32 temp3;
    char *temp4;
    s32 temp5;
    unk_0022CBC0_1 *temp6;
    unk_0022CBC0_4 *temp7;
    unk_0022CBC0_6 temp8;

    arg1 = fn_p_stEvalTree(arg0, arg1, &temp2);
    temp3 = fn_h_StandardGameGetSuperObject(temp2.unk_00->unk_04);
    temp4 = D_0034E478;
    (void)temp4;
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp2);
    temp5 = temp2.unk_04;
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp2);
    temp6 = &temp2.unk_08;

    switch (temp) {
        case 0x154:
            temp7 = func_001B0B00(1, (u16)(temp5 - 1), temp3);
            break;
        case 0x155:
            temp7 = func_001B0B00(0, (u16)(temp5 - 1), temp3);
            break;
        case 0x156:
            temp7 = func_001B0B00(2, (u16)(temp5 - 1), temp3);
            break;
        default:
            func_001EDBB0(0x28, 0);
            return arg1;
    }

    if (temp7 != 0) {
        switch ((s16)*temp7->unk_0C) {
            case 7:
                func_001DD2D0(temp7, temp6, 0);
                break;
            case 8:
                func_001DB9F0(temp7, 0, 0, &temp8.unk_20.unk_0E, &temp8.unk_20.unk_0C);
                func_001DD290(temp7, &temp8.unk_00, temp8.unk_20.unk_0E);
                func_001DD290(temp7, &temp8.unk_10, temp8.unk_20.unk_0C);
                temp8.unk_20.unk_00.unk_00 = temp6->unk_00 - temp8.unk_00.unk_00;
                temp8.unk_20.unk_00.unk_04 = temp6->unk_04 - temp8.unk_00.unk_04;
                temp8.unk_20.unk_00.unk_08 = temp6->unk_08 - temp8.unk_00.unk_08;
                temp8.unk_00.unk_00 += temp8.unk_20.unk_00.unk_00;
                temp8.unk_00.unk_04 += temp8.unk_20.unk_00.unk_04;
                temp8.unk_00.unk_08 += temp8.unk_20.unk_00.unk_08;
                temp8.unk_10.unk_00 += temp8.unk_20.unk_00.unk_00;
                temp8.unk_10.unk_04 += temp8.unk_20.unk_00.unk_04;
                temp8.unk_10.unk_08 += temp8.unk_20.unk_00.unk_08;
                func_001DD2D0(temp7, &temp8.unk_00, temp8.unk_20.unk_0E);
                func_001DD2D0(temp7, &temp8.unk_10, temp8.unk_20.unk_0C);
                break;
        }
    }
    return arg1;
}
