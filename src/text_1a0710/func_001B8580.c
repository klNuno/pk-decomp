/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_001B8580_0;

unk_func_001B8580_0 *HIE_fn_hGetSuperObjectObject();
s32 func_001B84B0();

s32 func_001B8580(s32 arg0) {
    s32 temp;
    s32 ret;
    unk_func_001B8580_0 *obj;

    ret = 0;
    obj = HIE_fn_hGetSuperObjectObject(arg0);
    if (obj != NULL) {
        temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
        if (temp != 0) {
            ret = func_001B84B0(temp);
        }
    }
    return ret;
}
