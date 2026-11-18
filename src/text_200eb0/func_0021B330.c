/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0021B330_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x4];
    s32 unk_10;
} unk_func_0021B330_1;

typedef struct unk_func_0021B330_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_0021B330_0;

s32 fn_p_stEvalTree();
void func_001F0DC0();

s32 func_0021B330(s32 arg0, s32 arg1, unk_func_0021B330_0 *arg2) {
    unk_func_0021B330_1 *p;

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    p = *(unk_func_0021B330_1 **)arg2;
    if (p != NULL) {
        if (p->unk_10 != 0) {
            func_001F0DC0(p, arg2);
            arg2->unk_0C = 0x15;
        } else {
            ((unk_func_0021B330_1 *)arg2)->unk_00 = p->unk_00;
            ((unk_func_0021B330_1 *)arg2)->unk_04 = p->unk_04;
            ((unk_func_0021B330_1 *)arg2)->unk_08 = p->unk_08;
            arg2->unk_0C = 0x15;
        }
    } else {
        arg2->unk_08 = arg2->unk_04 = arg2->unk_00 = 0.0f;
        arg2->unk_0C = 0x15;
    }
    return arg1;
}
