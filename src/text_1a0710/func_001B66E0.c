/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44[2];
} unk_func_001B66E0_0;

s32 func_001B66E0(unk_func_001B66E0_0 *arg0, s16 arg1) {
    s32 temp = 0;
    s32 ret;

    if (arg1 >= 0 && arg1 < 2) {
        temp = 1;
    }
    if (temp) {
        ret = arg0->unk_44[arg1];
    } else {
        ret = 0;
    }
    return ret;
}
