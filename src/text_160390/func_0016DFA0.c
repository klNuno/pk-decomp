#include "common.h"

typedef struct {
    u8 pad_00[0x60];
} __attribute__((aligned(16))) unk_func_0016DFA0_0;

typedef struct {
    u8 pad_00[0x10];
    unk_func_0016DFA0_0 unk_10;
} unk_func_0016DFA0_1;

void func_0016DFA0(unk_func_0016DFA0_1 *arg0, unk_func_0016DFA0_0 *arg1) {
    *arg1 = arg0->unk_10;
}
