/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F9BD0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_001F9BD0_0;

typedef struct unk_func_001F9BD0_1 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001F9BD0_1;

s32 func_00208CC0();
void fn_vGetUltraOperatorPerso();
unk_func_001F9BD0_0 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();
void func_001B6000(s32, u8);
u8 func_001B6030();

s32 *func_001F9BD0(s32 arg0, s32 *arg1, unk_func_001F9BD0_1 *arg2) {
    s32 sp4C;
    s32 a;
    s32 temp;
    u8 flag;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp), arg0, &sp4C);
    a = HIE_fn_hGetSuperObjectObject(sp4C)->unk_10;
    switch (temp) {
    case 0x185:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        flag = *(s8 *)arg2;
        func_001B6000(a, flag);
        arg2->unk_00 = flag;
        arg2->unk_0C = 6;
        *(u8 *)arg2 = flag;
        return arg1;
    case 0x186:
        flag = func_001B6030(a);
        arg2->unk_00 = flag;
        arg2->unk_0C = 6;
        return arg1;
    }
    return arg1;
}
