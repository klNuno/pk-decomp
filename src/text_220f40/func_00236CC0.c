/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00236CC0_0 {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_func_00236CC0_0;

s32 *fn_p_stEvalTree();
s32 fn_h_StandardGameGetSuperObject();
typedef struct unk_func_00236CC0_1 {
    union {
        s32 *p;
        u8 b;
    } unk_00;
    u8 pad_04[0xC];
} unk_func_00236CC0_1;

unk_func_00236CC0_0 *HIE_fn_hGetSuperObjectObject();
void func_001B9830(s32, u8);

s32 *func_00236CC0(s32 arg0, s32 *arg1) {
    unk_func_00236CC0_1 sp50;
    s32 temp;
    s32 temp_s2;
    u8 flag;
    s32 temp_s0;

    temp = arg1[-2];
    if (temp == 0x1B1) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
        temp_s2 = fn_h_StandardGameGetSuperObject(sp50.unk_00.p[1]);
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
        flag = sp50.unk_00.b;
        temp_s0 = HIE_fn_hGetSuperObjectObject(temp_s2)->unk_1C;
        if (temp_s0 == 0) {
            return arg1;
        }
        func_001B9830(temp_s0, flag);
        return arg1;
    }
    return arg1;
}
