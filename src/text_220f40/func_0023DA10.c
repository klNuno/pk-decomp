/* profile: o0_301_p */
#include "common.h"

typedef struct {
    union {
        s32 unk_00;
        f32 unk_00_f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0023DA10_0;

extern void fn_RemoveTextureFromMaterial(s32);
extern s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0023DA10_0 *);
extern void func_00166890(s32);
extern void func_001668A0(s32);
extern void func_001668B0(s32, s32);
extern void func_001669E0(s32, void *, s32, f32, f32);
extern void func_00166AA0(s32, s32);
extern void func_00166AC0(s32, s32 *, f32 *);
extern void func_00166AF0(s32, s32, f32 *);
extern void func_00166B80(s32, f32 *);
extern void func_00166C00(s32, f32 *);
extern void func_00166C80(s32, f32 *);
extern s32 func_0019D550(f32);
extern s32 *func_001EB7B0(s32 *);
extern void func_001F1D60(unk_func_0023DA10_0 *, f32 *);

s32 *func_0023DA10(s32 arg0, s32 *arg1)
{
    unk_func_0023DA10_0 sp60;
    f32 sp70[7];
    s32 sp8C;
    f32 sp90;
    f32 sp94;
    s32 temp0;
    s32 temp3;
    s32 *temp4;

    temp3 = arg1[-2];
    temp0 = 0;
    temp4 = arg1;
    sp8C = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    temp0 = sp60.unk_00.unk_00;
    if (temp0 == 0) {
        return func_001EB7B0(temp4);
    }
    switch (temp3) {
    case 0x98:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        func_001F1D60(&sp60, sp70);
        func_00166C00(temp0, sp70);
        return arg1;
    case 0x99:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        func_00166AC0(temp0, &sp8C, sp70);
        sp8C = sp60.unk_0C == 8 ? func_0019D550(sp60.unk_00.unk_00_f) : sp60.unk_00.unk_00;
        func_00166AF0(temp0, sp8C, sp70);
        return arg1;
    case 0x9A:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        func_00166AC0(temp0, &sp8C, sp70);
        func_001F1D60(&sp60, sp70);
        func_00166AF0(temp0, sp8C, sp70);
        return arg1;
    case 0x9B:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        func_001F1D60(&sp60, sp70);
        func_00166B80(temp0, sp70);
        return arg1;
    case 0x9C:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        func_001F1D60(&sp60, sp70);
        func_00166C80(temp0, sp70);
        return arg1;
    case 0x9D:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        func_00166AA0(temp0, sp60.unk_00.unk_00);
        return arg1;
    case 0x9E:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        sp90 = sp60.unk_0C == 8 ? sp60.unk_00.unk_00_f : (f32)sp60.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        sp94 = sp60.unk_0C == 8 ? sp60.unk_00.unk_00_f : (f32)sp60.unk_00.unk_00;
        func_001669E0(temp0, NULL, 1, sp90, sp94);
        return arg1;
    case 0x9F:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        func_001668A0(temp0);
        return arg1;
    case 0xA0:
        func_00166890(temp0);
        return arg1;
    case 0xA1:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        func_001668B0(temp0, sp60.unk_0C == 8 ? func_0019D550(sp60.unk_00.unk_00_f) : sp60.unk_00.unk_00);
        return arg1;
    case 0x311:
        fn_RemoveTextureFromMaterial(temp0);
        return arg1;
    }
    return arg1;
}
