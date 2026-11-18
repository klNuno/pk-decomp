/* profile: o0_301_p */
#include "common.h"

typedef union {
    s32 i;
    f32 f;
} unk_func_002412E0_1;

typedef struct {
    unk_func_002412E0_1 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002412E0_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_002412E0_0 *);
s32 fn_szGetStringFromTextOrStringParam(unk_func_002412E0_0 *);
s32 func_0019D550(f32);
void func_00277210(void);
void func_00277270(void);
void func_00277280(s32, u8, u8);
void func_00277330(s32, u8);

s32 func_002412E0(s32 arg0, s32 arg1) {
    unk_func_002412E0_0 node;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 str;
    s8 a;
    s8 b;
    u8 c;
    s32 op;

    op = ((s32 *)arg1)[-2];
    switch (op) {
    case 0x2AC:
        arg1 = fn_p_stEvalTree(arg0, arg1, &node);
        str = fn_szGetStringFromTextOrStringParam(&node);
        arg1 = fn_p_stEvalTree(arg0, arg1, &node);
        if (node.unk_0C == 8) {
            v0 = func_0019D550(node.unk_00.f);
        } else {
            v0 = node.unk_00.i;
        }
        a = v0;
        arg1 = fn_p_stEvalTree(arg0, arg1, &node);
        if (node.unk_0C == 8) {
            v1 = func_0019D550(node.unk_00.f);
        } else {
            v1 = node.unk_00.i;
        }
        b = v1;
        func_00277280(str, a, b);
        func_00277270();
        return arg1;
    case 0x2AF:
        arg1 = fn_p_stEvalTree(arg0, arg1, &node);
        if (node.unk_0C == 8) {
            v2 = func_0019D550(node.unk_00.f);
        } else {
            v2 = node.unk_00.i;
        }
        c = (u8)(u32)v2;
        func_00277330(0x20, c);
        return arg1;
    case 0x2AD:
        func_00277210();
        return arg1;
    case 0x2AE:
        func_00277270();
        return arg1;
    default:
        return arg1;
    }
}
