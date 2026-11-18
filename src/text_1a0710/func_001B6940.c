/* profile: o0 */
#include "common.h"

typedef struct unk_func_001B6940_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001B6940_1;

typedef struct unk_func_001B6940_0 {
    u8 pad_00[0x4C];
    unk_func_001B6940_1 unk_4C[2];
} unk_func_001B6940_0;

void func_001B6940(unk_func_001B6940_0 *arg0, s16 arg1, unk_func_001B6940_1 *arg2) {
    if (arg1 >= 0 && arg1 < 2) {
        arg0->unk_4C[arg1] = *arg2;
    }
}
