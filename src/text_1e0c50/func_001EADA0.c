/* profile: o0 */
#include "common.h"

u8 *func_001EADA0(s32 arg0, u8 *arg1, s32 *arg2) {
    arg0 = arg0;
    arg2[0] = (*(s32 **)arg1)[0];
    arg2[1] = (*(s32 **)arg1)[1];
    arg2[2] = (*(s32 **)arg1)[2];
    arg2[3] = 0x15;
    return arg1 += 8;
}
