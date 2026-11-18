/* profile: o0 */
#include "common.h"

s32 func_001EBC30(s32, u8);
extern u8 D_00360120;
extern u8 D_00360124;

u8 func_001EBC70(s8 *arg0, s32 arg1, u8 arg2) {
    u8 temp = *arg0;

    if ((D_00360124 & 0x20) != 0x20) {
        if (!D_00360120) {
            if ((temp & 4) != 4 || func_001EBC30(arg1, arg2) == 0) {
                temp &= 0x1C;
                temp |= D_00360124;
            }
            D_00360124 = 0x20;
            D_00360120 = 1;
        } else {
            D_00360120 = 0;
        }
    }
    return temp;
}
