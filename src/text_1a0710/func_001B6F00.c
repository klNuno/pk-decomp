/* profile: o0 */
#include "common.h"

void func_001B6F00(u8 *arg0, u8 arg1) {
    if (arg1) {
        arg0[0x42] |= 4;
    } else {
        arg0[0x42] &= ~4;
    }
}
