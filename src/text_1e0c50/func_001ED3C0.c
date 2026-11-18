/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
} unk_func_001ED3C0_0;

void func_001B1D30(s32, u16, u16, s32 *, u16 *);
void func_001EC3E0(unk_func_001ED3C0_0 *, s32);
extern s32 D_00603EA0[];

void func_001ED3C0(unk_func_001ED3C0_0 *arg0, s32 arg1, u16 arg2, u16 arg3) {
    u16 sp2E;
    u16 var_s0;

    arg0->unk_00 = 0;
    sp2E = arg0->unk_01;
    func_001B1D30(arg1, arg2, arg3, D_00603EA0, &sp2E);
    for (var_s0 = 0; var_s0 < sp2E; var_s0++) {
        func_001EC3E0(arg0, D_00603EA0[var_s0]);
    }
}
