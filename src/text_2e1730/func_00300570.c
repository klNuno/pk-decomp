#include "common.h"
void *func_002D2BC0(s32);
void *func_003007B0(void *, s32);
void *func_00300570(s32 arg0) {
    void *temp = func_002D2BC0(0xC);
    if (temp != 0) {
        temp = func_003007B0(temp, arg0);
    }
    return temp;
}
