#include "common.h"
void *func_002D2BC0(s32);
void *func_002FF1F0(void *, s32);
void *func_002FEF90(s32 arg0) {
    void *temp = func_002D2BC0(0xC);
    if (temp != 0) {
        temp = func_002FF1F0(temp, arg0);
    }
    return temp;
}
