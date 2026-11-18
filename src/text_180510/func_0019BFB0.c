/* profile: o0_p */
#include "common.h"

typedef struct {
    u16 unk_00;
    u8 unk_02[2];
} unk_func_0019BFB0_0;

s32 StrICmp(void *, char *);
extern u16 D_0035FC20;
extern unk_func_0019BFB0_0 D_0035FED0[2];

void func_0019BFB0(char *arg0) {
    s8 var_s0;

    D_0035FC20 = 0;
    if (arg0 == NULL) {
        return;
    }
    for (var_s0 = 0; var_s0 < 2; var_s0++) {
        if (StrICmp(D_0035FED0[var_s0].unk_02, (char *)(s32)arg0) == 0) {
            D_0035FC20 = D_0035FED0[var_s0].unk_00;
            break;
        }
    }
}
