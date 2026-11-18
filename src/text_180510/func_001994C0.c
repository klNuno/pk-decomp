/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001994C0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 unk_10;
} unk_func_001994C0_0;

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00199470(s32);
unk_func_001994C0_0 *func_00199580();
unk_func_001994C0_0 *func_00199590(unk_func_001994C0_0 *, s32);

u8 func_001994C0(s32 arg0) {
    unk_func_001994C0_0 *p;
    u8 found;

    found = 0;
    if (func_00199470(HIE_fn_hGetSuperObjectObject(arg0)[1]) != 0) {
        for (p = func_00199580(); p != NULL; p = func_00199590(p, 0)) {
            if (p->unk_0C == arg0 && p->unk_10 == 1) {
                found = 1;
            }
        }
    }
    return found;
}
