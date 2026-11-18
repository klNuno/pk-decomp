#include "common.h"

s32 func_00279290(u8 *arg0, u8 **arg1) {
    s32 temp_v1;
    s32 temp_a2;

    temp_v1 = *(s32 *)(arg0 + 0x28004);
    if (temp_v1 != 0) {
        temp_a2 = *(s32 *)(arg0 + 0x28008);
        *arg1 = arg0 + (temp_a2 + (*(s32 *)(arg0 + 0x28000) - temp_v1)) % temp_a2;
    }
    return *(s32 *)(arg0 + 0x28004);
}
