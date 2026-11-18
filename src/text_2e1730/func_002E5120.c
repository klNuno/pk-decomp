#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002E5120_0;

extern u8 D_0035E5D0[];

unk_func_002E5120_0 *func_002E5120(unk_func_002E5120_0 *arg0) {
    arg0->unk_00 = D_0035E5D0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    return arg0;
}
