#include "common.h"

typedef struct unk_func_0015B5D0_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0015B5D0_1;

typedef struct unk_func_0015B5D0_0 {
    u8 pad_00[8];
    u32 unk_08;
    unk_func_0015B5D0_1 *unk_0C;
} unk_func_0015B5D0_0;

void func_0015B5D0(unk_func_0015B5D0_0 *arg0) {
    u64 i;
    for (i = 0; i < arg0->unk_08; i++) {
        arg0->unk_0C[(s32)i].unk_00 = arg0->unk_0C[(s32)i].unk_04;
    }
}
