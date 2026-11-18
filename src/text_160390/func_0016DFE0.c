#include "common.h"

typedef struct unk_func_0016DFE0_0 {
    u8 pad_00[0x78];
    f32 unk_78;
    f32 unk_7C;
} unk_func_0016DFE0_0;

void func_0016DFE0(unk_func_0016DFE0_0 *arg0, f32 arg1, f32 arg2) {
    arg0->unk_78 = 0.25f;
    if (arg2 == 0.0f) {
        arg0->unk_7C = 100000.0f;
    } else {
        arg0->unk_7C = arg2;
    }
}
