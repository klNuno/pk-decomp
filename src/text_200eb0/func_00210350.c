/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_00210350_0;

typedef struct {
    union {
        unk_func_00210350_0 unk_00;
        void *unk_00_ptr;
    } unk_00;
    s32 unk_0C;
} unk_func_00210350_1;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00210350_1 *);
f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_001EDBB0(s32, void *);
s32 func_001F09A0(void *);
void *func_001F09C0(void *, s32, s32 *);
f32 func_001F0CA0(void);
f32 func_001F0CB0(void);
f32 func_001F0D40(void *);
void func_001F0DC0(void *, unk_func_00210350_0 *);

s32 *func_00210350(s32 arg0, s32 *arg1, unk_func_00210350_1 *arg2) {
    unk_func_00210350_0 temp0;
    unk_func_00210350_0 temp1;
    unk_func_00210350_0 temp2;
    s32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    s32 temp8;
    void *temp9;
    void *temp10;
    void *temp11;
    s32 i;
    s32 temp12;

    temp8 = arg1[-2];
    temp9 = NULL;
    temp10 = NULL;
    temp4 = -1.0f;
    temp7 = func_001F0CB0();
    temp6 = func_001F0CA0();
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp2 = arg2->unk_00.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp11 = arg2->unk_00.unk_00_ptr;

    switch (temp8) {
    case 0x9B:
        if (!temp11) {
            arg2->unk_00.unk_00_ptr = NULL;
            arg2->unk_0C = 0xA;
            return arg1;
        }
        temp12 = func_001F09A0(temp11);
        for (i = 0; i < temp12; i++) {
            temp10 = func_001F09C0(temp11, i, &temp3);
            func_001F0DC0(temp10, &temp0);
            temp1.unk_00 = temp0.unk_00 - temp2.unk_00;
            temp1.unk_04 = temp0.unk_04 - temp2.unk_04;
            temp1.unk_08 = temp0.unk_08 - temp2.unk_08;
            temp5 = func_001E60E0(func_00151360(temp1.unk_08) +
                                  (func_00151360(temp1.unk_00) + func_00151360(temp1.unk_04)));
            if (temp5 <= func_001F0D40(temp10) && (-1.0f == temp4 || temp5 < temp4) &&
                (0.0f == temp7 || (temp5 <= temp7 && !(temp5 < temp6)))) {
                temp4 = func_001E60E0(func_00151360(temp1.unk_08) +
                                      (func_00151360(temp1.unk_00) + func_00151360(temp1.unk_04)));
                temp9 = temp10;
            }
        }
        arg2->unk_00.unk_00_ptr = temp9;
        arg2->unk_0C = 0xA;
        return arg1;
    default:
        func_001EDBB0(0x27, NULL);
        return arg1;
    }
}
