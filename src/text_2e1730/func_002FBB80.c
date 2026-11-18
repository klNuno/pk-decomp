#include "common.h"

void *__register_global_object();
void func_002CD2A0();
void func_002CDB60();
s32 func_002F42C0();
s32 __sinit_CResData_cpp();
s32 func_002F4060();
extern u8 D_0035C898[];
extern s32 D_00360734;
extern s8 D_00360738;
extern s32 D_0036073C;
extern u8 D_007BF1B0[];

s32 func_002FBB80(void) {
    s32 sp3C;
    s32 temp_s0;
    void *temp_s1;

    if (D_00360738 == 0) {
        temp_s1 = __register_global_object(&D_00360734, func_002CD2A0, D_007BF1B0);
        func_002CDB60(temp_s1, D_0035C898, &sp3C);
        temp_s0 = func_002F42C0();
        D_0036073C = func_002F4060(temp_s0, temp_s1, __sinit_CResData_cpp(), 0x4C, 2, 0, 0);
        D_00360738 = 1;
    }
    return D_0036073C;
}
