#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_0016D0E0_0;

void func_0017D910();
f32 func_00167A50();
void func_00167A70(f32);
void func_00190CB0(f32, f32, s32, unk_func_0016D0E0_0 *, f32, f32);
void func_00190CC0();
extern unk_func_0016D0E0_0 *D_0035FAFC;
extern s32 D_0035FB80;

void func_0016D0E0(f32 *arg0, f32 *arg1, s32 arg2, f32 arg3) {
    f32 temp;

    func_0017D910();
    temp = func_00167A50();
    func_00167A70(arg3);
    D_0035FAFC->unk_0C = 0;
    D_0035FAFC->unk_08 = 0;
    D_0035FAFC->unk_04 = 0;
    D_0035FB80 = 1;
    func_00190CB0(arg0[0], arg0[1], arg2, D_0035FAFC, arg1[0], arg1[1]);
    func_00190CC0();
    D_0035FB80 = 0;
    func_00167A70(temp);
}
