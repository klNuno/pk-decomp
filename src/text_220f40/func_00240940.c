/* profile: o0_301 */
#include "common.h"

typedef union unk_func_00240940_0 {
    s32 unk_00;
    s8 unk_00_s8;
    u8 pad_00[0x10];
} unk_func_00240940_0;

s32 *fn_p_stEvalTree();
void func_00273BC0();
void func_00273B90();
void func_00273B50();
void func_00273B20();
void func_00273AD0(s32, u8);

s32 *func_00240940(s32 arg0, s32 *arg1) {
    s32 obj;
    s32 temp;
    u64 a;
    u64 b;
    u64 c;
    u64 d;
    u8 e;
    unk_func_00240940_0 sp80;

    temp = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
    obj = sp80.unk_00;
    switch (temp) {
    case 0x28F:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        a = (u32)sp80.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        b = (u32)sp80.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        c = (u32)sp80.unk_00;
        func_00273BC0(obj, a, b, c);
        return arg1;
    case 0x290:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        d = (u32)sp80.unk_00;
        func_00273B90(obj, d);
        return arg1;
    case 0x291:
        func_00273B50(obj);
        return arg1;
    case 0x292:
        func_00273B20(obj);
        return arg1;
    case 0x293:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        e = sp80.unk_00_s8;
        func_00273AD0(obj, e);
        return arg1;
    }
    return arg1;
}
