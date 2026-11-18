#include "common.h"

void func_0011B418();
void func_0011CBB0();
s32 func_0018AC00(s32);
void func_001925F0(s32);
s32 func_001DA280(s32);
void func_001DA2B0(s32);
void func_001DA2D0(s32, s32, s32);
void func_001DA550(s32, s32, s32);
s32 func_001DA5E0(s32);
s32 func_00273F50(char *);
extern char D_00349650[];
extern char D_00349670[];
extern char D_00349690[];

s32 func_00180DE0(s32 arg0) {
    char sp40[0x400];
    s32 temp;
    s32 temp2;
    s32 temp3;

    func_0011B418(D_00349650);
    func_0011CBB0(sp40, D_00349690, arg0, arg0);
    temp = func_001DA280(func_00273F50(sp40));
    if (temp < 0) {
        return 0;
    }
    temp2 = func_001DA5E0(temp);
    func_001DA550(temp, 0, 0);
    temp3 = func_0018AC00(temp2 + 0x7F);
    func_001925F0(temp2);
    func_001DA2D0(temp, temp3, temp2);
    func_001DA2B0(temp);
    func_0011B418(D_00349670);
    return temp3;
}
