/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8];
} unk_func_00208E60_0;

extern unk_func_00208E60_0 D_00336EF0[];

s32 func_00208E60(s32 arg0) {
    return D_00336EF0[arg0].unk_00;
}
