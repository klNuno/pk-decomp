#include "common.h"

void func_00308B80(s32);
void func_00308BE0(s32);

void func_00304670(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0);
    if (temp_a0 != 0) {
        func_00308BE0(temp_a0);
    }
    (*(s32 *)((u8 *)arg0 + 0x10)) = (s32) ((*(s32 *)((u8 *)arg0 + 0x10)) - 1);
    if ((*(s32 *)((u8 *)arg0 + 0x10)) == 0) {
        (*(s32 *)((u8 *)arg0 + 0xC)) = (s32) (*(s32 *)((u8 *)arg0 + 8));
    }
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0);
    if (temp_a0_2 != 0) {
        func_00308B80(temp_a0_2);
    }
}
