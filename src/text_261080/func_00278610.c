#include "common.h"

extern s32 D_00360330;
extern s32 D_00360334;
extern u8 D_007A8180[];

void func_00285AC0(s32);
void func_00285B00(void);
void func_00285148(f32, f32, f32, f32);
void func_0016BED0(void);
void func_00285C80(s32);
void func_00285D00(s32, s32, s32, s32);
void func_00285CA0(s32);
void func_00285C50(s32);
void func_00285E60(s32, s32);
void func_00285E80(s32);
void func_00285D70(f32, f32, f32, f32);
void func_002858E0(f32, f32);
void func_00285C30(void);
void func_00285C00(void);
void func_00285C10(void);
void func_002CCB60(void);
void func_00285CC0(s32, void *);
void func_00119548(s32);
void func_001624B0(void);

void func_00278610(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        func_00285AC0(0x1701);
        func_00285B00();
        func_00285148(0.0f, 100.0f, 100.0f, 0.0f);
        func_00285AC0(0x1700);
        func_00285B00();
        func_0016BED0();
        func_00285C80(0xB71);
        func_00285C80(0xB57);
        func_00285C80(0xDE1);
        func_00285C80(0xBC0);
        func_00285C80(0xB50);
        func_00285C80(0xB60);
        func_00285C80(0xC11);
        func_00285C80(0xB44);
        func_00285D00(1, 1, 1, 1);
        func_00285CA0(0);
        func_00285C50(0xBE2);
        func_00285E60(0x302, 0x303);
        func_00285C50(0xBE2);
        func_00285E80(4);
        func_00285D70(0.0f, 0.0f, 0.0f, 1.0f);
        func_002858E0(0.0f, 0.0f);
        func_00285D70(0.0f, 0.0f, 0.0f, 1.0f);
        func_002858E0(100.0f, 0.0f);
        func_00285D70(0.0f, 0.0f, 0.0f, 1.0f);
        func_002858E0(100.0f, 100.0f);
        func_00285D70(0.0f, 0.0f, 0.0f, 1.0f);
        func_002858E0(0.0f, 0.0f);
        func_00285D70(0.0f, 0.0f, 0.0f, 1.0f);
        func_002858E0(100.0f, 100.0f);
        func_00285D70(0.0f, 0.0f, 0.0f, 1.0f);
        func_002858E0(0.0f, 100.0f);
        func_00285C30();
        func_00285D00(1, 1, 1, 0);
        func_00285C00();
        func_00285C10();
        func_002CCB60();
    }
    func_00285CC0(0x10, D_007A8180);
    func_00119548(D_00360334);
    if (D_00360330 != 0) {
        D_00360330 = 0;
        func_001624B0();
    }
}
