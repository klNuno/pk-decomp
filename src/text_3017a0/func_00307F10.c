#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    u8 unk_0C;
} unk_func_00307F10_0;

void *func_00308480(s32, s32, void (*)(), unk_func_00307F10_0 *);
void func_00307FA0();

s32 func_00307F10(unk_func_00307F10_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    if (arg0->unk_08 == NULL) {
        arg0->unk_08 = func_00308480(arg1, arg2, func_00307FA0, arg0);
        arg0->unk_04 = arg4;
        arg0->unk_00 = arg3;
        arg0->unk_0C = arg5;
        return arg0->unk_08 != NULL;
    }
    return 0;
}
