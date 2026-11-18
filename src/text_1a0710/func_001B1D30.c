/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} unk_func_001B1D30_0;

extern unk_func_001B1D30_0 *HIE_fn_hGetSuperObjectObject(s32);
extern s32 func_00198500(s32);
extern s32 func_00198520(s32);
extern s32 func_00198540(s32);
extern u8 func_0019ABE0(s32);
extern s32 func_0019E900(s32);
extern s32 func_0019E920(s32);
extern s32 func_0019E940(s32);
extern s32 func_0019E970(s32);
extern s32 func_001B2080(s32, u16, s32, u16);
extern s32 func_001BE470(s32);

void func_001B1D30(s32 arg0, u16 arg1, u16 arg2, s32 *arg3, u16 *arg4) {
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    s32 s0;
    s32 s1;
    u16 s2;
    u16 s3;
    s32 s4;
    s32 s5;
    s32 s6;
    s32 s7;
    s32 fp;

    s2 = 0;
    s3 = *arg4;
    s6 = 0;
    spA0 = s0 = func_00198540(func_001BE470(HIE_fn_hGetSuperObjectObject(arg0)->unk_20));
    while (s0) {
        s1 = func_00198500(s0);
        if (arg0 != s1 && func_0019ABE0(HIE_fn_hGetSuperObjectObject(s1)->unk_04) == 1) {
            if (s2 < s3) {
                if (func_001B2080(arg0, arg1, s1, arg2)) {
                    arg3[s2++] = s1;
                }
            } else {
                *arg4 = s3;
                return;
            }
        }
        s6++;
        fp = s0 = func_00198520(s0);
        (void)fp;
    }

    s6 = func_0019E970(func_001BE470(HIE_fn_hGetSuperObjectObject(arg0)->unk_20));
    spA4 = s7 = func_0019E940(func_001BE470(HIE_fn_hGetSuperObjectObject(arg0)->unk_20));
    while (s6) {
        s5 = 0;
        spA8 = s0 = func_00198540(func_0019E920(s7));
        while (s0) {
            if (s2 < s3) {
                s1 = func_00198500(s0);
                if (func_0019ABE0(HIE_fn_hGetSuperObjectObject(s1)->unk_04) == 1 &&
                    func_001B2080(arg0, arg1, s1, arg2)) {
                    arg3[s2++] = s1;
                }
            } else {
                *arg4 = s3;
                return;
            }
            s5++;
            s4 = s0 = func_00198520(s0);
            (void)s4;
        }
        s6--;
        spAC = s7 = func_0019E900(s7);
    }
    *arg4 = s2;
}
