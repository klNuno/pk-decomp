/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
} unk_func_001E77A0_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001E77A0_1 *unk_10;
} unk_func_001E77A0_0;

void func_001E7270(unk_func_001E77A0_0 *, u8, s32, s32, s32);

void func_001E77A0(unk_func_001E77A0_0 *arg0) {
    u8 temp;
    u8 i;

    arg0->unk_10->unk_05 = 0;
    arg0->unk_10->unk_06 = 0;
    temp = arg0->unk_10->unk_04;
    for (i = 0; i < temp; i++) {
        func_001E7270(arg0, i, 0, 0, 0);
    }
}
