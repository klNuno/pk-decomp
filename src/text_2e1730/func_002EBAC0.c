#include "common.h"

void c4sdk_malloc(void *, s32);
void func_002D2BB0(void *);
void func_002E8F90(void *, s32);
void func_002E90D0(void *, s32);
void func_002E9230(void *, s32);

u8 *func_002EBAC0(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            if (arg0 + 0x44 != NULL) {
                c4sdk_malloc(arg0 + 0x44, 0);
            }
            if (arg0 + 0x10 != NULL) {
                if (arg0 + 0x40 != NULL) {
                    c4sdk_malloc(arg0 + 0x40, 0);
                }
                if (arg0 + 0x30 != NULL) {
                    func_002E9230(arg0 + 0x30, 0);
                }
                if (arg0 + 0x20 != NULL) {
                    func_002E9230(arg0 + 0x20, 0);
                }
                if (arg0 + 0x10 != NULL) {
                    func_002E90D0(arg0 + 0x10, 0);
                }
            }
            if (arg0 != NULL) {
                if (arg0 != NULL) {
                    func_002E8F90(arg0, 0);
                }
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
