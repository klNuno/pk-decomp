#include "common.h"

typedef __int128 unk_func_0028D0A0_0;

extern s32 D_007B24E4[];
extern s32 D_007B8EC8[];
extern u32 D_007B8ECC[];
extern unk_func_0028D0A0_0 *D_007B8F98[];
extern unk_func_0028D0A0_0 *D_007B8F9C[];
extern unk_func_0028D0A0_0 *D_007B8FA0[];
extern unk_func_0028D0A0_0 *D_007B8FA4[];
extern unk_func_0028D0A0_0 *D_007B8FA8[];
extern unk_func_0028D0A0_0 *D_007B8FAC[];
extern unk_func_0028D0A0_0 *D_007B8FB0[];
extern unk_func_0028D0A0_0 *D_007B8FB4[];
extern unk_func_0028D0A0_0 *D_007B8FB8[];
extern unk_func_0028D0A0_0 *D_007B8FBC[];
extern unk_func_0028D0A0_0 *D_007B8FC0[];
extern unk_func_0028D0A0_0 *D_007B8FC4[];

#define EXPAND(dst, src)         \
    do {                        \
        (dst)[-1] = (src)[-1];  \
        (dst)[-2] = (src)[-2];  \
        (dst)[-4] = (src)[-1];  \
        (dst)[-3] = (src)[-3];  \
        (dst)[-5] = (src)[-3];  \
        (dst)[-6] = (src)[-4];  \
    } while (0)

void func_0028D0A0(void) {
    unk_func_0028D0A0_0 *unk_00;
    unk_func_0028D0A0_0 *unk_20;
    unk_func_0028D0A0_0 *unk_04;
    unk_func_0028D0A0_0 *unk_24;
    unk_func_0028D0A0_0 *unk_08;
    unk_func_0028D0A0_0 *unk_28;
    unk_func_0028D0A0_0 *unk_0C;
    unk_func_0028D0A0_0 *unk_2C;
    unk_func_0028D0A0_0 *unk_10;
    unk_func_0028D0A0_0 *unk_30;
    unk_func_0028D0A0_0 *unk_14;
    s32 n;
    s32 i;
    unk_func_0028D0A0_0 *unk_1C;
    s32 unk_18;
    u32 unk_34;

    unk_18 = D_007B8EC8[0];
    n = unk_18 >> 2;
    unk_34 = *(volatile u32 *)D_007B8ECC;
    unk_1C = *(unk_func_0028D0A0_0 *volatile *)D_007B8FB0;
    if (unk_34 < (u32)unk_1C) {
        unk_1C = D_007B8F98[0];
        unk_20 = D_007B8F9C[0];
        unk_24 = D_007B8FA0[0];
        unk_28 = D_007B8FA4[0];
        unk_2C = D_007B8FA8[0];
        unk_30 = D_007B8FAC[0];
    } else {
        unk_20 = D_007B8FB4[0];
        unk_24 = D_007B8FB8[0];
        unk_28 = D_007B8FBC[0];
        unk_2C = D_007B8FC0[0];
        unk_30 = D_007B8FC4[0];
    }
    unk_00 = unk_1C + n * 6;
    unk_04 = unk_20 + n * 6;
    unk_08 = unk_24 + n * 6;
    unk_0C = unk_28 + n * 6;
    unk_10 = unk_2C + n * 6;
    unk_14 = unk_30 + n * 6;
    unk_1C += unk_18;
    unk_20 += unk_18;
    unk_24 += unk_18;
    unk_28 += unk_18;
    unk_2C += unk_18;
    unk_30 += unk_18;
    for (i = 0; i < n; i++) {
        EXPAND(unk_00, unk_1C);
        if (D_007B24E4[0] & 0x400) {
            EXPAND(unk_04, unk_20);
        } else {
            EXPAND(unk_08, unk_24);
            EXPAND(unk_10, unk_2C);
        }
        unk_00 -= 6;
        unk_04 -= 6;
        unk_08 -= 6;
        unk_10 -= 6;
        unk_1C -= 4;
        unk_20 -= 4;
        unk_24 -= 4;
        unk_2C -= 4;
        EXPAND(unk_0C, unk_28);
        unk_28 -= 4;
        unk_0C -= 6;
        EXPAND(unk_14, unk_30);
        unk_30 -= 4;
        unk_14 -= 6;
    }
    D_007B8EC8[0] = n * 6;
}
