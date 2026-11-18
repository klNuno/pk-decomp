/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_func_001F91D0_0;

typedef struct {
    unk_func_001F91D0_0 *unk_00;
    unk_func_001F91D0_0 *unk_04;
    unk_func_001F91D0_0 *unk_08;
    unk_func_001F91D0_0 *unk_0C;
    u8 pad_10[0x64];
    u8 unk_74;
    u8 unk_75;
} unk_func_001F91D0_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001F91D0_1 *unk_10;
} unk_func_001F91D0_2;

s32 func_00208CC0();
void fn_vGetUltraOperatorPerso();
unk_func_001F91D0_2 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();

s32 *func_001F91D0(s32 arg0, s32 *arg1, s32 *arg2) {
    unk_func_001F91D0_1 *a;
    s32 c;
    s32 b;
    s32 temp;
    s32 sp5C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp), arg0, &sp5C);
    a = HIE_fn_hGetSuperObjectObject(sp5C)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    b = arg2[0];
    if (b == 1) {
        if (a->unk_74 & 1) {
            c = a->unk_0C->unk_74;
        } else {
            c = a->unk_04->unk_74;
        }
    } else if (b == -1) {
        c = a->unk_00->unk_74;
    } else if (a->unk_75 & 2) {
        c = a->unk_08->unk_74;
    } else {
        c = a->unk_04->unk_74;
    }
    arg2[0] = c;
    arg2[3] = 6;
    return arg1;
}
