#include "common.h"

void *memset(void *, s32, u32);
extern u8 D_0036A010[];

void func_00165E30(s8 arg0) {
    void *temp;
    memset(temp = D_0036A010, arg0, 0x32);
}
