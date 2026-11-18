/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0012C3E0_0 {
    u8 pad_00[0x60];
} unk_func_0012C3E0_0;

void func_00155FA0();
extern s32 D_0035F85C;
extern unk_func_0012C3E0_0 *D_0035F84C;
extern unk_func_0012C3E0_0 D_003638B0[];

s32 func_0012C3E0(u8 *arg0) {
    D_0035F85C = 0;
    func_00155FA0(&D_003638B0[D_0035F85C], **(s32 **)(arg0 + 0x68) + 0x10);
    D_0035F85C++;
    D_0035F84C = &D_003638B0[D_0035F85C - 1];
    return 1;
}
