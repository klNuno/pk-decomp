/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_001BB740_0;

s32 func_001BB740(unk_func_001BB740_0 **arg0) {
    if (arg0 != NULL && *arg0 != NULL) {
        return (*arg0)->unk_08 - 1;
    }
    return -1;
}
