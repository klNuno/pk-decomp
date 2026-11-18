/* profile: o0 */
#include "common.h"

typedef struct unk_func_00208C00_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00208C00_0;

extern unk_func_00208C00_0 D_003346F0[];

s32 func_00208C00(s32 arg0) {
    return D_003346F0[arg0].unk_00;
}
