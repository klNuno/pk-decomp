/* profile: o0_301 */
#include "common.h"

typedef union unk_func_00242640_1 {
    s32 s;
    f32 f;
} unk_func_00242640_1;

typedef struct unk_func_00242640_0 {
    unk_func_00242640_1 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00242640_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00242640_0 *);
s32 func_0019D550(f32);
void func_0019BFB0(char *);
extern char D_0034E7A0[];
extern char D_0034E7A8[];

s32 func_00242640(s32 arg0, s32 arg1) {
    unk_func_00242640_0 sp40;
    s32 temp_s0;
    s32 temp_s1;
    s8 temp_s2;

    temp_s1 = ((s32 *)arg1)[-2];
    switch (temp_s1) {
    case 0x2B7:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        if (sp40.unk_0C == 8) {
            temp_s0 = func_0019D550(sp40.unk_00.f);
        } else {
            temp_s0 = sp40.unk_00.s;
        }
        temp_s2 = temp_s0;
        switch (temp_s2) {
        case 1:
            func_0019BFB0(D_0034E7A0);
            break;
        case 2:
            func_0019BFB0(D_0034E7A8);
            break;
        default:
            func_0019BFB0(NULL);
            break;
        }
        return arg1;
    default:
        return arg1;
    }
}
