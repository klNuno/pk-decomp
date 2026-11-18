#include "common.h"

typedef struct unk_func_002C8890_0 {
    f32 unk_00[16];
} __attribute__((aligned(16))) unk_func_002C8890_0;

extern unk_func_002C8890_0 D_00341680;
extern unk_func_002C8890_0 *D_007B83E4[];
extern u8 D_007B7B8C[];

void func_002C8890(void) {
    *D_007B83E4[0] = D_00341680;
    D_007B7B8C[0] = 1;
}
