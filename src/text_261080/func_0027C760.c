/* profile: o0_301_p */
#include "common.h"

s32 func_0010DC40(s32, s32, void *, s32);
s32 func_0010DDB0(s32);
s32 func_0010E0F0(s32, void *, u32);
void func_0010E2E0(s32, s32, s32 *);
s32 func_0010E998(s32, s32, void *);
s32 func_001273A8(f32);
u32 func_0012ABC0(void);
void func_0012ABD0(s32);
void func_0027B9D0(void);
extern u8 D_00360394;

s32 func_0027C760(s32 arg0, s32 arg1, void *arg2, void *arg3, s32 arg4) {
    s32 spA4;
    s32 spA8;
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    s32 spAC;

    spA8 = -1;
    temp0 = 3;
    D_00360394 = 0;
    func_0027B9D0();
    while (temp0 && !(D_00360394 = func_0010DC40(arg0, arg1, (void *)arg2, 0x202) ? 0 : 1)) {
        if (--temp0) {
            func_0012ABD0(func_001273A8((f32)func_0012ABC0() / 1000.0f));
        }
    }
    if (D_00360394) {
        func_0010E2E0(0, 0, &spA8);
        if (spA8 >= 0) {
            temp1 = 3;
            D_00360394 = 0;
            func_0027B9D0();
            while (temp1 && !(D_00360394 = func_0010E0F0(spA8, arg3, (u32)arg4) ? 0 : 1)) {
                if (--temp1) {
                    func_0012ABD0(func_001273A8((f32)func_0012ABC0() / 1000.0f));
                }
            }
            if (D_00360394) {
                func_0010E2E0(0, 0, &spA4);
                if (spA4 == arg4) {
                    temp2 = 3;
                    D_00360394 = 0;
                    func_0027B9D0();
                    while (temp2 && !(D_00360394 = func_0010DDB0(spA8) ? 0 : 1)) {
                        if (--temp2) {
                            func_0012ABD0(func_001273A8((f32)func_0012ABC0() / 1000.0f));
                        }
                    }
                    if (D_00360394) {
                        func_0010E2E0(0, 0, &spA4);
                        if (spA4 == 0) {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    if (spA8 >= 0) {
        temp3 = 3;
        D_00360394 = 0;
        func_0027B9D0();
        while (temp3 && !(D_00360394 = func_0010DDB0(spA8) ? 0 : 1)) {
            if (--temp3) {
                func_0012ABD0(func_001273A8((f32)func_0012ABC0() / 1000.0f));
            }
        }
        if (D_00360394) {
            func_0010E2E0(0, 0, &spA4);
        }
        spAC = 3;
        D_00360394 = 0;
        func_0027B9D0();
        while (spAC && !(D_00360394 = func_0010E998(arg0, arg1, (void *)arg2) ? 0 : 1)) {
            if (--spAC) {
                func_0012ABD0(func_001273A8((f32)func_0012ABC0() / 1000.0f));
            }
        }
        if (D_00360394) {
            func_0010E2E0(0, 0, &spA4);
        }
    }
    return 0;
}
