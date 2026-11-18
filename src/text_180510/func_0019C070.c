/* profile: o0 */
#include "common.h"

extern u16 D_0035FC20;

s32 func_0019C070(s32 arg0) {
    if (D_0035FC20 & arg0) {
        return 1;
    }
    return 0;
}
