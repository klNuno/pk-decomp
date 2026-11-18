#include "common.h"

void func_002E92E0(u8 *, s32);
void func_002E9330(u8 *, s32);
s32 *func_002E9380(u8 *);
void func_002E9A20(u8 *, s32);
void func_00304B00(u8 *);

u8 *func_002E9230(u8 *arg0, s16 arg1) {
    if (arg0 != 0) {
        if (arg0 != 0) {
            if (arg0 != 0) {
                if (*func_002E9380(arg0 + 4) != 0) {
                    func_002E9A20(arg0, *func_002E9380(arg0 + 4));
                }
                if (arg0 + 4 != 0) {
                    func_002E9330(arg0 + 4, 0);
                }
                if (arg0 != 0) {
                    func_002E92E0(arg0, 0);
                }
            }
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
