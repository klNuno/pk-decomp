#include "common.h"

typedef struct unk_func_002CC610_0 {
    s16 unk_00;
    u8 unk_02;
    u8 unk_03;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
} unk_func_002CC610_0;

s32 func_00323000(s32, s32, unk_func_002CC610_0 *);
void func_0011B418(char *);
void func_00288CE0(void);
void func_0031A5A0(s32);
extern char D_0035AB20[];
extern s32 D_0035F624;
extern unk_func_002CC610_0 *D_007B8EEC[];
extern unk_func_002CC610_0 *D_007B8EF0[];
extern unk_func_002CC610_0 *D_007B8EF4[];

void func_002CC610(void) {
    unk_func_002CC610_0 *temp;
    s32 temp_s0;

    if (D_007B8EF4[0] != D_007B8EEC[0]) {
        D_007B8EF4[0]->unk_00 = 0;
        D_007B8EF4[0]->unk_02 = 0;
        D_007B8EF4[0]->unk_03 = 0x70;
        D_007B8EF4[0]->unk_08 = 0;
        D_007B8EF4[0]->unk_0C = 0;
        temp = D_007B8EEC[0];
        D_007B8EEC[0] = D_007B8EF0[0];
        D_007B8EF0[0] = temp;
        D_007B8EF4[0] = D_007B8EEC[0];
        temp_s0 = (s32)D_007B8EF0[0] & 0xCFFFFFFF;
        if (func_00323000(0, 0, D_007B8EEC[0]) != 0) {
            func_0011B418(D_0035AB20);
        }
        if (D_0035F624 & 1) {
            func_00288CE0();
        }
        func_0031A5A0(0);
        *(s32 *)0x10009020 = 0;
        *(s32 *)0x10009030 = temp_s0;
        *(s32 *)0x1000E010 = 2;
        *(s32 *)0x10009000 = 0x145;
    }
}
