#include "common.h"

void func_002D2BB0(void *);
void func_002F2130(void *, s32);
void func_002FBA10(void *, s32);
void func_002FBC40(void *, s32);
extern u8 D_0035EA30[];

void **func_002FB970(void **arg0, s16 arg1) {
    void *temp;

    if (arg0 != NULL) {
        *arg0 = D_0035EA30;
        func_002FBC40((u8 *)arg0 + 0x48, -1);
        temp = (u8 *)arg0 + 0x34;
        if (temp != NULL && temp != NULL && temp != NULL) {
            func_002FBA10(temp, -1);
        }
        func_002F2130(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
