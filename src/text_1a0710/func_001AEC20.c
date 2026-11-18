/* profile: o0 */
#include "common.h"

extern u8 *D_005ABD84[];

u8 *func_001AEC20(s32 arg0) {
    if (arg0 >= 5 || arg0 < 0) {
        return 0;
    }
    return D_005ABD84[0] + arg0 * 0x10;
}
