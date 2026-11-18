#include "common.h"

void func_002D7C10();
void func_002D2BB0();
extern u8 D_0035E4F8[];

void *func_002D7C70(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 0x58) = D_0035E4F8;
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                func_002D7C10(arg0, -1);
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
