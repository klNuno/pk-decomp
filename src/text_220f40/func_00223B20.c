/* profile: o0_301 */
#include "common.h"

typedef struct {
    s8 unk_00;
    u8 pad_01[6];
    u8 unk_07;
} unk_func_00223B20_0;
typedef struct {
    s32 unk_00;
    u8 pad_04[0x18];
} unk_func_00223B20_1;
typedef struct { u8 pad_00[0xC]; s32 unk_0C; } unk_func_00223B20_2;
typedef struct { s32 unk_00; u8 pad_04[4]; } unk_func_00223B20_3;

unk_func_00223B20_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stBrainGetMind(s32);
unk_func_00223B20_0 *fn_p_stEvalTree(s32, unk_func_00223B20_0 *, unk_func_00223B20_1 *);
unk_func_00223B20_0 *fn_p_stOperatorGetPerso(s32, unk_func_00223B20_0 *, s32 *);
u8 fn_ucGetDsgVar(u8, s32, s32, unk_func_00223B20_1 *);
s32 func_001971C0(s32);
void func_00198040(s32);
u8 func_001EA0D0(u8, s32, s32, unk_func_00223B20_1 *);
void func_001EB640(s32);

unk_func_00223B20_0 *func_00223B20(s32 arg0, unk_func_00223B20_0 *arg1) {
    unk_func_00223B20_1 temp;
    s32 unk_8C;
    s32 unk_00;
    u8 unk_01;
    s32 unk_02;

    s32 unk_03 = ((unk_func_00223B20_3 *)arg1)[-1].unk_00;

    switch (unk_03) {
    case 0x97:
        if (arg1->unk_07 == 2) {
            arg1++;
            arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &unk_8C);
        } else {
            unk_8C = arg0;
        }
        unk_02 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(unk_8C)->unk_0C);
        unk_01 = (u8)arg1->unk_00;
        arg1++;
        if (fn_ucGetDsgVar(unk_01, 0, unk_02, &temp) == 1) {
            unk_00 = temp.unk_00;
            func_00198040(unk_00);
            if (unk_00 == (func_001971C0(arg0) != 2 ? 0 : (s32)HIE_fn_hGetSuperObjectObject(arg0))) {
                func_001EB640(3);
            }
            temp.unk_00 = 0;
            unk_01 = func_001EA0D0(unk_01, 0, unk_02, &temp);
        }
        return arg1;
    case 0x96:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        unk_00 = temp.unk_00;
        func_00198040(unk_00);
        if (unk_00 == (func_001971C0(arg0) != 2 ? 0 : (s32)HIE_fn_hGetSuperObjectObject(arg0))) {
            func_001EB640(3);
        }
        return arg1;
    default:
        return arg1;
    }
}
