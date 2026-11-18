#include "common.h"

s32 func_00323000(s32, s32);
void func_0011B418(char *);
void func_00288CE0(void);
void func_0031A5A0(s32);
extern char D_0035AB20[];
extern s32 D_0035F624;

void func_002CC730(s32 arg0) {
    if (func_00323000(0, 0) != 0) {
        func_0011B418(D_0035AB20);
    }
    if (D_0035F624 & 1) {
        func_00288CE0();
    }
    func_0031A5A0(0);
    *(s32 *)0x10009020 = 0;
    *(s32 *)0x10009030 = arg0;
    *(s32 *)0x1000E010 = 2;
    *(s32 *)0x10009000 = 0x145;
}
