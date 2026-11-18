#include "common.h"

void func_00119548();
extern s32 D_007C9250[];
extern s32 D_003607F0;
extern s32 D_003607EC;

void func_00309FD0(void) {
    s32 i;
    s32 off;
    s32 *p;

    for (i = 0, off = 0; i < 4; i++, off += 4) {
        p = (s32 *)((u8 *)D_007C9250 + off);
        if (*p != 0) {
            func_00119548(*p);
        }
        *p = 0;
    }
    D_003607F0 = 0;
    D_003607EC = 0;
}
