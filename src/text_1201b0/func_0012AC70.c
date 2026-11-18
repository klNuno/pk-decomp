#include "common.h"

typedef struct unk_func_0012AC70_0 {
    u8 pad_00[0x2C];
    s32 unk_2C;
    s32 unk_30;
} unk_func_0012AC70_0;

void func_0012ADB0();
void func_0012C3E0();
void func_00164C00();
void func_00164C20();
s32 func_00168FA0();
s8 func_00168FD0();
void func_00168FE0(s8);
void func_001D2820();
void func_001D28B0();
extern s16 D_0035F840;
extern s8 D_0035FA88;
extern unk_func_0012AC70_0 *D_003637D0[];

s32 func_0012AC70(s32 arg0, s32 arg1) {
    s16 i;
    unk_func_0012AC70_0 **p;
    s8 mode;
    s32 saved;

    saved = D_0035FA88;
    D_0035FA88 = 0;
    func_00164C00();
    mode = func_00168FD0();
    if (func_00168FA0() == 0) {
        func_00168FE0(0);
    }
    func_0012C3E0(arg0);
    p = D_003637D0;
    for (i = 0; i < D_0035F840; i++) {
        if ((p[0]->unk_30 |= 0x40000) != 0) {
            func_001D2820(arg0);
        }
        func_0012ADB0(arg0, p[0], arg1 & p[0]->unk_2C, 0);
        if ((p[0]->unk_30 |= 0x40000) != 0) {
            func_001D28B0(arg0);
        }
        p++;
    }
    func_00168FE0(mode);
    D_0035FA88 = saved;
    if (saved != 0) {
        func_00164C20();
    }
    return 1;
}
