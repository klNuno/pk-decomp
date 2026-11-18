/* profile: o0_p */
#include "common.h"

typedef struct unk_func_00248AA0_0 {
    u8 pad_00[0x1C];
    u8 unk_1C;
} unk_func_00248AA0_0;

s32 func_00248310();

void func_00248AA0(unk_func_00248AA0_0 *arg0) {
    u16 i;

    i = 0;
    while (i < arg0->unk_1C - 2) {
        if (func_00248310(arg0, i) == 0) {
            i++;
        }
    }
}
