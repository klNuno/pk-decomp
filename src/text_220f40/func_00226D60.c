/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00226D60_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00226D60_0;

typedef union unk_func_00226D60_1 {
    u32 unk_00;
    s16 unk_00_s;
    u8 pad_00[0x1C];
} unk_func_00226D60_1;

unk_func_00226D60_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00226D60_1 *);
u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
u32 func_0019ABC0(s32);
void func_001BEEE0(s32, u32);
void func_001BFBA0(s32, u32);
u32 func_001BFBD0(s32);

s32 *func_00226D60(s32 arg0, s32 *arg1)
{
    u32 temp;
    s32 temp2;
    s32 temp3;
    u32 temp4;
    s16 temp5;
    u32 temp6;
    u8 temp7;
    u32 temp8;
    s32 temp9;
    unk_func_00226D60_1 temp10;

    temp3 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp3), arg0, &temp9);
    temp2 = HIE_fn_hGetSuperObjectObject(temp9)->unk_04;
    temp = func_0019ABC0(temp2);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp10);
    switch (temp3) {
        case 0xC3:
            temp5 = temp10.unk_00_s - 1;
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp10);
            temp7 = temp10.unk_00 ? 1 : 0;
            if (temp5 < 32) {
                temp4 = 1U << temp5;
                temp = func_0019ABC0(temp2);
                if (temp7) {
                    temp |= temp4;
                } else {
                    temp &= ~temp4;
                }
                func_001BFBA0(temp2, temp);
            } else {
                temp4 = 1U << (temp5 - 32);
                temp = func_001BFBD0(temp2);
                if (temp7) {
                    temp |= temp4;
                } else {
                    temp &= ~temp4;
                }
                func_001BEEE0(temp2, temp);
            }
            break;
        case 0xC4:
        case 0xC5:
            temp8 = temp10.unk_00;
            (void)(temp3 == 0xC4);
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp10);
            temp6 = temp10.unk_00;
            if (temp3 == 0xC4) {
                temp = func_0019ABC0(temp2);
            } else {
                temp = func_001BFBD0(temp2);
            }
            temp &= ~temp8;
            temp6 &= temp8;
            temp |= temp6;
            if (temp3 == 0xC4) {
                func_001BFBA0(temp2, temp);
            } else {
                func_001BEEE0(temp2, temp);
            }
            break;
    }
    return arg1;
}
