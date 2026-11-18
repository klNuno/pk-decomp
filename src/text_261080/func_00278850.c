#include "common.h"

extern s32 D_0035F448;
extern s32 D_00360330;
extern void *D_00360334;
extern u8 D_007A8180[];
void func_001623F0();
void *malloc(u32);
void func_00285B90(s32, u32);

void func_00278850(void) {
    D_00360330 = 0;
    if (D_0035F448 == 0x3C) {
        D_00360330 = 1;
        func_001623F0();
    }
    D_00360334 = malloc(0x20040);
    func_00285B90(0x10, (u32)D_007A8180);
}
