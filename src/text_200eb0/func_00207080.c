/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00207080_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
} unk_func_00207080_0;

typedef struct unk_func_00207080_1 {
    unk_func_00207080_0 *unk_00;
    u8 pad_04[0xC];
} unk_func_00207080_1;

typedef struct unk_func_00207080_2 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00207080_2;

typedef struct unk_func_00207080_3 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_00207080_3;

s32 fn_p_stEvalTree(s32, s32, unk_func_00207080_1 *);
unk_func_00207080_3 *fn_h_StandardGameGetSuperObject(s32);
f32 func_00151360(f32);
unk_func_00207080_2 *func_00155EE0(s32);
void func_001F0DC0(unk_func_00207080_0 *, unk_func_00207080_2 *);

s32 func_00207080(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_00207080_3 *obj;
    unk_func_00207080_0 *p;
    unk_func_00207080_1 res;
    unk_func_00207080_2 v;

    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    obj = fn_h_StandardGameGetSuperObject(((s32 *)res.unk_00)[1]);
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    p = res.unk_00;
    if (obj == NULL || p == NULL) {
        *arg2 = 0;
        return arg1;
    }
    if (p->unk_10 != 0) {
        func_001F0DC0(p, &v);
        v.unk_00 -= func_00155EE0(obj->unk_24)->unk_00;
        v.unk_04 -= func_00155EE0(obj->unk_24)->unk_04;
        v.unk_08 -= func_00155EE0(obj->unk_24)->unk_08;
    } else {
        v.unk_00 = p->unk_00 - func_00155EE0(obj->unk_24)->unk_00;
        v.unk_04 = p->unk_04 - func_00155EE0(obj->unk_24)->unk_04;
        v.unk_08 = p->unk_08 - func_00155EE0(obj->unk_24)->unk_08;
    }
    if (!(func_00151360(v.unk_00) + func_00151360(v.unk_04) + func_00151360(v.unk_08) - func_00151360(p->unk_0C) <= 0.0f)) {
        *arg2 = 0;
    } else {
        *arg2 = 1;
    }
    return arg1;
}
