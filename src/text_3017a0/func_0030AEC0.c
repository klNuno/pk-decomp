#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    s32 unk_0C;
    void *unk_10;
    s32 unk_14;
    u8 pad_18[0x10];
} unk_func_0030AEC0_0;

void func_00307E30();
s32 func_00308CA0();
void func_0030B880();
s32 func_0031A320();
s32 func_0031A120();
void func_0031A140();
void func_0030AF80();
extern s32 D_003607FC;
extern s32 D_00360804;
extern s32 D_00360808;
extern s32 D_00367370;
extern u8 D_007C9690[];
extern s32 D_007CA690[];
extern s32 D_007CA694[];
extern s32 D_007CA698[];

void func_0030AEC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    unk_func_0030AEC0_0 sp40;

    func_00307E30();
    D_003607FC = func_00308CA0();
    func_0030B880(arg4, arg2);
    D_007CA698[0] = 0;
    D_007CA694[0] = 1;
    D_00360804 = func_0031A320(D_007CA690);
    sp40.unk_04 = func_0030AF80;
    sp40.unk_14 = arg1;
    sp40.unk_08 = D_007C9690;
    sp40.unk_0C = 0x1000;
    sp40.unk_10 = &D_00367370;
    D_00360808 = func_0031A120(&sp40);
    func_0031A140(D_00360808, 0);
}
