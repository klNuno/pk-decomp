/* profile: o0 */
#include "common.h"

u8 func_001ABE30(s32 arg0) {
    if (arg0 < 0x20) {
        arg0 = 0;
    } else if (arg0 >= 0x61 && arg0 < 0x7B) {
        arg0 -= 0x40;
    } else if (arg0 >= 0x41 && arg0 < 0x5B) {
        arg0 -= 0x20;
    } else if (arg0 >= 0xA0) {
        arg0 -= 0x40;
    } else {
        arg0 -= 0x20;
    }
    return (s8)arg0;
}
