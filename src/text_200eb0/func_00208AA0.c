/* profile: o0 */
#include "common.h"

typedef struct unk_func_00208AA0_0 {
    s32 unk_00;
    u8 pad_04[0x10];
} unk_func_00208AA0_0;

extern unk_func_00208AA0_0 D_00334060[];

s32 func_00208AA0(s32 arg0) {
    return D_00334060[arg0].unk_00;
}
