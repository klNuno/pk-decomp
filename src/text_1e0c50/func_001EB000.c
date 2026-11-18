/* profile: o0 */
#include "common.h"

s32 *func_001EB000(s32 arg0, s32 *arg1, s32 *arg2) {
    arg0 = arg0;
    arg2[0] = *arg1;
    arg2[3] = 0x21;
    return arg1 += 2;
}
