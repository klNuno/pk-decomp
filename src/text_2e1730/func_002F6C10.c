#include "common.h"

void *__register_global_object(void *, void *, void *);
s32 func_002F3FB0();
void func_002CDB60(void *, void *, void *);
s32 func_002F4060(s32, void *, s32, s32, s32, void *, s32);
s32 func_002F42C0();
void func_002CD2A0();
void func_002F7020();
extern u8 D_0035C760[];
extern s32 D_00360700;
extern s8 D_00360704;
extern s32 D_00360708;
extern u8 D_007BF060[];

s32 func_002F6C10(void) {
    s32 temp_s0;
    void *temp_v0;
    s32 sp3C;

    if (!D_00360704) {
        temp_v0 = __register_global_object(&D_00360700, func_002CD2A0, D_007BF060);
        func_002CDB60(temp_v0, D_0035C760, &sp3C);
        temp_s0 = func_002F42C0();
        D_00360708 = func_002F4060(temp_s0, temp_v0, func_002F3FB0(), 0x30, 1, func_002F7020, 0);
        D_00360704 = 1;
    }
    return D_00360708;
}
