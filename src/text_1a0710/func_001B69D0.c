/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44[2];
} unk_func_001B69D0_0;

void func_001B69D0(unk_func_001B69D0_0 *arg0, s16 arg1, s32 arg2) {
    if (arg1 >= 0 && arg1 < 2) {
        arg0->unk_44[arg1] = arg2;
    }
}
