#include "common.h"

void func_0031A340(s32, s32);

void func_00133980(void *arg0) {
    s32 temp_a1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 8);
    (*(s32 *)((u8 *)arg0 + 8)) = (s32) (temp_a1 - 1);
    if (temp_a1 == 0) {
        (*(s32 *)((u8 *)arg0 + 4)) = -1;
        func_0031A340((*(s32 *)((u8 *)arg0 + 0)), temp_a1);
    }
}
