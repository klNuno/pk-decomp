/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00236A50_0;

typedef union {
    u8 unk_00;
    unk_func_00236A50_0 *p;
    u8 pad[0x10];
} unk_func_00236A50_1;

typedef struct {
    u8 pad_00[0x30];
    u32 unk_30;
} unk_func_00236A50_2;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_func_00236A50_3;

unk_func_00236A50_3 *HIE_fn_hGetSuperObjectObject(unk_func_00236A50_2 *);
unk_func_00236A50_2 *fn_h_StandardGameGetSuperObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00236A50_1 *);
void func_00131D20(s32, s32);
void func_00131E00(s32);
s32 func_001B9740(s32);
void func_001B9A70(s32, s32);
void func_001B9AC0(s32, u8);
s32 func_001BE4C0(unk_func_00236A50_2 *);

s32 *func_00236A50(s32 arg0, s32 *arg1) {
    unk_func_00236A50_1 r;
    s32 obj;
    unk_func_00236A50_2 *so;
    u8 b2;
    s32 t;
    s32 type;
    u8 b1;

    type = arg1[-2];
    if (type == 0x1B0) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &r);
        so = fn_h_StandardGameGetSuperObject(r.p->unk_04);
        arg1 = fn_p_stEvalTree(arg0, arg1, &r);
        b1 = r.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &r);
        b2 = r.unk_00;
        obj = HIE_fn_hGetSuperObjectObject(so)->unk_1C;
        if (obj == 0) {
            return arg1;
        }
        if (b1) {
            func_00131E00(func_001B9740(obj));
            if (b2) {
                so->unk_30 |= 0x20000;
            } else {
                so->unk_30 &= ~0x20000;
            }
            func_001B9A70(obj, 1);
            func_001B9AC0(obj, b2);
        } else {
            t = func_001BE4C0(so);
            if (b2) {
                so->unk_30 |= 0x20000;
            } else {
                so->unk_30 &= ~0x20000;
            }
            if (t) {
                func_00131E00(func_001B9740(obj));
                func_00131D20(t, func_001B9740(obj));
            }
            func_001B9A70(obj, 0);
            func_001B9AC0(obj, b2);
        }
        return arg1;
    }
    return arg1;
}
