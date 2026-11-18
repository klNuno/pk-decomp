/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0018E580_0;

extern s32 D_0035FE24;
extern unk_func_0018E580_0 D_005070F0[];

void func_0018E580(void) {
    u32 i;

    D_0035FE24 = 1;
    for (i = 0; i < 500; i++) {
        D_005070F0[i].unk_00 = 0;
        D_005070F0[i].unk_08 = 0;
    }
}
