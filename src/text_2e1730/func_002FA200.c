#include "common.h"

void *__register_global_object(void *, void *, void *);
s32 func_002F3FB0();
void func_002CDB60(void *, void *, void *);
s32 func_002F4060(s32, void *, s32, s32, s32, void *, s32);
s32 func_002F42C0();
void func_002CD2A0();
void func_002FAC80();
extern u8 D_0035C880[];
extern s32 D_00360724;
extern s8 D_00360728;
extern s32 D_0036072C;
extern u8 D_007BF1A0[];

s32 func_002FA200(void) {
    s32 sp3C;
    void *temp_v0;
    if (D_00360728 == 0) {
        temp_v0 = __register_global_object(&D_00360724, func_002CD2A0, D_007BF1A0);
        func_002CDB60(temp_v0, D_0035C880, &sp3C);
        D_0036072C = func_002F4060(func_002F42C0(), temp_v0, func_002F3FB0(), 0x30, 2, func_002FAC80, 0);
        D_00360728 = 1;
    }
    return D_0036072C;
}
