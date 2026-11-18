#include "common.h"

typedef struct unk_func_002CFED0_0 {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
} unk_func_002CFED0_0;

unk_func_002CFED0_0 *func_002CFED0(unk_func_002CFED0_0 *arg0) {
    arg0->unk_00 = 0;
    arg0->unk_08 = &arg0->unk_04;
    arg0->unk_04 = &arg0->unk_04;
    return arg0;
}
