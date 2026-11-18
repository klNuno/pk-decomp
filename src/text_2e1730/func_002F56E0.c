#include "common.h"

void c4sdk_malloc(void *, s32);
void func_00304B00(void *);

void *func_002F56E0(u8 *arg0, s16 arg1) {
    u8 *temp;

    if (arg0 != 0) {
        if (arg0 + 4 != 0) {
            temp = arg0 + 0x10;
            if (temp != 0) {
                c4sdk_malloc(temp, 0);
            }
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
