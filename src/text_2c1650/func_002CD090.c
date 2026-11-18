#include "common.h"

typedef struct unk_func_002CD090_0 {
    u8 pad_00[0x5F8C];
    s32 unk_5F8C;
} unk_func_002CD090_0;

extern unk_func_002CD090_0 D_007B2370;

void func_002CD090(s32 arg0) {
    unk_func_002CD090_0 *temp = &D_007B2370;

    if (arg0 < 0 || arg0 >= 2) {
        return;
    }
    temp->unk_5F8C = arg0;
}
