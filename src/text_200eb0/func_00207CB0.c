/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00207CB0_0 {
    u8 pad_00[0x14];
    struct unk_func_00207CB0_0 *unk_14;
} unk_func_00207CB0_0;

typedef struct {
    u8 pad_00[8];
    unk_func_00207CB0_0 *unk_08;
} unk_func_00207CB0_1;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00207CB0_2;

typedef struct {
    s32 *unk_00;
    u8 pad_04[0x18];
} unk_func_00207CB0_3;

s32 func_00208B20(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 fn_p_stEvalTree(s32, s32, unk_func_00207CB0_3 *);
unk_func_00207CB0_1 *fn_h_StandardGameGetSuperObject(s32);
s32 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_00207CB0_2 *func_001B84B0(s32);
typedef struct {
    u8 pad_00[0xA8];
    unk_func_00207CB0_1 *unk_A8;
} unk_func_00207CB0_4;

unk_func_00207CB0_4 *func_001387B0(unk_func_00207CB0_2 *);

s32 func_00207CB0(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_s7;
    unk_func_00207CB0_1 *temp_s3;
    s32 temp_s5;
    unk_func_00207CB0_2 *temp_s4;
    s32 var_s6;
    s32 i;
    unk_func_00207CB0_0 *next;
    unk_func_00207CB0_0 *p;
    unk_func_00207CB0_0 *first;
    unk_func_00207CB0_3 spA0;
    s32 spBC;

    temp_s7 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(temp_s7), arg0, &spBC);
    *arg2 = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
    temp_s3 = fn_h_StandardGameGetSuperObject(spA0.unk_00[1]);
    temp_s5 = HIE_fn_hGetSuperObjectObject(spBC)[2];
    if (temp_s5 != 0) {
        temp_s4 = func_001B84B0(temp_s5);
        if (temp_s4->unk_0C & 4) {
            var_s6 = 1;
        } else {
            var_s6 = 0;
        }
        if (var_s6 != 0) {
            if (func_001387B0(temp_s4)->unk_A8 == temp_s3) {
                *arg2 = 1;
            }
            return arg1;
        }
    }
    for (i = 0, p = temp_s3->unk_08, first = p; p != NULL; i++, next = p = p->unk_14, (void)next) {
        if ((s32)p == spBC) {
            *arg2 = 1;
            return arg1;
        }
    }
    return arg1;
}
