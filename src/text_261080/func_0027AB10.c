/* profile: opt_300 */
#include "common.h"

s32 func_00279C40(u8 *);
s32 func_00108EF8(u8 *);

s32 func_0027AB10(u8 *arg0) {
    s32 temp;

    temp = 0;
    if (func_00279C40(arg0 + 0x48) == 0) {
        if (func_00108EF8(arg0) != 0) {
            temp = 1;
        }
    }
    return temp;
}
