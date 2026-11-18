/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0021F470_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_0021F470_0;

unk_func_0021F470_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001971C0(s32);
u8 func_0019ABE0(s32);
s32 func_001A7D60(s32);
s32 func_001A7D80(void);
s32 func_001A7D90(s32);

s32 func_0021F470(s32 *arg0) {
    s32 i;
    s32 h;
    s32 it;

    for (i = 0; i < 4; i++) {
        arg0[i] = 0;
    }
    i = 0;
    for (it = func_001A7D80(); i < 4 && it != 0; it = func_001A7D90(it)) {
        h = func_001A7D60(it);
        if (h != 0) {
            unk_func_0021F470_0 *obj = func_001971C0(h) != 2 ? NULL : HIE_fn_hGetSuperObjectObject(h);
            if (obj != NULL && func_0019ABE0(obj->unk_04) == 1) {
                arg0[i] = h;
                i++;
            }
        }
    }
    return i;
}
