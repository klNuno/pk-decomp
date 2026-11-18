/* profile: o0_301 */
#include "common.h"

typedef union unk_func_00212D60_1 {
    s32 unk_00;
    f32 unk_04;
} unk_func_00212D60_1;

typedef struct unk_func_00212D60_0 {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_func_00212D60_0;

unk_func_00212D60_0 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();
void fn_vGetUltraOperatorPerso();
s32 func_001971C0(s32);
s32 func_0019D550(f32);
s32 func_001BE470(s32);
s32 func_00208CC0(s32);
s32 func_00212A10(s32, s32, s32, s32);

s32 *func_00212D60(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp;
    s32 temp0;
    s32 temp1;
    void *temp2;
    void *temp3;
    s32 temp5;
    s32 temp4;
    unk_func_00212D60_1 sp80[7];
    s32 sp9C;

    temp1 = 0;
    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp), arg0, &sp9C);
    arg1 = fn_p_stEvalTree(arg0, arg1, sp80);
    if (sp80[3].unk_00 == 8) {
        temp0 = func_0019D550(sp80[0].unk_04);
    } else {
        temp0 = sp80[0].unk_00;
    }
    temp4 = temp0;
    temp5 = func_001BE470(HIE_fn_hGetSuperObjectObject(sp9C)->unk_20);
    temp1 = func_00212A10(sp9C, temp5, temp4, temp);
    if (temp1 == 0) {
        temp2 = 0;
    } else {
        if (func_001971C0(temp1) != 2) {
            temp3 = 0;
        } else {
            temp3 = HIE_fn_hGetSuperObjectObject(temp1);
        }
        temp2 = temp3;
    }
    arg2[0] = (s32)temp2;
    arg2[3] = 0xB;
    return arg1;
}
