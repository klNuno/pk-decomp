#include "common.h"

extern s32 D_0035FCF8;
extern s32 D_0035FCFC;
extern s32 D_0035FD00;
void func_00285D70(f32, f32, f32, f32);
void func_00285C30();

void func_0017D8C0(void) {
    if (D_0035FCF8 != 0) {
        func_00285D70(0.5f, 0.5f, 0.5f, 1.0f);
        func_00285C30();
        D_0035FD00 = 0;
        D_0035FCF8 = 0;
        D_0035FCFC = 0;
    }
}
