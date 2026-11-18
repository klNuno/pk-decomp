/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00215370_0 {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_func_00215370_0;

s32 func_00162090(s32);
s32 func_00161FF0(s32);
s32 func_00162330(s32);

s32 func_00215370(unk_func_00215370_0 *arg0) {
    if (arg0 != NULL) {
        s32 temp = arg0->unk_20;

        if (func_00162090(temp) != 0) {
            s32 temp2 = func_00161FF0(temp);

            if (temp2 != 0 && temp2 != -1) {
                return func_00162330(temp2);
            }
        }
    }
    return 0;
}
