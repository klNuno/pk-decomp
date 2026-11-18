#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00289F00_0;

extern unk_func_00289F00_0 D_007B828C[];
extern unk_func_00289F00_0 D_007B8290[];
extern unk_func_00289F00_0 D_007B8294[];
extern unk_func_00289F00_0 D_007B8298[];
extern volatile s32 D_007B82FC[];

void func_00289F00(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B828C[D_007B82FC[0]].unk_00 = arg0;
    D_007B8290[D_007B82FC[0]].unk_00 = arg1;
    D_007B8294[D_007B82FC[0]].unk_00 = arg2;
    D_007B8298[D_007B82FC[0]].unk_00 = arg3;
}
