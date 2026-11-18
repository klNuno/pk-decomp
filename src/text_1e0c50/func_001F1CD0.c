/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001F1CD0_0;

unk_func_001F1CD0_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001B84B0(s32);
void func_00139560(s32, f32);

s32 func_001F1CD0(s32 arg0, f32 arg1) {
    s32 sub;
    s32 obj;

    obj = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (obj != 0) {
        sub = func_001B84B0(obj);
        if (sub != 0) {
            func_00139560(sub, arg1);
            return 1;
        }
    }
    return 0;
}
