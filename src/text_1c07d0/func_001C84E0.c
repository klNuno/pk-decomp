/* profile: o0_301 */
#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
} unk_func_001C84E0_0;

typedef struct {
    u8 pad_00[0xC];
    unk_func_001C84E0_0 **unk_0C;
} unk_func_001C84E0_1;

typedef struct {
    void *unk_00;
    s32 unk_04;
    u8 pad_08[0x114];
    unk_func_001C84E0_1 **unk_11C;
} unk_func_001C84E0_2;

void *memcpy(void *, void *, u32);

void func_001C84E0(unk_func_001C84E0_2 *arg0, s32 arg1) {
    memcpy((void *)arg0->unk_00, (void *)(*(*arg0->unk_11C)->unk_0C)->unk_00, arg1 * 0xC);
    arg0->unk_04 = (*(*arg0->unk_11C)->unk_0C)->unk_04;
}
