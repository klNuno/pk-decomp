#include "common.h"

typedef unsigned int unk_u128 __attribute__((mode(TI)));

extern s32 D_007B24E4[];
extern s32 D_007B8EC8[];
extern unk_u128 *D_007B8F98[];
extern unk_u128 *D_007B8F9C[];
extern unk_u128 *D_007B8FA0[];
extern unk_u128 *D_007B8FA4[];
extern unk_u128 *D_007B8FA8[];
extern unk_u128 *D_007B8FAC[];

#define EXPAND(d, s)      \
    d[-1] = s[-1];        \
    d[-2] = s[-2];        \
    d[-4] = s[-1];        \
    d[-3] = s[-3];        \
    d[-5] = s[-3];        \
    d[-6] = s[-4];

void func_0029D500(void) {
    unk_u128 *d0;
    unk_u128 *d1;
    unk_u128 *d2;
    unk_u128 *d3;
    unk_u128 *d4;
    unk_u128 *d5;
    s32 n;
    s32 i;
    unk_u128 *s0;
    unk_u128 *s1;
    unk_u128 *s2;
    unk_u128 *s3;
    unk_u128 *s4;
    unk_u128 *s5;

    n = D_007B8EC8[0] >> 2;
    s0 = D_007B8F98[0];
    d0 = s0 + n * 6;
    s0 += D_007B8EC8[0];
    s1 = D_007B8F9C[0];
    d1 = s1 + n * 6;
    s1 += D_007B8EC8[0];
    s2 = D_007B8FA0[0];
    d2 = s2 + n * 6;
    s2 += D_007B8EC8[0];
    s3 = D_007B8FA4[0];
    d3 = s3 + n * 6;
    s3 += D_007B8EC8[0];
    s4 = D_007B8FA8[0];
    d4 = s4 + n * 6;
    s4 += D_007B8EC8[0];
    s5 = D_007B8FAC[0];
    d5 = s5 + n * 6;
    s5 += D_007B8EC8[0];
    for (i = 0; i < n; i++) {
        EXPAND(d0, s0)
        if (D_007B24E4[0] & 0x400) {
            EXPAND(d1, s1)
        } else {
            EXPAND(d2, s2)
            EXPAND(d4, s4)
        }
        EXPAND(d3, s3)
        EXPAND(d5, s5)
        d0 -= 6;
        d1 -= 6;
        d2 -= 6;
        d4 -= 6;
        s0 -= 4;
        s1 -= 4;
        s2 -= 4;
        s4 -= 4;
        s3 -= 4;
        d3 -= 6;
        s5 -= 4;
        d5 -= 6;
    }
    D_007B8EC8[0] = n * 6;
}
