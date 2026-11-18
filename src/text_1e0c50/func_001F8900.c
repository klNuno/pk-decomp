/* profile: o0 */
#include "common.h"

typedef struct unk_func_001F8900_0 {
    u8 pad_00[0x74];
    u8 unk_74;
    u8 unk_75;
} unk_func_001F8900_0;

s32 func_001F8900(unk_func_001F8900_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 ret = 0;

    if (arg5 == 1) {
        if (arg0->unk_74 & 1) {
            ret = arg3;
        } else {
            ret = arg2;
        }
    } else if (arg5 == -1) {
        ret = arg1;
    } else if (arg0->unk_75 & 2) {
        ret = arg4;
    } else {
        ret = arg2;
    }
    return ret;
}
