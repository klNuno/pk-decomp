#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_00136B10(u8, s32, s32);
void func_00137A10();
void func_00161EA0();
void func_00161EB0();
void func_00161EC0();
u8 func_001DB790(char *, char *);
extern char D_00331420[];
extern char D_00331430[];
extern char D_003490F0[];
extern u8 D_0035F408;
extern u8 D_0035F57C;
extern u8 D_0035F9F8;
extern s32 D_00369900[];
extern s32 D_00369904[];
extern u8 D_00369908[];
extern u8 D_00369909[];
extern u8 D_0036990A[];
extern u8 D_0036990B[];

void func_00161DC0(void) {
    func_00161EC0();
    func_00161EB0();
    if (D_0035F408 == 0xFF) {
        D_0035F408 = func_001DB790(D_00331420, D_00331430);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_003490F0, 0x1F);
    }
    func_00136B10(D_0035F408, 5, 100000);
    func_00137A10();
    D_00369900[0] = 0;
    D_0035F9F8 = 1;
    D_00369904[0] = 1;
    D_00369908[0] = 0;
    D_00369909[0] = 0;
    D_0036990A[0] = 0;
    D_0036990B[0] = 0;
    func_00161EA0();
}
