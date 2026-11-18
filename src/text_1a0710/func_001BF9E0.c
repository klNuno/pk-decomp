/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    void *unk_04;
} unk_func_001BF9E0_0;

s32 func_001BEBA0();
void memcpy();

void func_001BF9E0(unk_func_001BF9E0_0 *arg0, unk_func_001BF9E0_0 *arg1) {
    memcpy((void *)arg0->unk_04, (void *)arg1->unk_04, func_001BEBA0());
}
