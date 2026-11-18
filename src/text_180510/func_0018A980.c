#include "common.h"

void func_001893D0();
void func_00182010();
extern s32 D_003333E0[];

void func_0018A980(s32 arg0) {
    s32 i;
    s32 temp;
    s32 off;

    temp = (u8)arg0;
    for (i = 0, off = 0; i < 4; i++, off += 4) {
        if ((u8)(temp & 0xFE) == *(s32 *)((u8 *)D_003333E0 + off)) {
            func_001893D0(i);
        }
    }
    func_00182010();
}
