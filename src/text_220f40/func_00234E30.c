/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00234E30_0 {
    s8 unk_00;
    u8 pad_01[6];
    u8 unk_07;
} unk_func_00234E30_0;

typedef struct unk_func_00234E30_1 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00234E30_1;

typedef struct unk_func_00234E30_2 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00234E30_2;

typedef struct unk_func_00234E30_3 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
} unk_func_00234E30_3;

typedef struct unk_func_00234E30_4 {
    u8 pad_00[0x4];
    unk_func_00234E30_3 *unk_04;
} unk_func_00234E30_4;

typedef struct unk_func_00234E30_5 {
    unk_func_00234E30_4 **unk_00;
    u8 pad_04[0x4];
    u8 *unk_08;
} unk_func_00234E30_5;

typedef struct unk_func_00234E30_6 {
    u8 pad_00[0xC];
    unk_func_00234E30_5 *unk_0C;
} unk_func_00234E30_6;

typedef struct unk_func_00234E30_7 {
    s32 unk_00;
    u8 pad_04[4];
} unk_func_00234E30_7;

unk_func_00234E30_2 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_00234E30_6 *fn_p_stBrainGetMind(s32);
unk_func_00234E30_0 *fn_p_stEvalTree(s32, unk_func_00234E30_0 *, unk_func_00234E30_1 *);
unk_func_00234E30_0 *fn_p_stOperatorGetPerso(s32, unk_func_00234E30_0 *, s32 *);
u8 fn_ucGetDsgVar(u8, u8, unk_func_00234E30_6 *, unk_func_00234E30_1 *);
u8 func_001EA0D0(u8, u8, unk_func_00234E30_6 *, unk_func_00234E30_1 *);
void func_001EDBB0(s32, s32);

unk_func_00234E30_0 *func_00234E30(s32 arg0, unk_func_00234E30_0 *arg1) {
    unk_func_00234E30_1 temp;
    s32 perso;
    s32 b4;
    s32 b8;
    volatile u8 flag;
    unk_func_00234E30_6 *mind;
    u8 idx;
    s32 val;
    u32 bit;
    u32 word;
    s32 shift;
    u8 *ptr;
    s32 op = ((unk_func_00234E30_7 *)arg1)[-1].unk_00;

    if (arg1->unk_07 == 2) {
        arg1++;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &perso);
    } else {
        perso = arg0;
    }
    mind = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(perso)->unk_0C);
    idx = (u8)arg1->unk_00;
    arg1++;
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
    bit = temp.unk_00;
    bit--;
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
    flag = temp.unk_00 ? 1 : 0;
    switch (op) {
    case 0x184:
        word = bit >> 5;
        shift = bit & 0x1F;
        b4 = (*mind->unk_0C->unk_00)->unk_04[idx].unk_04;
        ptr = mind->unk_0C->unk_08 + (*mind->unk_0C->unk_00)->unk_04[idx].unk_00;
        b8 = ptr[4];
        if (fn_ucGetDsgVar(idx, word, mind, &temp) == 1) {
            val = temp.unk_00;
            if (flag) {
                val |= 1 << shift;
            } else {
                val &= ~(1 << shift);
            }
            temp.unk_00 = val;
            temp.unk_0C = 6;
            idx = func_001EA0D0(idx, word, mind, &temp);
        }
        break;
    default:
        func_001EDBB0(0x28, 0);
        break;
    }
    return arg1;
}
