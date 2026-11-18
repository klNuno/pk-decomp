#include "common.h"

void c4sdk_malloc();
void func_00304B00(void *);

u8 *func_002F9810(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 + 0x4 != NULL) {
            c4sdk_malloc(arg0 + 0x4, 0);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
