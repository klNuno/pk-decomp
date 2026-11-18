/* profile: o0_301_p */
#include "common.h"

s32 func_0010DC40(s32, s32, char *, s32);
s32 func_0010DDB0(s32);
s32 func_0010DFD0(s32, s32, u32);
void func_0010E2E0(s32, s32, s32 *);
void func_0011CBB0(char *, const char *, ...);
s32 func_001273A8(f32);
u32 func_0012ABC0(void);
void func_0012ABD0(s32);
void func_0027B9D0(void);

extern char D_0034F3D0[];
extern u8 D_00360394;

s32 func_0027CD60(s32 arg0, s32 arg1, const char *arg2, s32 arg3, s32 arg4)
{
    char temp0[0x108];
    s32 temp1;
    s32 temp2 = -1;
    s32 i;
    s32 j;
    s32 k;

    func_0011CBB0(temp0, D_0034F3D0, arg2);
    i = 3;
    D_00360394 = 0;
    func_0027B9D0();
    while (i && !(D_00360394 = func_0010DC40(arg0, arg1, temp0, 1) != 0 ? 0 : 1)) {
        if (--i) {
            func_0012ABD0(func_001273A8((f32)func_0012ABC0() / 1000.0f));
        }
    }

    if (D_00360394) {
        func_0010E2E0(0, 0, &temp2);
        if (temp2 >= 0) {
            j = 3;
            D_00360394 = 0;
            func_0027B9D0();
            while (j && !(D_00360394 = func_0010DFD0(temp2, arg3, (u32)arg4) != 0 ? 0 : 1)) {
                if (--j) {
                    func_0012ABD0(func_001273A8((f32)func_0012ABC0() / 1000.0f));
                }
            }

            if (D_00360394) {
                func_0010E2E0(0, 0, &temp1);
                if (temp1 == arg4) {
                    k = 3;
                    D_00360394 = 0;
                    func_0027B9D0();
                    while (k && !(D_00360394 = func_0010DDB0(temp2) != 0 ? 0 : 1)) {
                        if (--k) {
                            func_0012ABD0(func_001273A8((f32)func_0012ABC0() / 1000.0f));
                        }
                    }

                    if (D_00360394) {
                        func_0010E2E0(0, 0, &temp1);
                        if (temp1 == 0) {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
