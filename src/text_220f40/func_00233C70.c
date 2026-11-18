/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00233C70_0 {
    s8 unk_00;
    u8 pad_01[6];
    u8 unk_07;
} unk_func_00233C70_0;

typedef struct unk_func_00233C70_1 {
    union {
        u32 unk_00;
        s32 unk_00_s32;
        u16 unk_00_u16;
        f32 unk_00_f32;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 pad_10[0xC];
} unk_func_00233C70_1;

typedef struct unk_func_00233C70_2 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00233C70_2;

unk_func_00233C70_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stBrainGetMind(s32);
unk_func_00233C70_0 *fn_p_stEvalTree(s32, unk_func_00233C70_0 *, unk_func_00233C70_1 *);
unk_func_00233C70_0 *fn_p_stOperatorGetPerso(s32, unk_func_00233C70_0 *, s32 *);
u8 func_001273A8(f32);
void func_0015C650(u8, s8, s8);
void func_0015C690(u8, s8, s8);
void func_0015C6D0(u8, s8, s8);
void func_0015C710(u8, s8 *, s8 *);
void func_0015C750(u8, s8 *, s8 *);
void func_0015C790(u8, s8 *, s8 *);
void func_0015C8C0(u8, s32);
void func_0015C960(u8, u32, u32);
u8 func_001EA0D0(u8, s32, s32, unk_func_00233C70_1 *);
extern u8 D_00331410[];

#define TEMP_FLOAT(arg) ((arg).unk_0C == 8 ? (arg).unk_00.unk_00_f32 : (f32)(arg).unk_00.unk_00_s32)

unk_func_00233C70_0 *func_00233C70(s32 arg0, unk_func_00233C70_0 *arg1) {
    s8 spDA;
    s8 spDB;
    s8 spDC;
    s8 spDD;
    s8 spDE;
    s8 spDF;
    volatile u32 spBC;
    s32 spC0;
    s32 spC4;
    unk_func_00233C70_1 spA0;
    u8 temp0;
    u8 temp1;
    u32 temp2;
    s32 temp3;
    u16 temp4;
    s32 temp5;
    u32 temp6;
    u32 temp7;
    u16 temp8;

    temp5 = ((s32 *)arg1)[-2];
    switch (temp5) {
    case 0x181:
        arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
        temp0 = func_001273A8(TEMP_FLOAT(spA0));
        if (temp0 > 0xF) {
            temp0 = 0;
        }
        func_0015C8C0(temp0, 1);
        break;
    case 0x17F:
        arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
        temp0 = func_001273A8(TEMP_FLOAT(spA0));
        if (temp0 > 0xF) {
            temp0 = 0;
        }
        func_0015C790(temp0, &spDA, &spDB);
        func_0015C750(temp0, &spDC, &spDD);
        func_0015C710(temp0, &spDE, &spDF);
        if ((u8)arg1->unk_07 == 2) {
            arg1++;
            arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &spC0);
        } else {
            spC0 = arg0;
        }
        temp3 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(spC0)->unk_0C);
        temp1 = (u8)arg1->unk_00;
        arg1++;
        temp8 = (u16)((s8)spDE + ((s8)spDF << 8));
        spA0.unk_00.unk_00 = temp8;
        spA0.unk_0C = 6;
        temp1 = func_001EA0D0(temp1, 0, temp3, &spA0);
        if ((u8)arg1->unk_07 == 2) {
            arg1++;
            arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &spC4);
        } else {
            spC4 = arg0;
        }
        temp3 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(spC4)->unk_0C);
        temp1 = (u8)arg1->unk_00;
        arg1++;
        spBC = ((s8)spDD << 24) + (((s8)spDC << 16) + ((s8)spDA + ((s8)spDB << 8)));
        spA0.unk_00.unk_00 = spBC;
        spA0.unk_0C = 6;
        temp1 = func_001EA0D0(temp1, 0, temp3, &spA0);
        break;
    case 0x180:
        arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
        temp0 = func_001273A8(TEMP_FLOAT(spA0));
        if (temp0 > 0xF) {
            temp0 = 0;
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
        temp4 = spA0.unk_00.unk_00_u16;
        spDE = (s8)temp4 & 0xFF;
        spDF = (s8)(((s32)temp4 >> 8) & 0xFF);
        arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
        temp2 = spA0.unk_00.unk_00;
        spDA = (s8)(temp2 & 0xFF);
        if ((s8)spDA == 0) {
            spDA = -50;
        }
        spDB = (s8)((temp2 >> 8) & 0xFF);
        if ((s8)spDB == 0) {
            spDB = 50;
        }
        spDC = (s8)((temp2 >> 16) & 0xFF);
        if ((s8)spDC == 0) {
            spDC = -50;
        }
        spDD = (s8)((temp2 >> 24) & 0xFF);
        if ((s8)spDD == 0) {
            spDD = 50;
        }
        if ((s8)spDE <= (s8)spDA) {
            spDE = spDA + 1;
        }
        if ((s8)spDE >= (s8)spDB) {
            spDE = spDB - 1;
        }
        if ((s8)spDF <= (s8)spDC) {
            spDF = spDC + 1;
        }
        if ((s8)spDF >= (s8)spDD) {
            spDF = spDD - 1;
        }
        func_0015C650(temp0, spDE, spDF);
        func_0015C6D0(temp0, spDA, spDB);
        func_0015C690(temp0, spDC, spDD);
        break;
    case 0x17E:
        arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
        temp0 = func_001273A8(TEMP_FLOAT(spA0));
        if (temp0 > 0xF) {
            temp0 = 0;
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
        temp6 = spA0.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
        temp7 = spA0.unk_00.unk_00;
        D_00331410[temp0] = 1;
        func_0015C960(temp0, temp6, temp7);
        break;
    }
    return arg1;
}
