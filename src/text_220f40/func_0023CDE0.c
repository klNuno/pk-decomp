/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0023CDE0_0 {
    s32 unk_00;
    u8 pad_04[4];
} unk_func_0023CDE0_0;

typedef struct unk_func_0023CDE0_1 {
    union {
        s32 unk_00;
        f32 unk_00_f32;
        s32 *unk_00_p;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 pad_10[8];
} unk_func_0023CDE0_1;

typedef struct unk_func_0023CDE0_2 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0023CDE0_2;

typedef struct unk_func_0023CDE0_3 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_0023CDE0_3;

unk_func_0023CDE0_3 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_h_StandardGameGetSuperObject(s32);
unk_func_0023CDE0_0 *fn_p_stEvalTree(s32, unk_func_0023CDE0_0 *, unk_func_0023CDE0_1 *);
u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
void func_00139290(s32, unk_func_0023CDE0_2 *);
void func_001559E0(unk_func_0023CDE0_2 *, s32, unk_func_0023CDE0_2 *);
void func_00155EC0(s32, unk_func_0023CDE0_2 *);
s32 func_001979C0(s32);
s32 func_001B84B0(s32);

unk_func_0023CDE0_0 *func_0023CDE0(s32 arg0, unk_func_0023CDE0_0 *arg1) {
    unk_func_0023CDE0_1 temp;
    unk_func_0023CDE0_2 vec;
    unk_func_0023CDE0_2 pos;
    s32 perso;
    f32 x;
    f32 y;
    f32 z;
    s32 obj;
    s32 sub;
    s32 so;
    s32 op = arg1[-1].unk_00;

    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &perso);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
    so = fn_h_StandardGameGetSuperObject(temp.unk_00.unk_00_p[1]);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_08;
    if (obj != 0) {
    sub = func_001B84B0(obj);
    if (sub != 0) {
        func_00155EC0(func_001979C0(perso), &pos);
        switch (op) {
        case 0x94:
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
            x = temp.unk_0C == 8 ? temp.unk_00.unk_00_f32 : (f32)temp.unk_00.unk_00;
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
            y = temp.unk_0C == 8 ? temp.unk_00.unk_00_f32 : (f32)temp.unk_00.unk_00;
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
            z = temp.unk_0C == 8 ? temp.unk_00.unk_00_f32 : (f32)temp.unk_00.unk_00;
            vec.unk_00 = x;
            vec.unk_04 = y;
            vec.unk_08 = z;
            func_001559E0(&vec, func_001979C0(so), &vec);
            break;
        case 0x95:
            func_00155EC0(func_001979C0(so), &vec);
            break;
        default:
            return arg1;
        }
        vec.unk_00 -= pos.unk_00;
        vec.unk_04 -= pos.unk_04;
        vec.unk_08 -= pos.unk_08;
        func_00139290(sub, &vec);
    }
    }
    return arg1;
}
