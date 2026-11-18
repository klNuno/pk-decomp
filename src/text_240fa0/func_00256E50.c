/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00256E50_0 {
    u8 pad_00[0x28];
    s32 unk_28;
} unk_func_00256E50_0;

typedef struct unk_func_00256E50_1 {
    union {
        s32 unk_00;
        f32 unk_00_f;
    } u;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00256E50_1;

typedef struct unk_func_00256E50_2 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00256E50_2;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
unk_func_00256E50_0 *HIE_fn_hGetSuperObjectObject();
s32 func_00127318(f32);
void func_001BAF00();
void func_001BAF50();
void func_002D2560();
void func_001EDBB0();

s32 *func_00256E50(s32 arg0, s32 *arg1) {
    s32 obj;
    s32 temp;
    unk_func_00256E50_1 sp30;
    unk_func_00256E50_2 sp40;
    f32 x;
    f32 y;
    s32 sp54;

    temp = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    x = (sp30.unk_0C == 8) ? sp30.u.unk_00_f : (f32)sp30.u.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    y = (sp30.unk_0C == 8) ? sp30.u.unk_00_f : (f32)sp30.u.unk_00;
    sp40.unk_00 = func_00127318(65536.0f * x);
    sp40.unk_04 = func_00127318(65536.0f * y);
    switch (temp) {
    case 0x30A:
        fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp54);
        obj = HIE_fn_hGetSuperObjectObject(sp54)->unk_28;
        if (obj != 0) {
            func_001BAF00(obj, sp40.unk_00);
            func_001BAF50(obj, sp40.unk_04);
        }
        break;
    case 0x30B:
        func_002D2560(&sp40);
        break;
    default:
        func_001EDBB0(0x27, 0);
        break;
    }
    return arg1;
}
