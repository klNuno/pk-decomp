#include "common.h"

typedef struct {
    f32 unk_00[16];
} __attribute__((aligned(16))) unk_func_002C87D0_0;

extern u8 D_007B7B8C[];
extern unk_func_002C87D0_0 *D_007B83E4[];
extern unk_func_002C87D0_0 *D_007B83E8[];
extern s32 *D_007B83EC[];

void func_002C87D0(void) {
    (*D_007B83EC[0])--;
    *D_007B83E4[0] = *--D_007B83E8[0];
    D_007B7B8C[0] = 1;
}
