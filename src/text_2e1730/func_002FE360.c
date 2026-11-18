#include "common.h"

void func_002FD5E0();
void func_002D2BB0();
extern s32 D_0035EA80[];

void *func_002FE360(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((u8 *)arg0 + 0x18) = D_0035EA80;
        func_002FD5E0(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
