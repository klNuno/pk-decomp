/* profile: o0 */
#include "common.h"

typedef struct unk_func_001B74D0_0 {
    u8 pad_00[0x30];
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
} unk_func_001B74D0_0;

s32 func_001B74D0(u8 arg0, unk_func_001B74D0_0 *arg1) {
    switch (arg0) {
    case 0:
        return arg1->unk_30;
    case 3:
        return arg1->unk_3C;
    case 2:
        return arg1->unk_34;
    case 1:
        return arg1->unk_38;
    default:
        return 0;
    }
}
