/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_001E9530_0;

s32 func_00162090();

s32 func_001E9530(s32 *arg0, u8 arg1, unk_func_001E9530_0 *arg2) {
    s32 temp;

    temp = *arg0;
    arg1 = arg1;
    arg2->unk_00 = temp;
    arg2->unk_0C = 0x26;
    if (func_00162090(temp) != 0) {
        return 1;
    }
    return 0;
}
