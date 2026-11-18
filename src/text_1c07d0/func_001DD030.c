/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[6];
    s16 unk_06;
    u8 pad_08[6];
    s16 unk_0E;
} unk_func_001DD030_1;

typedef struct {
    u8 pad_00[0xC];
    s16 *unk_0C;
    unk_func_001DD030_1 **unk_10;
} unk_func_001DD030_0;

s16 func_001DD030(unk_func_001DD030_0 *arg0, s16 arg1) {
    switch (arg0->unk_0C[arg1]) {
    case 1:
        return arg0->unk_10[arg1]->unk_0E;
    case 7:
        return arg0->unk_10[arg1]->unk_06;
    case 8:
        return arg0->unk_10[arg1]->unk_06;
    default:
        return -1;
    }
}
