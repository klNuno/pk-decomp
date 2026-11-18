#include "common.h"

void c4sdk_malloc();
void func_00304B00(void *);

void *func_002CD2A0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        c4sdk_malloc(arg0, 0);
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
