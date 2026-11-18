/* profile: o0 */
#include "common.h"

typedef struct unk_func_00208DB0_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_00208DB0_0;

extern unk_func_00208DB0_0 D_00335630[];

s32 func_00208DB0(s32 arg0) {
    return D_00335630[arg0].unk_00;
}
