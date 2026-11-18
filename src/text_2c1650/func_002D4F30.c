#include "common.h"

void *func_002D6290();
void *func_002D6950(void *, s32);
void func_002D75C0();

void func_002D4F30(s32 arg0, s32 arg1) {
    void *temp;

    temp = func_002D6950(func_002D6290(), arg1);
    if (temp != 0) {
        func_002D75C0(temp, 1, arg0);
    }
}
