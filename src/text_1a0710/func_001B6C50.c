/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B6C50_0 {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} unk_func_001B6C50_0;

s32 func_001B6C50(u8 arg0, unk_func_001B6C50_0 *arg1) {
    switch (arg0) {
    case 0:
        return arg1->unk_10;
    case 2:
        return arg1->unk_14;
    case 1:
        return arg1->unk_18;
    case 3:
        return arg1->unk_1C;
    default:
        return 0;
    }
}
