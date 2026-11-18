/* profile: o0_301_p */
#include "common.h"

typedef union unk_func_00227A10_1 {
    s8 s8;
    s16 s16;
    s32 s32;
    f32 f32;
    s32 *ptr;
} unk_func_00227A10_1;

typedef struct unk_func_00227A10_0 {
    unk_func_00227A10_1 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00227A10_0;

typedef struct unk_func_00227A10_2 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_00227A10_2;

s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
unk_func_00227A10_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00227A10_0 *);
u8 func_001B66A0(s32);
void func_001B68E0(s32, u8);
void func_001B6910(s32, u8);
s32 fn_h_StandardGameGetSuperObject(s32);
void func_001B69D0(s32, s16, s32);
void func_001B6940(s32, s16, unk_func_00227A10_0 *);
void func_001B6A40(s32, s16, f32);

s32 *func_00227A10(s32 arg0, s32 *arg1) {
    unk_func_00227A10_0 param;
    s32 perso;
    f32 f;
    s32 obj;
    s16 idx;
    s32 id;
    u8 a;

    perso = arg0;
    id = arg1[-2];
    idx = -1;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(id), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_14;
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    a = param.unk_00.s8;
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    switch (id) {
    case 0x103:
        break;
    case 0x104:
    case 0x105:
    case 0x106:
        idx = param.unk_00.s16;
        arg1 = fn_p_stEvalTree(arg0, arg1, &param);
        break;
    default:
        return arg1;
    }
    if (obj != 0 && a >= func_001B66A0(obj)) {
        func_001B68E0(obj, a);
        switch (id) {
        case 0x103:
            func_001B6910(obj, param.unk_00.s8);
            break;
        case 0x104:
            func_001B69D0(obj, idx, fn_h_StandardGameGetSuperObject(param.unk_00.ptr[1]));
            break;
        case 0x105:
            func_001B6940(obj, idx, &param);
            break;
        case 0x106:
            if (param.unk_0C == 8) {
                f = param.unk_00.f32;
            } else {
                f = param.unk_00.s32;
            }
            func_001B6A40(obj, idx, f);
            break;
        }
    }
    return arg1;
}
