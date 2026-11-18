/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0x8];
} unk_func_00208A60_0;

extern unk_func_00208A60_0 D_00334060[];

s32 *func_00208A60(s32 arg0) {
    return &D_00334060[arg0].unk_08;
}
