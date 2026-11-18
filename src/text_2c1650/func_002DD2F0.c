#include "common.h"

void func_002DD6C0(s32);

void func_002DD2F0(void *arg0, s8 arg1) {
    s32 temp_a0;
    s8 *temp_v1;

    if ((*(u8 *)((u8 *)arg0 + 0)) != 0) {
        temp_a0 = *(s32 *)((u8 *)arg0 + 8);
        if (temp_a0 != 0) {
            func_002DD6C0(temp_a0);
        }
    } else {
        temp_v1 = *(s8 **)((u8 *)arg0 + 0xC);
        if (temp_v1 != NULL) {
            *temp_v1 = arg1;
        }
    }
}
