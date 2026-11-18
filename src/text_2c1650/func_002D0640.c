/* profile: opt_300 */
#include "common.h"

u8 func_002D0640(u8 arg0) {
    if (arg0 >= '0' && arg0 <= '9') {
        return arg0 - '0';
    }
    if (arg0 >= 'A' && arg0 <= 'F') {
        return arg0 - 'A' + 10;
    }
    if (arg0 >= 'a' && arg0 <= 'f') {
        return arg0 - 'a' + 10;
    }
    return 0;
}
