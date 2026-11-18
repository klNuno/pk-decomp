#include "common.h"

typedef struct {
    s32 *unk_00;
    u8 pad_04[0x14];
    s32 unk_18;
} unk_func_00300980_0;

extern s32 D_0035EC50[];
void func_003023B0();

unk_func_00300980_0 *func_00300980(unk_func_00300980_0 *arg0) {
    func_003023B0(arg0);
    arg0->unk_00 = D_0035EC50;
    arg0->unk_18 = 0;
    return arg0;
}
