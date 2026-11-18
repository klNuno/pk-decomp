/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002085B0_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002085B0_0;

unk_func_002085B0_0 *HIE_fn_hGetSuperObjectObject(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
u32 func_0019ABC0(s32);
u8 func_001A16E0(s32);
s32 func_001A7D60(s32);
s32 func_001A7D80();
s32 func_00208B20(s32);

s32 *func_002085B0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 a;
    s32 sp5C;
    u32 flags;
    s32 c;
    s32 b;

    a = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(a), arg0, &sp5C);
    b = sp5C;
    if (b == func_001A7D60(func_001A7D80())) {
        *arg2 = 0;
    } else {
        c = HIE_fn_hGetSuperObjectObject(sp5C)->unk_04;
        if (c != 0) {
            flags = func_0019ABC0(c);
            if (flags & 0x4C0000) {
                *arg2 = func_001A16E0(c);
            } else {
                *arg2 = 0;
            }
        }
    }
    return arg1;
}
