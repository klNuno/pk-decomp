#include "common.h"

extern u8 D_0035EA90[];
void func_002FE680(u8 *, s32);
void func_002D2BB0(u8 *);

u8 *func_002FE600(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(u8 **)(arg0 + 0x30) = D_0035EA90;
        if (arg0 + 0x34 != NULL) {
            if (arg0 + 0x34 != NULL) {
                if (arg0 + 0x34 != NULL) {
                    func_002FE680(arg0 + 0x34, -1);
                }
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
