/* profile: o0 */
#include "common.h"

void func_00168B30();
void func_00168A10();

void *func_00239960(s32 arg0, void *arg1) {
    s32 temp;

    temp = *(s32 *)((u8 *)arg1 - 8);
    if (temp == 0x220) {
        func_00168B30();
    } else {
        func_00168A10();
    }
    return arg1;
}
