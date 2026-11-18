#include "common.h"

void func_00285AE0();
void func_00285B10();
void func_00285B20();
extern f32 D_00332FC0[];
extern f32 D_00332FD0[];
extern f32 D_00332FE0[];
extern f32 D_00332FE4[];
extern f32 D_00332FE8[];

void func_00177250(void) {
    f32 sp10[4];
    f32 sp20[4];
    f32 x;
    f32 y;
    f32 z;

    x = 0.3f;
    y = 0.2f;
    z = -1.0f;
    sp20[0] = -x;
    sp20[1] = -y;
    sp20[2] = -z;
    sp20[3] = 0.0f;
    sp10[0] = 0.4f;
    sp10[1] = 0.4f;
    sp10[2] = 0.4f;
    sp10[3] = 1.0f;
    func_00285B20(0x4000, 0x1200, D_00332FC0);
    func_00285B20(0x4000, 0x1201, sp10);
    func_00285B20(0x4000, 0x1202, D_00332FD0);
    func_00285B10(0x4000, 0x1205, 0x40);
    func_00285B20(0x4000, 0x1203, sp20);
    D_00332FE0[0] = D_00332FE4[0] = D_00332FE8[0] = 0.1f;
    func_00285AE0(0x404, 0x1200, D_00332FE0);
}
