/* profile: o0 */
#include "common.h"

typedef struct unk_func_0019C440_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 unk_10;
    u8 unk_11;
    u8 pad_12[2];
} unk_func_0019C440_0;

unk_func_0019C440_0 *HMU_fn_p_vMalloc(s32, s32);

void func_0019C440(unk_func_0019C440_0 **arg0, u32 arg1) {
    u32 i;

    *arg0 = HMU_fn_p_vMalloc(arg1 * sizeof(unk_func_0019C440_0), 1);
    for (i = 0; i < arg1; i++) {
        (*arg0)[i].unk_00 = 0;
        (*arg0)[i].unk_04 = 0;
        (*arg0)[i].unk_04 = 0;
        (*arg0)[i].unk_08 = 0;
        (*arg0)[i].unk_0C = 0;
        (*arg0)[i].unk_11 = 1;
        (*arg0)[i].unk_10 = 0;
    }
}
