/* profile: o0_p */
#include "common.h"

extern u32 D_005ACAD8[];
extern s32 **D_005ACAE0[];

s32 *func_001D0DB0(s32 arg0) {
    u32 i;
    s32 *temp_s1;

    for (i = 0; i < D_005ACAD8[0]; i++) {
        temp_s1 = D_005ACAE0[0][i];
        if (*temp_s1 == arg0) {
            return temp_s1;
        }
    }
    return NULL;
}
