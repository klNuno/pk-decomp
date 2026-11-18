/* profile: o0_301 */
#include "common.h"

typedef struct {
    union {
        s32 unk_00;
        f32 unk_00_f32;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00234980_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00234980_0 *);
u8 func_001273A8(f32);
f32 func_0015A730(s32);
void func_0015C690(u8, s8, s8);
void func_0015C6D0(u8, s8, s8);
void func_0015C750(u8, s8 *, s8 *);
void func_0015C790(u8, s8 *, s8 *);
void func_0015C880(u8, s32 *, s32 *);
s32 func_0019D550(f32);

s32 func_00234980(s32 arg0, s32 arg1)
{
    unk_func_00234980_0 sp60;
    s32 sp70;
    s32 sp74;
    s8 sp7C;
    s8 sp7D;
    s8 sp7E;
    s8 sp7F;
    u8 temp;
    s32 temp1;
    s32 temp2;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    temp = func_001273A8(sp60.unk_0C == 8 ? sp60.unk_00.unk_00_f32 : (f32)sp60.unk_00.unk_00);
    if (temp > 15) {
        temp = 0;
    }
    func_0015C880(temp, &sp70, &sp74);
    func_0015C790(temp, &sp7C, &sp7D);
    func_0015C750(temp, &sp7E, &sp7F);
    temp1 = sp70 ? func_0019D550(func_0015A730(sp70)) : 0;
    temp2 = sp74 ? func_0019D550(func_0015A730(sp74)) : 0;
    if ((s16)temp2 > sp7F) {
        sp7F = temp2;
    } else if ((s16)temp2 < sp7E) {
        sp7E = temp2;
    }
    if ((s16)temp1 > sp7D) {
        sp7D = temp1;
    } else if ((s16)temp1 < sp7C) {
        sp7C = temp1;
    }
    func_0015C6D0(temp, sp7C, sp7D);
    func_0015C690(temp, sp7E, sp7F);
    return arg1;
}
