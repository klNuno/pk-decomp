#include "common.h"

typedef struct {
    u8 pad_00[0x40];
} __attribute__((aligned(16))) unk_func_002C88D0_0;

extern unk_func_002C88D0_0 *D_007B83E4[];
extern s8 D_007B7B8C[];

void func_002C88D0(unk_func_002C88D0_0 *arg0) {
    *D_007B83E4[0] = *arg0;
    D_007B7B8C[0] = 1;
}
