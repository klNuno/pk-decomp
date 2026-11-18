#include "common.h"

s32 func_0016D000();
s32 func_0019C120();
extern f32 D_0035FAC8;
extern s32 D_0035FACC;
extern f32 D_0035FAE4;

void func_00166810(f32 fparg0) {
    f32 temp_f1;

    if ((func_0019C120() == 0) && (func_0016D000() == 0)) {
        D_0035FAE4 = fparg0;
        temp_f1 = D_0035FAC8 + fparg0;
        D_0035FAC8 = temp_f1;
        if (!(temp_f1 <= 1e7f)) {
            D_0035FAC8 = 0.0f;
        }
        D_0035FACC += 1;
    }
}
