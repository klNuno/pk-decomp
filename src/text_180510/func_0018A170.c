#include "common.h"

void *memcpy(void *, const void *, u32);
void func_001DA2D0(s32, u8 *, s32);
extern s32 D_0035FDD0;
extern s32 D_0035FDD4;
extern u8 D_003FDCA0[];

void func_0018A170(s32 arg0, u8 *arg1, u32 arg2) {
    s32 var_s3;

    if (D_0035FDD4 + arg2 > D_0035FDD0) {
        var_s3 = 0;
        if (D_0035FDD4 < D_0035FDD0) {
            var_s3 = D_0035FDD0 - D_0035FDD4;
            memcpy(arg1, D_003FDCA0 + D_0035FDD4, var_s3);
        }
        func_001DA2D0(arg0, D_003FDCA0, 0x5000);
        arg2 -= var_s3;
        D_0035FDD4 = 0;
        D_0035FDD0 = 0x5000;
        if (arg2 != 0) {
            memcpy(arg1 + var_s3, D_003FDCA0, arg2);
            D_0035FDD4 += arg2;
        }
    } else {
        memcpy(arg1, D_003FDCA0 + D_0035FDD4, arg2);
        D_0035FDD4 += arg2;
    }
}
