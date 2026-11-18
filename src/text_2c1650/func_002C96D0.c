/* profile: opt_300 */
#include "common.h"

void func_002C9680(s32, s32, s32);
void func_002C94D0(s32, s32, s32);
void func_002B11B0(void *);
void func_002C9920(s32);
extern s32 D_007B8EC8[];
extern s32 D_007B24E8[];
extern s32 D_007B8EBC[];
extern u32 D_007B8ECC[];
extern u32 D_007B8FB0[];
extern s32 D_007B8F98[];
extern s32 D_007B8F9C[];
extern s32 D_007B8FA0[];
extern s32 D_007B8FA4[];
extern s32 D_007B8FB4[];
extern s32 D_007B8FB8[];
extern s32 D_007B8FBC[];
extern u8 D_007B2370[];

void func_002C96D0(s32 arg0) {
    if (D_007B8EC8[0] <= 0) {
        D_007B8EC8[0] = 0;
        return;
    }
    if (D_007B24E8[0] & 8) {
        switch (D_007B8EBC[0]) {
        case 5: {
            s32 m;
            s32 n;

            n = D_007B8EC8[0] - 3;
            m = n + n * 2;
            if (D_007B8ECC[0] < D_007B8FB0[0]) {
                func_002C9680(D_007B8F98[0], n, m);
                func_002C9680(D_007B8F9C[0], n, m);
                func_002C9680(D_007B8FA0[0], n, m);
                func_002C9680(D_007B8FA4[0], n, m);
            } else {
                func_002C9680(D_007B8FB0[0], n, m);
                func_002C9680(D_007B8FB4[0], n, m);
                func_002C9680(D_007B8FB8[0], n, m);
                func_002C9680(D_007B8FBC[0], n, m);
            }
            D_007B8EC8[0] = (D_007B8EC8[0] - 2) * 3;
            break;
        }
        case 6: {
            s32 m;
            s32 n;

            n = D_007B8EC8[0] - 3;
            m = n + n * 2;
            if (D_007B8ECC[0] < D_007B8FB0[0]) {
                func_002C94D0(D_007B8F98[0], n, m);
                func_002C94D0(D_007B8F9C[0], n, m);
                func_002C94D0(D_007B8FA0[0], n, m);
                func_002C94D0(D_007B8FA4[0], n, m);
            } else {
                func_002C94D0(D_007B8FB0[0], n, m);
                func_002C94D0(D_007B8FB4[0], n, m);
                func_002C94D0(D_007B8FB8[0], n, m);
                func_002C94D0(D_007B8FBC[0], n, m);
            }
            D_007B8EC8[0] = (D_007B8EC8[0] - 2) * 3;
            break;
        }
        }
        func_002B11B0(D_007B2370);
    }
    func_002C9920(arg0);
}
