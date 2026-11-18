#include "common.h"

void *__register_global_object();
void func_002CD2A0();
void func_002CDB60();
s32 func_002F42C0();
s32 __sinit_CResData_cpp();
s32 func_002F4060();
void func_002EB6E0();
extern u8 D_0035BCB0[];
extern s32 D_00360624;
extern s8 D_00360628;
extern s32 D_0036062C;
extern u8 D_007BEC30[];

s32 func_002EB050(void) {
    s32 sp3C;
    s32 temp_s0;
    void *temp_s1;

    if (D_00360628 == 0) {
        temp_s1 = __register_global_object(&D_00360624, func_002CD2A0, D_007BEC30);
        func_002CDB60(temp_s1, D_0035BCB0, &sp3C);
        temp_s0 = func_002F42C0();
        D_0036062C = func_002F4060(temp_s0, temp_s1, __sinit_CResData_cpp(), 0x30, 2, func_002EB6E0, 0);
        D_00360628 = 1;
    }
    return D_0036062C;
}
