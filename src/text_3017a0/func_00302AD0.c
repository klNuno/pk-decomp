#include "common.h"

extern u8 D_0035ED20[];

typedef struct {
    void *unk_00;
    s32 unk_04;
} unk_func_00302AD0_0;

unk_func_00302AD0_0 *func_00302AD0(unk_func_00302AD0_0 *arg0, s32 arg1) {
    arg0->unk_00 = D_0035ED20;
    arg0->unk_04 = arg1;
    return arg0;
}
