#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002F52F0_0;

void func_002F5DA0();
void func_00309650(void *);
s32 func_0011D3F8(char *);
void func_002D3AD0(void *, char *, s32);
extern u8 D_007BEFD0[];
extern char D_0035C730[];
extern unk_func_002F52F0_0 D_003606E8;

void func_002F52F0(void) {
    func_002F5DA0();
    func_00309650(D_007BEFD0);
    func_002D3AD0(&D_003606E8, D_0035C730, func_0011D3F8(D_0035C730));
}
