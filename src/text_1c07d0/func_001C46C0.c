/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x8C];
    u8 *unk_8C;
} unk_func_001C46C0_0;

void func_001C46C0(unk_func_001C46C0_0 *arg0, s32 arg1, u8 arg2) {
    arg0->unk_8C[arg1] = arg2;
}
