/* profile: o0_301 */
#include "common.h"

void memcpy();

typedef struct {
    u8 pad_00[0xD8];
    u8 unk_D8[0xC];
    u8 unk_E4[0x48];
    f32 unk_12C[3];
} unk_func_001B5690_0;

void func_001B5690(unk_func_001B5690_0 *arg0, s32 *arg1) {
    memcpy((void *)arg0->unk_D8, (void *)arg0->unk_E4, 0x54);
    ((s32 *)arg0->unk_12C)[0] = arg1[0];
    ((s32 *)arg0->unk_12C)[1] = arg1[1];
    ((s32 *)arg0->unk_12C)[2] = arg1[2];
}
