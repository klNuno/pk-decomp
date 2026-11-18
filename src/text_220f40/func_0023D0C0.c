/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0023D0C0_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_0023D0C0_0;

typedef struct unk_func_0023D0C0_1 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_0023D0C0_1;

typedef union unk_func_0023D0C0_2 {
    s32 unk_00;
    f32 unk_00_f;
    s8 unk_00_b;
    u8 pad_00[0x18];
} unk_func_0023D0C0_2;

unk_func_0023D0C0_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0023D0C0_2 *);
void func_00137B60(unk_func_0023D0C0_1 *, s32);
s32 func_001ABB90(s32);
unk_func_0023D0C0_1 *func_001B84B0(s32);
s32 func_001C65D0(s32, s32, u8, u8, s32, s32, f32);
void func_001EB640(s32);

s32 *func_0023D0C0(s32 arg0, s32 *arg1) {
    unk_func_0023D0C0_1 *p;
    s32 val;
    u8 b;
    s32 c;
    s32 obj;
    s32 cur;
    s32 id;
    f32 f;
    s32 perso;
    unk_func_0023D0C0_2 sp80;

    c = 0;
    f = 0.0f;
    id = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(id), arg0, &perso);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
    val = sp80.unk_00;
    if (id == 0x51 || id == 0x52 || id == 0x53 || id == 0x54) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        c = sp80.unk_00;
    }
    if (id == 0x55 || id == 0x56 || id == 0x57 || id == 0x58) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        f = sp80.unk_00_f;
    }
    if (id == 0x50) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        b = sp80.unk_00_b;
    } else {
        b = 0;
    }
    if (func_001C65D0(perso, val, id == 0x4E, b, 0, c, f)) {
        obj = HIE_fn_hGetSuperObjectObject(perso)->unk_08;
        if (obj) {
            p = func_001B84B0(obj);
            if (p) {
                cur = func_001ABB90(val);
                if (p->unk_04 != cur) {
                    func_00137B60(p, cur);
                }
            }
        }
    } else {
        func_001EB640(2);
    }
    return arg1;
}
