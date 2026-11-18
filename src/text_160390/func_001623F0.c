#include "common.h"

void func_0018D910();
void func_00162570();
void func_002CCB30(s32);
void func_002CC950(s32, s32, s32, s32);
void func_002857F0(s32, s32, s32, s32);
void func_002CC7C0(void *);
void func_001765D0();
void func_00177130();
void func_0019D220();
extern u8 D_00349190[];
extern f32 D_0035F388;
extern f32 D_0035F41C;
extern f32 D_0035F420;
extern s32 D_0035F424;
extern s32 D_0035F428;
extern s32 D_0035F448;

void func_001623F0(void) {
    if (D_0035F448 == 60) {
        func_0018D910();
        func_00162570();
        func_002CCB30(0x992);
        func_002CC950(100, 100, 0x200, 0x200);
        func_002857F0(0, 0, 0x200, 0x200);
        func_002CC7C0(D_00349190);
        D_0035F41C = 512.0f;
        D_0035F420 = 512.0f;
        D_0035F424 = 0x200;
        D_0035F428 = 0x200;
        func_00162570();
        func_001765D0();
        func_00177130();
        D_0035F448 = 50;
        D_0035F388 = 0.02f;
        func_0019D220();
    }
}
