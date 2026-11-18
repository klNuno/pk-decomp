/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00212690_0 {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_func_00212690_0;

typedef struct unk_func_00212690_1 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00212690_1;

s32 fn_p_stEvalTree();
s32 fn_szGetStringFromTextOrStringParam();
unk_func_00212690_0 *func_001D29A0();
void func_001EDBB0();

s32 func_00212690(s32 arg0, s32 *arg1, unk_func_00212690_1 *arg2) {
    s32 temp0 = 0;
    s32 temp2;
    s32 temp1;
    unk_func_00212690_0 *temp3;
    s32 temp4[4];

    temp1 = arg1[-2];
    if (temp1 == 0xDD) {
        arg1 = (s32 *)fn_p_stEvalTree(arg0, arg1, temp4);
        temp2 = fn_szGetStringFromTextOrStringParam(temp4);
        temp3 = func_001D29A0(temp2);
        if (temp3 != NULL) {
            temp0 = temp3->unk_1C;
            temp3->unk_1C = 0;
        } else {
            temp0 = 0;
        }
        arg2->unk_00 = temp0;
        arg2->unk_0C = 6;
        return (s32)arg1;
    }
    func_001EDBB0(0x27, 0);
    return (s32)arg1;
}
