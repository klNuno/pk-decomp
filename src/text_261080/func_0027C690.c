/* profile: o0 */
#include "common.h"

typedef struct unk_func_0027C690_0 {
    u8 pad_00[0x1];
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
    u8 pad_08[0x38];
} unk_func_0027C690_0;

void func_0011CBB0();
s32 func_0027BE90();
extern char D_0034F3D8[];
extern s32 D_00360388;
extern u8 D_007AEB41[];
extern u8 D_007AEB42[];
extern u8 D_007AEB43[];
extern u8 D_007AEB44[];
extern u8 D_007AEB45[];
extern u16 D_007AEB46[];

s32 func_0027C690(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_0027C690_0 sp10;
    char sp50[0x100];

    func_0011CBB0(sp50, D_0034F3D8, arg2, arg2);
    if (func_0027BE90(arg0, arg1, sp50, &sp10) == 1) {
        D_007AEB41[0] = sp10.unk_01;
        D_007AEB42[0] = sp10.unk_02;
        D_007AEB43[0] = sp10.unk_03;
        D_007AEB44[0] = sp10.unk_04;
        D_007AEB45[0] = sp10.unk_05;
        D_007AEB46[0] = sp10.unk_06;
        D_00360388 = 0;
        return 1;
    }
    D_00360388 = 0;
    return 0;
}
