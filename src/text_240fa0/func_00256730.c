/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    u8 *unk_24;
    s32 unk_28;
} unk_func_00256730_0;

typedef struct {
    u8 pad_00[4];
    unk_func_00256730_0 *unk_04;
} unk_func_00256730_1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00256730_2;

typedef union {
    s32 unk_00_words[6];
    void *unk_00;
} unk_func_00256730_3;

extern s32 D_003370C0[];
extern s32 D_0035F544;
extern s32 D_0035F5A8;
extern s32 D_003601FC;

s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, unk_func_00256730_1 **);
s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
s32 fn_h_StandardGameGetSuperObject(s32);
char *FON_fn_szGetTextPointerForHandle(s32);
void func_002CFCB0(s32);
void func_002CF8F0(s32, s32, s32, s32, s32, s32);
void func_002D03D0(char *);
void func_002D0370(char *);
void func_002CFD40(s32, s32);
void func_001BC710(unk_func_00256730_0 *, u8 *, s32);
void func_001BAFA0(s32, s32);
void func_001EDBB0(s32, s32);

s32 *func_00256730(s32 arg0, s32 *arg1)
{
    s32 temp0;
    unk_func_00256730_0 *temp1;
    unk_func_00256730_0 *temp2;
    s64 temp3;
    char *temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    u8 temp8;
    unk_func_00256730_3 spA0;
    unk_func_00256730_1 *spB8;
    s32 spBC;

    temp0 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp0), arg0, &spB8);

    switch (temp0) {
    case 0x2EE:
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0.unk_00_words);
        temp5 = spA0.unk_00_words[0];
        func_002CFCB0(temp5);
        break;
    case 0x2DB:
    case 0x2DC:
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0.unk_00_words);
        temp3 = spA0.unk_00_words[0];
        if (temp0 == 0x2DB) {
            D_003601FC = 1;
            D_003370C0[(s32)temp3] = D_0035F5A8;
        } else {
            D_0035F5A8 = D_003370C0[(s32)temp3];
            if (D_003601FC != 0 && D_0035F5A8 != 0) {
                func_002CF8F0(-1, -1, D_0035F544, D_0035F5A8, 0, 0);
                D_003601FC = 0;
            }
        }
        break;
    case 0x2EF:
    case 0x2F0:
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0.unk_00_words);
        temp4 = FON_fn_szGetTextPointerForHandle(spA0.unk_00_words[0]);
        if (temp0 == 0x2EF) {
            func_002D03D0(temp4);
        }
        if (temp0 == 0x2F0) {
            func_002D0370(temp4);
        }
        break;
    case 0x2ED:
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0.unk_00_words);
        temp6 = spA0.unk_00_words[0];
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0.unk_00_words);
        temp7 = spA0.unk_00_words[0];
        func_002CFD40(temp6, temp7);
        break;
    case 0x2DA:
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0.unk_00_words);
        temp8 = (u16)(s32)spA0.unk_00;
        temp2 = spB8->unk_04;
        func_001BC710(temp2, temp2->unk_24, (s32)temp8);
        break;
    case 0x2D9:
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0.unk_00_words);
        spBC = fn_h_StandardGameGetSuperObject(((unk_func_00256730_2 *)spA0.unk_00)->unk_04);
        temp1 = spB8->unk_04;
        if (temp1->unk_28 != 0) {
            func_001BAFA0(temp1->unk_28, spBC);
        }
        break;
    default:
        func_001EDBB0(0x28, 0);
        break;
    }
    return arg1;
}
