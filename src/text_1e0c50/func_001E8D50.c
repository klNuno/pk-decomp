/* profile: o0_301 */
#include "common.h"

s32 func_001971C0();
s32 HIE_fn_hGetSuperObjectObject();

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001E8D50_0;

s32 func_001E8D50(s32 *arg0, u8 arg1, unk_func_001E8D50_0 *arg2) {
    s32 temp;
    s32 var_s1;
    s32 var_s2;

    temp = *arg0;
    arg1 = arg1;
    if (temp == 0) {
        var_s1 = 0;
    } else {
        if (func_001971C0(temp) != 2) {
            var_s2 = 0;
        } else {
            var_s2 = HIE_fn_hGetSuperObjectObject(temp);
        }
        var_s1 = var_s2;
    }
    arg2->unk_00 = var_s1;
    arg2->unk_0C = 0xB;
    if (temp == 0) {
        return 0;
    }
    return 1;
}
