#include "common.h"

extern s32 D_00367B00[][0x41];
extern s32 D_00367B04[][0x41];

void func_0015BEC0(u8 arg0, s32 *arg1, s32 *arg2) {
    *arg1 = D_00367B00[arg0][0];
    *arg2 = D_00367B04[arg0][0];
}
