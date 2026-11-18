#include "common.h"

void c4sdk_malloc();
void func_00302260();
void func_002D2BB0();
extern u8 D_0035ED00[];

void **func_00302020(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_0035ED00;
        if ((u8 *)arg0 + 0x18 != NULL) {
            c4sdk_malloc((u8 *)arg0 + 0x18, 0);
        }
        func_00302260(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
