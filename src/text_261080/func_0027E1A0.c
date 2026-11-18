/* profile: o0_301_p */
#include "common.h"

void func_0027B9D0(void);
u32 func_0012ABC0(void);
s32 func_001273A8(f32);
void func_0012ABD0(s32);
s32 func_0010E5A0();
s32 func_0010E998();
void func_0010E2E0(s32, s32, s32 *);

extern u8 D_00360394;

typedef struct {
    u8 unk_00[0x20];
    u8 unk_20[18][0x40];
    u8 unk_4A0[0x1C];
} unk_func_0027E1A0_0;

s32 func_0027E1A0(s32 arg0, s32 arg1, void *arg2)
{
    unk_func_0027E1A0_0 unk_80;
    s32 unk_53C;
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;

    temp0 = 3;
    D_00360394 = 0;
    func_0027B9D0();
    while (temp0 && !(D_00360394 = func_0010E5A0(arg0, arg1, (void *)arg2, 0, 0x63, &unk_80) ? 0 : 1)) {
        if (--temp0) {
            func_0012ABD0(func_001273A8((f32)func_0012ABC0() / 1000.0f));
        }
    }
    if (D_00360394) {
        func_0010E2E0(0, 0, &unk_53C);
    } else {
        return 0;
    }

    if (unk_53C >= 0) {
        for (temp1 = 0; temp1 < unk_53C; temp1++) {
            temp2 = 3;
            D_00360394 = 0;
            func_0027B9D0();
            while (temp2 && !(D_00360394 = func_0010E998(arg0, arg1, (void *)unk_80.unk_20[temp1]) ? 0 : 1)) {
                if (--temp2) {
                    func_0012ABD0(func_001273A8((f32)func_0012ABC0() / 1000.0f));
                }
            }
            if (D_00360394) {
                func_0010E2E0(0, 0, &unk_53C);
                if (unk_53C != 0) {
                    return 0;
                }
            } else {
                return 0;
            }
        }
    }

    temp3 = 3;
    D_00360394 = 0;
    func_0027B9D0();
    while (temp3 && !(D_00360394 = func_0010E998(arg0, arg1, (void *)arg2) ? 0 : 1)) {
        if (--temp3) {
            func_0012ABD0(func_001273A8((f32)func_0012ABC0() / 1000.0f));
        }
    }
    if (D_00360394) {
        func_0010E2E0(0, 0, &unk_53C);
        if (unk_53C != 0) {
            return 0;
        }
    } else {
        return 0;
    }
    return 1;
}
