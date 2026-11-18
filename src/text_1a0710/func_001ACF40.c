/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x10];
} unk_func_001ACF40_0;

s32 func_001ACF40(unk_func_001ACF40_0 *arg0, u16 arg1) {
    s32 ret;
    if (arg0 != NULL) {
        ret = arg0[arg1].unk_00;
    } else {
        ret = 0;
    }
    return ret;
}
