#include "common.h"

void *func_002D2BC0(s32);
void *func_002FF680(void *, s32);

void *func_002FF4C0(s32 arg0) {
    void *temp = func_002D2BC0(0xC);

    if (temp) {
        temp = func_002FF680(temp, arg0);
    }
    return temp;
}
