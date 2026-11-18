/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00214450_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00214450_0;

typedef struct unk_func_00214450_1 {
    union {
        s16 unk_00;
        s32 unk_00_s32;
        f32 unk_00_f32;
        unk_func_00214450_0 unk_00_vec;
    } unk_00;
    s32 unk_0C;
} unk_func_00214450_1;

typedef struct unk_func_00214450_2 {
    u8 pad_00[0x14];
    void *unk_14;
} unk_func_00214450_2;

unk_func_00214450_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00214450_1 *);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_001971C0(s32);
u8 func_001B66C0(void *);
s32 func_001B66E0(void *, s16);
void func_001B6770(unk_func_00214450_0 *, void *, s16);
f32 func_001B6840(void *, s16);
s32 func_00208CC0(s32);

s32 *func_00214450(s32 arg0, s32 *arg1, unk_func_00214450_1 *arg2) {
    s16 temp;
    void *temp2;
    unk_func_00214450_0 *temp3;
    s32 temp4;
    unk_func_00214450_0 sp78;
    s32 sp88;
    f32 sp8C;

    temp4 = arg1[-2];
    temp = 0;
    fn_vGetUltraOperatorPerso(func_00208CC0(temp4), arg0, &sp88);
    temp2 = HIE_fn_hGetSuperObjectObject(sp88)->unk_14;
    switch (temp4) {
    case 0x113:
        if (temp2 != 0) {
            temp = func_001B66C0(temp2);
        }
        arg2->unk_00.unk_00_s32 = temp;
        arg2->unk_0C = 6;
        break;
    case 0x114:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp = arg2->unk_00.unk_00;
        if (temp2 != 0) {
            arg2->unk_00.unk_00_s32 = (s32)(func_001B66E0(temp2, temp) == 0 ? NULL :
                (func_001971C0(func_001B66E0(temp2, temp)) != 2 ? NULL :
                 HIE_fn_hGetSuperObjectObject(func_001B66E0(temp2, temp))));
            arg2->unk_0C = 0xB;
        } else {
            arg2->unk_00.unk_00_s32 = 0;
            arg2->unk_0C = 0xB;
        }
        break;
    case 0x115:
        temp3 = &arg2->unk_00.unk_00_vec;
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp = arg2->unk_00.unk_00;
        if (temp2 != 0) {
            func_001B6770(&sp78, temp2, temp);
            *temp3 = sp78;
        } else {
            temp3->unk_08 = temp3->unk_04 = temp3->unk_00 = 0.0f;
        }
        arg2->unk_0C = 0x15;
        break;
    case 0x116:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp = arg2->unk_00.unk_00;
        if (temp2 != 0) {
            sp8C = func_001B6840(temp2, temp);
        } else {
            sp8C = 0.0f;
        }
        arg2->unk_00.unk_00_f32 = sp8C;
        arg2->unk_0C = 8;
        break;
    }
    return arg1;
}
