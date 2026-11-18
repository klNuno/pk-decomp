/* profile: o0 */
#include "common.h"

typedef struct unk_func_001B6A40_0 {
    u8 pad_00[0x64];
    f32 unk_64[2];
} unk_func_001B6A40_0;

void func_001B6A40(unk_func_001B6A40_0 *arg0, s16 arg1, f32 arg2) {
    if (arg1 >= 0 && arg1 < 2) {
        arg0->unk_64[arg1] = arg2;
    }
}
