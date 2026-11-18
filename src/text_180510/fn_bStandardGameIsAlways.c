/* profile: o0 */
#include "common.h"

u8 fn_bStandardGameIsAlways(u8 *arg0) {
    return (arg0[0x29] & 0x10) ? 1 : 0;
}
