/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BC6A0_0 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_001BC6A0_0;

s32 func_001BC0C0();
void *memcpy(void *, void *, s32);

void func_001BC6A0(unk_func_001BC6A0_0 *arg0, unk_func_001BC6A0_0 *arg1) {
    memcpy((void *)arg0->unk_24, (void *)arg1->unk_24, func_001BC0C0());
}
