#include "common.h"

extern s8 D_0035F978;
extern s8 D_0035F980;
extern u32 D_0035F988;
extern f32 D_0035F98C;
extern f32 D_0035F990;
extern f32 D_0035F994;
extern f32 D_0035F998;
extern f32 D_0035F9AC;
extern u32 D_005AB800[];

void func_0015D9A0(void) {
    u32 now;
    f32 temp;

    if (D_0035F980 != 0) {
        now = D_005AB800[0];
        D_0035F98C = D_0035F998 * (f32)(now - D_0035F988);
        temp = D_0035F98C;
        D_0035F994 = D_0035F990;
        D_0035F990 = D_0035F990 + temp;
        if (D_0035F978 == 1) {
            if (D_0035F990 > 1.0f) {
                D_0035F990 = 1.0f;
            }
        } else if (D_0035F978 == 2) {
            if (D_0035F9AC >= 0.0f) {
                if (D_0035F990 > D_0035F9AC) {
                    D_0035F990 = D_0035F9AC;
                }
            } else if (D_0035F9AC <= 0.0f) {
                if (D_0035F990 < D_0035F9AC) {
                    D_0035F990 = D_0035F9AC;
                }
            }
        } else {
            D_0035F980 = 0;
        }
        D_0035F988 = now;
    }
}
