#include "common.h"

typedef struct unk_func_002F5340_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002F5340_0;

void func_002F5FD0(s32);
void func_00309650(s32 *);
s32 func_0011D3F8(char *);
void func_002D3AD0(unk_func_002F5340_0 *, char *, s32);
extern s32 D_007BEFD0[];
extern char D_0035C730[];
extern unk_func_002F5340_0 D_003606E8;

void func_002F5340(s32 arg0) {
    func_002F5FD0(arg0 + 0x10);
    func_00309650(D_007BEFD0);
    func_002D3AD0(&D_003606E8, D_0035C730, func_0011D3F8(D_0035C730));
}
