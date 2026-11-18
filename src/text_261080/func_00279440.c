#include "common.h"

void func_0010D4C8();
void func_0031E6A8(s32);
void func_003213A0(s32);

s32 func_00279440(void *arg0) {
    if ((*(s32 *)((u8 *)arg0 + 0)) != 0) {
        func_0010D4C8();
        func_003213A0((*(s32 *)((u8 *)arg0 + 0x2C)));
    } else {
        func_0031E6A8((*(s32 *)((u8 *)arg0 + 0x30)));
    }
    return 1;
}
