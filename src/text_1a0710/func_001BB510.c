/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
} unk_func_001BB510_0;

void func_001BB5B0();
u32 func_001BB060();
void *memcpy(void *, void *, u32);
void func_001BB580();

void func_001BB510(unk_func_001BB510_0 *arg0, unk_func_001BB510_0 *arg1) {
    func_001BB5B0(arg0->unk_18);
    memcpy((void *)arg0->unk_18, (void *)arg1->unk_18, func_001BB060());
    func_001BB580(arg0->unk_18);
}
