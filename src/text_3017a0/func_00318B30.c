#include "common.h"

void func_00304B00(void *);
void func_003168D0(void *, s32);
void func_003183A0(void *, s32);
void func_00318AB0(void *, s32);
extern u8 D_0035F260[];

u8 *func_00318B30(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)(arg0 + 0xAC) = D_0035F260;
        func_00318AB0(arg0 + 0xA4, -1);
        func_003168D0(arg0 + 0x98, -1);
        func_003168D0(arg0 + 0x8C, -1);
        func_003168D0(arg0 + 0x80, -1);
        func_003168D0(arg0 + 0x74, -1);
        func_003168D0(arg0 + 0x68, -1);
        func_003183A0(arg0 + 0x40, -1);
        func_003168D0(arg0 + 0x34, -1);
        func_003168D0(arg0 + 0x28, -1);
        func_003168D0(arg0 + 0x1C, -1);
        func_003168D0(arg0 + 0x10, -1);
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
