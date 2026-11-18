#include "common.h"

void *__register_global_object(void *, void *, void *);
s32 __sinit_CResData_cpp();
void func_002CDB60(void *, void *, void *);
s32 func_002F4060(s32, void *, s32, s32, s32, void *, s32);
s32 func_002F42C0();
void func_002CD2A0();
void func_002E7240();
extern u8 D_0035BBB0[];
extern s32 D_00360600;
extern s8 D_00360604;
extern s32 D_00360608;
extern u8 D_007BEB90[];

s32 func_002E72B0(void) {
    s32 temp_s0;
    void *temp_v0;
    s32 sp3C;

    if (!D_00360604) {
        temp_v0 = __register_global_object(&D_00360600, func_002CD2A0, D_007BEB90);
        func_002CDB60(temp_v0, D_0035BBB0, &sp3C);
        temp_s0 = func_002F42C0();
        D_00360608 = func_002F4060(temp_s0, temp_v0, __sinit_CResData_cpp(), 0x11C, 6, func_002E7240, 0);
        D_00360604 = 1;
    }
    return D_00360608;
}
