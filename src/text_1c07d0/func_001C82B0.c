/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
} unk_func_001C82B0_0;

s32 *HIE_fn_hGetSuperObjectObject();
unk_func_001C82B0_0 *func_00197860();
s32 func_001B0960();

u8 func_001C82B0(s32 arg0) {
    unk_func_001C82B0_0 *p;
    s32 a;
    s32 b;

    a = *HIE_fn_hGetSuperObjectObject(arg0);
    p = func_00197860(a);
    if (p == NULL) {
        return 0;
    }
    b = p->unk_50;
    return func_001B0960(b);
}
