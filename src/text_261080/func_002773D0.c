#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002773D0_0;

char *func_001DA0C0(s32);
void func_00278F20(char *, u8, f32);
char *strcpy(char *, const char *);
extern f32 D_0035F5F0;
extern s32 D_0036011C;
extern unk_func_002773D0_0 *D_007A816C[];
extern u8 D_007A8174[];
extern u8 D_007A8175[];

void func_002773D0(s32 arg0) {
    char buf[0x100];
    s32 idx;
    s32 var;
    u8 temp_s0;
    s32 temp_s1;

    idx = D_007A8174[0];
    temp_s0 = D_007A8175[0];
    temp_s1 = D_0036011C;
    if (arg0 != 0) {
        var = arg0;
    } else {
        var = D_007A816C[0][idx].unk_04;
    }
    strcpy(buf, func_001DA0C0(var));
    func_00278F20(buf, temp_s0, D_0035F5F0);
    D_0036011C = temp_s1;
}
