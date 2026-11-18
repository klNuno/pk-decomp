#include "common.h"

typedef struct unk_func_002F23F0_0 {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002F23F0_0;

extern u8 D_0035E7F0[];

unk_func_002F23F0_0 *func_002F23F0(unk_func_002F23F0_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk_00 = D_0035E7F0;
    arg0->unk_04 = arg2;
    arg0->unk_08 = arg1;
    return arg0;
}
