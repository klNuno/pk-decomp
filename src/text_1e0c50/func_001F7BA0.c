/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001F7BA0_0;

typedef struct {
    u8 pad_00[0xC];
    unk_func_001F7BA0_0 *unk_0C;
} unk_func_001F7BA0_1;

s32 func_001FDE00();

void func_001F7BA0(unk_func_001F7BA0_1 *arg0) {
    s32 temp;

    temp = func_001FDE00(arg0->unk_0C->unk_68);
}
