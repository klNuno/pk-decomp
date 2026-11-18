#include "common.h"

extern u8 D_007B0E4C[];
extern void *D_007B0E44[];
extern void *D_007B0E48[];
extern s32 D_007B0E40[];
extern u8 D_007B09F0[];
extern u8 D_007B09E0[];
void func_002C1EE0();

void func_002C1CD0(void) {
    D_007B0E40[0] = 1;
    D_007B0E4C[0] = 0;
    D_007B0E44[0] = D_007B09F0;
    D_007B0E48[0] = D_007B09E0;
    func_002C1EE0(D_007B0E48[0], 1, 0, 0, 0, 0, 0, 0);
}
