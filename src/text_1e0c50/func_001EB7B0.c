/* profile: o0_p */
#include "common.h"

u8 *func_001EB7B0(u8 *arg0) {
    u8 level;

    level = arg0[-2];
    while (arg0[6] > level && arg0[7] != 8) {
        arg0 += 8;
    }
    return arg0;
}
