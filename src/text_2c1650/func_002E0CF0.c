#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
} unk_func_002E0CF0_0;

void func_002DE870();
extern u8 D_0035E5B0[];

unk_func_002E0CF0_0 *func_002E0CF0(unk_func_002E0CF0_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_002DE870(arg0, arg2);
    arg0->unk_00 = D_0035E5B0;
    arg0->unk_08 = arg1;
    arg0->unk_0C = arg3;
    return arg0;
}
