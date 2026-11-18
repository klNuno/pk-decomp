#include "common.h"

void *__register_global_object();
void func_002CD2A0();
void func_002CDB60();
s32 func_002F42C0();
s32 func_002FBB80();
s32 func_002F4060();
void func_002F7AF0();
extern u8 D_0035C7A0[];
extern s32 D_00360710;
extern s8 D_00360714;
extern s32 D_00360718;
extern u8 D_007BF090[];

s32 func_002F7690(void) {
    s32 sp3C;
    s32 temp_s0;
    void *temp_s1;

    if (D_00360714 == 0) {
        temp_s1 = __register_global_object(&D_00360710, func_002CD2A0, D_007BF090);
        func_002CDB60(temp_s1, D_0035C7A0, &sp3C);
        temp_s0 = func_002F42C0();
        D_00360718 = func_002F4060(temp_s0, temp_s1, func_002FBB80(), 0x58, 1, func_002F7AF0, 0);
        D_00360714 = 1;
    }
    return D_00360718;
}
