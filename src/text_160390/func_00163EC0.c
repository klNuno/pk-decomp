#include "common.h"

void func_00285C10();
void func_00285D00(s32, s32, s32, s32);
void func_00285E30(f32, f32, f32, f32);
void func_00285E40(s32);
void func_002CCB60();
extern s32 D_0035F434;
extern f32 D_0035F438;
extern s32 D_0035FEA4;
extern s32 D_0035FEC0;

void func_00163EC0(void) {
    if (D_0035FEA4 == 0) {
        D_0035F434 = 1;
        D_0035F438 = 1.0f;
        D_0035FEC0 = 0;
        func_00285D00(1, 1, 1, 1);
        func_00285E30(0.0f, 0.0f, 0.0f, 0.0f);
        func_00285E40(0x4100);
        func_00285D00(1, 1, 1, 0);
        func_00285C10();
        func_002CCB60();
        func_00285D00(1, 1, 1, 1);
        func_00285E30(0.0f, 0.0f, 0.0f, 0.0f);
        func_00285E40(0x4100);
        func_00285D00(1, 1, 1, 0);
        func_00285C10();
        func_002CCB60();
        func_00285D00(1, 1, 1, 1);
        func_00285E30(0.0f, 0.0f, 0.0f, 0.0f);
        func_00285E40(0x4100);
        func_00285D00(1, 1, 1, 0);
        func_00285C10();
        func_002CCB60();
    }
}
