#include "common.h"

void func_00301230();
void func_00304B00();

void *func_00301190(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (*(s32 *)((u8 *)arg0 + 4) != 0) {
            func_00301230(arg0, *(s32 *)((u8 *)arg0 + 4));
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
