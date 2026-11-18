#include "common.h"

s32 func_001C00A0();
extern s16 D_0035F840;
extern s16 D_0035F844;
extern u8 D_0035F8A0;
extern s32 D_00363750[];
extern s32 D_003637D0[];
extern u8 D_00364E30[];

void func_0012DE60(s32 arg0) {
    s32 i;
    s32 n;

    if (arg0 != 0) {
        n = D_0035F840;
        if (n != 0) {
            for (i = 0; i < (s16)n; i++) {
                D_00363750[D_0035F844] = D_003637D0[i];
                D_0035F844++;
                D_00364E30[i] = D_0035F8A0;
            }
            D_0035F840 = 0;
        }
        D_0035F8A0++;
    } else {
        D_0035F8A0--;
        if (D_0035F844 != 0) {
            D_0035F840 = 0;
            while (D_0035F844 > 0 && D_00364E30[D_0035F844 - 1] == D_0035F8A0) {
                if (func_001C00A0(D_00363750[D_0035F844 - 1])) {
                    D_003637D0[D_0035F840] = D_00363750[D_0035F844 - 1];
                    D_0035F840++;
                }
                D_0035F844--;
            }
        }
    }
}
