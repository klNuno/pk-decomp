#include "common.h"

extern s32 D_003333B0[];
extern s32 D_0035FD90;
extern s32 D_0035FD94;
extern u8 D_00404E40[];

s32 func_00180DE0(void *);
s32 func_00180EB0(void);
void func_00181090(void);
void func_001810C0(void *);
void func_001810F0(void);
void func_00189570(s32, s32);

void func_0018AAE0(s32 arg0, s32 arg1) {
    s32 temp;

    switch (arg0) {
    case 0:
        D_003333B0[arg0] = func_00180EB0();
        break;
    case 1:
        D_003333B0[arg0] = func_00180DE0(D_00404E40);
        break;
    }
    temp = D_003333B0[arg0];
    if (temp == 0) {
        D_0035FD90 = 1;
        switch (arg0) {
        case 0:
            func_001810F0();
            break;
        case 1:
            func_001810C0(D_00404E40);
            break;
        }
    } else {
        D_0035FD94 = temp;
    }
    func_00189570(arg0, arg1);
    if (D_0035FD90 != 0) {
        func_00181090();
        D_0035FD90 = 0;
    }
}
