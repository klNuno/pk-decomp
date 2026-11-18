/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00208340_0;

typedef struct {
    s32 *unk_00;
    u8 pad_04[0x18];
} unk_func_00208340_1;

s32 func_00208B20();
void fn_vGetUltraOperatorPerso();
unk_func_00208340_0 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();
s32 *func_00199130();
s32 **fn_p_stBrainGetMind();
void func_001EDBB0();

s32 *func_00208340(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp;
    s32 a;
    s32 b;
    unk_func_00208340_1 sp40;
    s32 sp5C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(temp), arg0, &sp5C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
    switch (temp) {
    case 0x83:
        *arg2 = func_00199130(HIE_fn_hGetSuperObjectObject(sp5C)->unk_00) == sp40.unk_00;
        return arg1;
    case 0x84:
        a = HIE_fn_hGetSuperObjectObject(sp5C)->unk_0C;
        b = 0;
        if (a != 0 && *fn_p_stBrainGetMind(a) == sp40.unk_00) {
            b = 1;
        }
        *arg2 = b;
        return arg1;
    default:
        func_001EDBB0(0x2B, 0);
        return arg1;
    }
}
