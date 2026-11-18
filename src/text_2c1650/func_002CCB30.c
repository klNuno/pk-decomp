#include "common.h"

void func_002C7420();
extern s32 D_0035F658;
extern u8 D_003604C8;

void func_002CCB30(s32 arg0) {
    D_0035F658 = arg0;
    if (D_003604C8 == 0) {
        D_003604C8 = 1;
        func_002C7420();
    }
}
