/* profile: o0 */
#include "common.h"

typedef struct unk_func_001BB6A0_0 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_001BB6A0_0;

s32 func_001BB6A0(unk_func_001BB6A0_0 **arg0) {
    if (arg0 != 0 && *arg0 != 0) {
        return (*arg0)->unk_08;
    }
    return -1;
}
