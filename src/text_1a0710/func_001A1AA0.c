/* profile: o0 */
#include "common.h"

void func_001A1AA0(u8 *arg0, u8 arg1) {
    if (arg1) {
        arg0[0x29] |= 0x80;
    } else {
        arg0[0x29] &= ~0x80;
    }
}
