#include "common.h"

void c4sdk_malloc();
void func_00304B00(void *);

u8 *func_002D2190(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 + 0xC != NULL) {
            c4sdk_malloc(arg0 + 0xC, 0);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
