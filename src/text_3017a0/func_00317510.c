#include "common.h"

s32 func_00317510(s32 **arg0, s32 **arg1) {
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 var_v0;

    temp_v0_2 = *arg1;
    if (temp_v0_2 != NULL) {
        *arg1 = *(s32 **)((u8 *)temp_v0_2 + 4);
        temp_v0_3 = *arg1;
        if (temp_v0_3 != NULL) {
            var_v0 = *(s32 *)((u8 *)temp_v0_3 + 0);
        } else {
            var_v0 = 0;
        }
        return var_v0;
    }
    *arg1 = *arg0;
    temp_v0 = *arg0;
    if (temp_v0 != NULL) {
        return *temp_v0;
    }
    return 0;
}
