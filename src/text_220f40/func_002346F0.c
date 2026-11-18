/* profile: o0_301 */
#include "common.h"

typedef struct {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002346F0_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002346F0_0 *);
u8 func_001273A8(f32);
f32 func_0015A730(s32);
void func_0015C650(u8, s8, s8);
void func_0015C690(u8, s8, s8);
void func_0015C6D0(u8, s8, s8);
void func_0015C750(u8, s8 *, s8 *);
void func_0015C790(u8, s8 *, s8 *);
void func_0015C880(u8, s32 *, s32 *);
s32 func_0019D550(f32);

s32 *func_002346F0(s32 arg0, s32 *arg1) {
    unk_func_002346F0_0 res;
    s32 sp90;
    s32 sp94;
    s8 sp9C;
    s8 sp9D;
    s8 sp9E;
    s8 sp9F;
    u8 index;
    s8 a;
    s8 b;
    s32 temp1;
    s32 temp2;

    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    index = func_001273A8(res.unk_0C == 8 ? res.unk_00.f : (f32)res.unk_00.i);
    if (index > 15) {
        index = 0;
    }
    func_0015C880(index, &sp90, &sp94);
    func_0015C790(index, &sp9C, &sp9D);
    func_0015C750(index, &sp9E, &sp9F);
    temp1 = sp90 ? func_0019D550(func_0015A730(sp90)) : 0;
    temp2 = sp94 ? func_0019D550(func_0015A730(sp94)) : 0;
    a = temp1;
    b = temp2;
    if (!(a < sp9D)) {
        sp9D = a + 1;
    }
    if (a <= sp9C) {
        sp9C = a - 1;
    }
    if (!(b < sp9F)) {
        sp9F = b + 1;
    }
    if (b <= sp9E) {
        sp9E = b - 1;
    }
    func_0015C650(index, a, b);
    func_0015C6D0(index, sp9C, sp9D);
    func_0015C690(index, sp9E, sp9F);
    return arg1;
}
