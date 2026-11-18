/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0030C170_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_0030C170_0;

void func_0010C720(s32);
void func_0010CC80(s32);
s32 func_0010CF40(s32, s32, void *, s32 *);
s32 func_0010D1B8(void);
s32 func_0030BF60(s32 *, s32 *, s8 *);
extern s32 D_00360838;
extern s32 D_0036083C;
extern s8 D_00360840;
extern u8 D_007CAF00[];
extern u8 D_007CAF9E[];
extern u8 D_007CAF9F[];
extern u8 D_007CAFA0[];
extern u8 D_007CAFA1[];
extern u8 D_007CAFA6[];
extern u8 D_007CAFA7[];
extern u8 D_007CAFA8[];
extern u8 D_007CAFA9[];

s32 func_0030C170(unk_func_0030C170_0 *arg0, s8 *arg1) {
    s8 buf[12];
    s32 sector;
    s32 size;
    s32 i;
    s8 *p;
    s32 r;

    if (*arg1 != 0x5C) {
        return 0;
    }
    if (D_00360840 == 0) {
        D_0036083C = 0;
        D_00360840 = 1;
    }
    if (D_0036083C == 0) {
        func_0010CC80(0);
        do {
            do {
                func_0010CC80(0);
            } while (func_0010CF40(0x10, 1, (void *)D_007CAF00, &D_00360838) == 0);
            func_0010C720(0);
        } while (func_0010D1B8() != 0);
        D_0036083C = 1;
    }
    sector = D_007CAF9E[0] + (D_007CAF9F[0] << 8) + (D_007CAFA0[0] << 16) + (D_007CAFA1[0] << 24);
    size = D_007CAFA6[0] + (D_007CAFA7[0] << 8) + (D_007CAFA8[0] << 16) + (D_007CAFA9[0] << 24);
    size = (size - 1) / 2048 + 1;
    for (i = 0; i < 8; i++) {
        buf[0] = 0;
        p = buf;
        arg1++;
        while (*arg1 != 0x5C && *arg1 != 0) {
            *p++ = *arg1++;
        }
        *p = 0;
        if (*arg1 == 0) {
            r = func_0030BF60(&sector, &size, buf);
            if (r != 0) {
                arg0->unk_00 = sector;
                arg0->unk_04 = r;
                return 1;
            }
            return 0;
        }
        if (func_0030BF60(&sector, &size, buf) == 0) {
            return 0;
        }
    }
    return 0;
}
