/* profile: o0 */
#include "common.h"

s32 *func_001F19D0(s32);

s32 func_00257690(s32 arg0) {
    s32 *temp;

    if ((temp = func_001F19D0(arg0)) == NULL) {
        return 0;
    }
    return (temp[1] & 1) == 1;
}
