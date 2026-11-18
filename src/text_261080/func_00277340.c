#include "common.h"

void func_0011B418(char *, ...);
extern char D_0034F0D0[];
extern f32 D_0035F5F0;

void func_00277340(u32 arg0) {
    D_0035F5F0 = 0.007874016f * arg0;
    if (D_0035F5F0 < 0.0f) {
        D_0035F5F0 = 0.0f;
    } else if (D_0035F5F0 > 1.0f) {
        D_0035F5F0 = 1.0f;
    }
    func_0011B418(D_0034F0D0, arg0);
}
