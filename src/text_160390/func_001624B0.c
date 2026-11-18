#include "common.h"

void func_00162570(void);
void func_001765D0(void);
void func_00177130(void);
void func_0018D910(s32);
void func_0019D220(void);
void func_002857F0(s32, s32, s32, s32);
void func_002CC7C0(void *);
void func_002CC950(s32, s32, s32, s32);
void func_002CCB30(s32);
extern u8 D_00349190[];
extern f32 D_0035F388;
extern f32 D_0035F41C;
extern f32 D_0035F420;
extern s32 D_0035F424;
extern s32 D_0035F428;
extern s32 D_0035F448;

void func_001624B0(void) {
    if (D_0035F448 == 0x32) {
        func_0018D910(D_0035F448);
        func_00162570();
        func_002CCB30(0x992);
        func_002CC950(0x64, 0x64, 0x280, 0x1C0);
        func_002857F0(0, 0, 0x280, 0x1C0);
        func_002CC7C0(D_00349190);
        D_0035F41C = 640.0f;
        D_0035F420 = 448.0f;
        D_0035F424 = 0x280;
        D_0035F428 = 0x1C0;
        func_00162570();
        func_001765D0();
        func_00177130();
        D_0035F448 = 0x3C;
        D_0035F388 = 1.0f / 60.0f;
        func_0019D220();
    }
}
