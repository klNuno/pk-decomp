/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FB330_0 {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_func_001FB330_0;

typedef struct unk_func_001FB330_1 {
    u8 pad_00[0x4];
    unk_func_001FB330_0 *unk_04;
    unk_func_001FB330_0 *unk_08;
    unk_func_001FB330_0 *unk_0C;
} unk_func_001FB330_1;

typedef struct unk_func_001FB330_2 {
    u8 pad_00[0x10];
    unk_func_001FB330_1 *unk_10;
} unk_func_001FB330_2;

unk_func_001FB330_2 *HIE_fn_hGetSuperObjectObject();
s32 fn_h_StandardGameGetSuperObject();
s32 *fn_p_stEvalTree();
s32 func_001AEC70();
void func_001AECB0();
void func_001BDA30();
void func_001FA2F0();
extern s32 D_005ABDBC[];

s32 *func_001FB330(s32 arg0, s32 *arg1) {
    s32 a;
    unk_func_001FB330_1 *b;
    unk_func_001FB330_1 *c;
    s32 d;
    s32 e;
    s32 f;
    s32 sp70[4];

    b = 0;
    c = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, sp70);
    a = sp70[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp70);
    f = sp70[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp70);
    d = fn_h_StandardGameGetSuperObject(((s32 *)sp70[0])[1]);
    e = func_001AEC70(a);
    if (d == e) {
        return arg1;
    }
    if (a >= 3 || a == -1) {
        return arg1;
    }
    if (d != 0) {
        b = HIE_fn_hGetSuperObjectObject(d)->unk_10;
    }
    if (e != 0) {
        c = HIE_fn_hGetSuperObjectObject(e)->unk_10;
    }
    if (d != 0) {
        func_001FA2F0(b, 0, 1);
        b->unk_0C->unk_74 = a;
        func_001AECB0(a, d);
        b->unk_04->unk_74 = a;
        b->unk_08->unk_74 = a;
        func_001BDA30(d);
    }
    if (e != 0 && D_005ABDBC[0] != e) {
        if (f == 1) {
            func_001FA2F0(c, 0, 0);
        }
        c->unk_04->unk_74 = -1;
        c->unk_08->unk_74 = -1;
        c->unk_0C->unk_74 = -1;
    }
    return arg1;
}
