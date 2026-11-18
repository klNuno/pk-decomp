#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x100];
} unk_func_0015C800_0;

extern unk_func_0015C800_0 D_00367B08[];
extern unk_func_0015C800_0 D_00367B0C[];
extern unk_func_0015C800_0 D_00367B10[];
extern unk_func_0015C800_0 D_00367B14[];
extern unk_func_0015C800_0 D_00367B18[];

void func_0015C800(u8 arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    *arg3 = D_00367B08[arg0].unk_00;
    *arg4 = D_00367B0C[arg0].unk_00;
    *arg1 = D_00367B10[arg0].unk_00;
    *arg2 = D_00367B14[arg0].unk_00;
    *arg5 = D_00367B18[arg0].unk_00;
}
