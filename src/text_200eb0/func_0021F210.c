/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_0021F210_0;

unk_func_0021F210_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stBrainGetMind(s32);
s32 func_0012DCA0(s32);
s32 func_001971C0(s32);
s32 func_001971E0(s32);
void func_001E84D0(s32, s32);

void func_0021F210(s32 arg0) {
    unk_func_0021F210_0 *obj;
    s32 cur;
    s32 next;
    s32 x1;
    s32 x2;
    s32 i;

    if (func_001971C0(arg0) == 2) {
        obj = (func_001971C0(arg0) != 2) ? NULL : HIE_fn_hGetSuperObjectObject(arg0);
        if (obj->unk_0C != 0) {
            func_001E84D0(fn_p_stBrainGetMind(obj->unk_0C), 0);
        }
    } else {
        for (i = 0, cur = func_001971E0(arg0), x1 = next = func_0012DCA0(cur);
             cur != 0;
             i++, cur = next, x2 = next = func_0012DCA0(cur), (void)x2) {
            func_0021F210(cur);
        }
    }
}
