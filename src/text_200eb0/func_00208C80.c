/* profile: o0 */
#include "common.h"

typedef struct unk_func_00208C80_0 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_00208C80_0;

extern unk_func_00208C80_0 D_003346F0[];

s32 func_00208C80(s32 arg0) {
    return D_003346F0[arg0].unk_08;
}
