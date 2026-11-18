/* profile: o0 */
#include "common.h"

typedef struct unk_func_00208E20_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00208E20_0;

extern unk_func_00208E20_0 D_00336EF0[];

s32 func_00208E20(s32 arg0) {
    return D_00336EF0[arg0].unk_08;
}
