#include "common.h"

typedef struct unk_func_001DAEE0_0 {
    s64 unk_00;
    u8 unk_08;
    u8 pad_09[7];
    s64 unk_10;
} unk_func_001DAEE0_0;

extern unk_func_001DAEE0_0 D_005F5800[];

void func_001DAEE0(void) {
    s32 i;

    for (i = 0; i < 16; i++) {
        D_005F5800[i].unk_00 = 0;
        D_005F5800[i].unk_08 = 0;
        D_005F5800[i].unk_10 = 0;
    }
}
