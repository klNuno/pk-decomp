#include "common.h"

typedef struct unk_func_001577B0_0 {
    s16 unk_00;
    s32 unk_04;
    u8 pad_08[0x4];
} unk_func_001577B0_0;

typedef struct unk_func_001577B0_1 {
    u8 pad_00[4];
    unk_func_001577B0_0 *unk_04;
} unk_func_001577B0_1;

extern s32 D_0035FB84;

s32 func_001577B0(unk_func_001577B0_1 *arg0, s16 arg1) {
    D_0035FB84 = arg0->unk_04[arg1].unk_04;
    return D_0035FB84;
}
