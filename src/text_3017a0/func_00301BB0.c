#include "common.h"
void *func_002D2BC0(s32);
void *func_00301CE0(void *, s32);
void *func_00301BB0(s32 arg0) {
    void *temp = func_002D2BC0(0xC);
    if (temp != 0) {
        temp = func_00301CE0(temp, arg0);
    }
    return temp;
}
