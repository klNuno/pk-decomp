/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x4];
} unk_func_00208C40_0;

extern unk_func_00208C40_0 D_003346F0[];

s32 func_00208C40(s32 arg0) {
    return D_003346F0[arg0].unk_04;
}
