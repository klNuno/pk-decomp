#include "common.h"

void func_002B4230();
void func_002B44E0(s32);
extern u8 D_007B7B98[];
extern u8 D_007B7B99[];
extern u8 D_007B7B9A[];
extern u8 D_007B7B9B[];
extern u8 D_007B7B9C[];

void func_002B4490(void) {
    D_007B7B98[0] = 1;
    D_007B7B9A[0] = 1;
    D_007B7B99[0] = 1;
    D_007B7B9B[0] = 1;
    D_007B7B9C[0] = 1;
    func_002B4230();
    func_002B44E0(-1);
}
