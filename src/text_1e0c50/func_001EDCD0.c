/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x6];
    u8 unk_06;
    u8 unk_07;
} unk_func_001EDCD0_0;

u8 func_001EDCD0(unk_func_001EDCD0_0 *arg0) {
    u8 count = 0;
    u8 level = arg0[-1].unk_06;

    while (arg0->unk_06 > level && arg0->unk_07 != 8) {
        if (arg0->unk_06 == level + 1) {
            count++;
        }
        arg0++;
    }
    return count;
}
