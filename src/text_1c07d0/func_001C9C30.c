/* profile: o0 */
#include "common.h"

typedef struct unk_func_001C9C30_0 {
    u8 pad_00[0x8C];
    u8 *unk_8C;
} unk_func_001C9C30_0;

void func_001C9C30(unk_func_001C9C30_0 *arg0, s32 arg1, s8 arg2) {
    arg0->unk_8C[arg1] = (s8)arg0->unk_8C[arg1] + arg2;
}
