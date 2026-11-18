#include "common.h"

void func_00307FF0();
void func_00304B00();

void *func_002E8390(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_00307FF0((u8 *)arg0 + 4, -1);
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
