#include "common.h"

void func_0011B418(char *);
s32 func_00273F50(char *);
s32 func_001DA280(s32);
s32 func_001DA5E0(s32);
void func_001DA550(s32, s32, s32);
s32 func_0018AC00(s32);
void func_001DA2D0(s32, s32, s32);
void func_001DA2B0(s32);
extern char D_003496A0[];
extern char D_003496C0[];
extern char D_003496D0[];

s32 func_00180EB0(void) {
    s32 temp;
    s32 temp2;
    s32 temp3;

    func_0011B418(D_003496A0);
    temp = func_001DA280(func_00273F50(D_003496C0));
    if (temp < 0) {
        return 0;
    }
    temp2 = func_001DA5E0(temp);
    func_001DA550(temp, 0, 0);
    temp3 = func_0018AC00(temp2 + 0x7F);
    func_001DA2D0(temp, temp3, temp2);
    func_001DA2B0(temp);
    func_0011B418(D_003496D0);
    return temp3;
}
