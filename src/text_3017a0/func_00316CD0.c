#include "common.h"

typedef struct unk_func_00316CD0_0 {
    s32 unk_00;
    u8 pad_04[0xA8];
    void *unk_AC;
    s32 unk_B0;
    f32 unk_B4;
    u8 unk_B8[0xC];
    u8 unk_C4[0xC];
    u8 unk_D0[0xC];
} unk_func_00316CD0_0;

void func_003185F0(unk_func_00316CD0_0 *);
void func_00316850(void *, s32);
void func_00317640(void *, s32);
extern u8 D_0035F210[];

unk_func_00316CD0_0 *func_00316CD0(unk_func_00316CD0_0 *volatile arg0, s32 arg1) {
    func_003185F0(arg0);
    arg0->unk_AC = D_0035F210;
    arg0->unk_B0 = 10;
    func_00316850(arg0->unk_B8, arg1);
    func_00317640(arg0->unk_C4, arg1);
    func_00317640(arg0->unk_D0, arg1);
    arg0->unk_00 = 2;
    arg0->unk_B4 = 1.0f;
    return arg0;
}
