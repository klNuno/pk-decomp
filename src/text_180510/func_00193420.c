#include "common.h"

extern f32 D_0035F4FC;
extern f32 D_0035F500;

void func_00193420(f32 arg0) {
    D_0035F4FC = arg0;
    if (arg0) {
        D_0035F500 = 1.0f / arg0;
    }
}
