/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[6];
    u8 unk_06;
    u8 unk_07;
} unk_func_001EB720_0;

unk_func_001EB720_0 *func_001EB720(unk_func_001EB720_0 *arg0) {
    u8 temp;

    temp = arg0->unk_06;
    for (arg0++; arg0->unk_06 >= temp && arg0->unk_07 != 8; arg0++) {
    }
    return arg0;
}
