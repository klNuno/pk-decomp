/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0027C010_0 {
    u8 pad_00[0x14];
    volatile u16 unk_14;
    u8 pad_16[0x66];
} unk_func_0027C010_0;

extern u8 D_00360394;
s32 func_0027ECD0();
void func_0010E2E0();
s32 func_0010E5A0();
s32 func_001273A8(f32);
u32 func_0012ABC0(void);
void func_0012ABD0(s32);
void func_0027B9D0(void);

s32 func_0027C010(s32 arg0, s32 arg1, char *arg2, s32 arg3) {
    unk_func_0027C010_0 sp50;
    s32 r;
    s32 i;
    s32 n;
    u16 f;

    r = -1;
    i = 0;
    while (arg2[i++] != '/') {
    }
    if (func_0027ECD0(0, 0, arg2, 0, 0) == 0) {
        return 0;
    }
    n = 3;
    D_00360394 = 0;
    func_0027B9D0();
    while (n != 0 && !(D_00360394 = (func_0010E5A0(arg0, arg1, (void *)arg2, 0, 1, &sp50) != 0 ? 0 : 1))) {
        if (--n != 0) {
            func_0012ABD0(func_001273A8(func_0012ABC0() / 1000.0f));
        }
    }
    if (D_00360394) {
        func_0010E2E0(0, 0, &r);
        while ((u16)sp50.unk_14 == 0) {
        }
        f = (s16)sp50.unk_14 & 0x80;
        if ((u16)f != 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}
