#include "common.h"

void *__register_global_object(void *, void *, void *);
void func_002CD2A0();
void func_002CDB60(void *, char *, void *);
s32 func_002F42C0();
s32 func_002F4060(s32, void *, s32, s32, s32, s32, s32);
extern s32 D_003606C4;
extern s8 D_003606C8;
extern s32 D_003606CC;
extern u8 D_007BEF88[];
extern char D_0035C300[];

s32 func_002F4BF0(void) {
    s32 sp2C;
    void *temp;

    if (D_003606C8 == 0) {
        temp = __register_global_object(&D_003606C4, (void *)func_002CD2A0, D_007BEF88);
        func_002CDB60(temp, D_0035C300, &sp2C);
        D_003606CC = func_002F4060(func_002F42C0(), temp, 0, 4, 0, 0, 0);
        D_003606C8 = 1;
    }
    return D_003606CC;
}
