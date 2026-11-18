#include "common.h"

typedef struct unk_func_00165710_0 {
    f32 unk_00[24];
} __attribute__((aligned(16))) unk_func_00165710_0;

typedef struct unk_func_00165710_1 {
    u8 pad_00[0x30];
    unk_func_00165710_0 unk_30;
} unk_func_00165710_1;

void func_00165710(unk_func_00165710_1 *arg0, unk_func_00165710_0 *arg1) {
    arg0->unk_30 = *arg1;
}
