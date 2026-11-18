#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_002FEDD0_0;

void func_00301A00(unk_func_002FEDD0_0 *, s32);
extern u8 D_0035EAB0[];

unk_func_002FEDD0_0 *func_002FEDD0(unk_func_002FEDD0_0 *arg0, s32 arg1) {
    func_00301A00(arg0, 0);
    arg0->unk_00 = D_0035EAB0;
    arg0->unk_0C = arg1;
    return arg0;
}
