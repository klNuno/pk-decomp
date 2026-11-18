/* profile: o0 */
#include "common.h"

u8 func_00197E90(u8 *arg0) {
    s32 temp;

    if (arg0[0x29] & 1) {
        temp = 1;
    } else {
        temp = 0;
    }
    return temp;
}
