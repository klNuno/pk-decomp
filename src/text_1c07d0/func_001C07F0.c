/* profile: o0 */
#include "common.h"

s32 func_001C07F0(u16 *arg0, u16 *arg1) {
    if (arg0[0] < arg1[0]) {
        return -1;
    }
    if (arg0[0] > arg1[0]) {
        return 1;
    }
    if (arg0[1] < arg1[1]) {
        return -1;
    }
    if (arg0[1] > arg1[1]) {
        return 1;
    }
    return 0;
}
