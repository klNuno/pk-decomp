/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001EB830_0 {
    u8 pad_00[6];
    u8 unk_06;
    u8 unk_07;
} unk_func_001EB830_0;

unk_func_001EB830_0 *func_001EB830(unk_func_001EB830_0 *arg0) {
    u8 temp = arg0->unk_06;

    for (arg0++; arg0->unk_06 > temp && arg0->unk_07 != 8; arg0++) {
    }
    return arg0;
}
