#include "common.h"

s32 __register_global_object();
void func_002CD2A0();
void func_002CDB60();
s32 func_002F42C0();
s32 func_002F4060();
extern u8 D_0035C300[];
extern s32 D_003606C4;
extern s8 D_003606C8;
extern s32 D_003606CC;
extern u8 D_007BEF88[];

s32 func_002F4C80(void) {
    s32 tmp;
    s32 obj;

    if (D_003606C8 == 0) {
        obj = __register_global_object(&D_003606C4, func_002CD2A0, D_007BEF88);
        func_002CDB60(obj, D_0035C300, &tmp);
        D_003606CC = func_002F4060(func_002F42C0(), obj, 0, 4, 0, 0, 0);
        D_003606C8 = 1;
    }
    return D_003606CC;
}
