/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    void *unk_04;
    void *unk_08;
    u8 pad_0C[0x69];
    u8 unk_75;
} unk_func_001B4DD0_0;

void *memcpy(void *, const void *, u32);

void func_001B4DD0(unk_func_001B4DD0_0 *arg0) {
    if (!(arg0->unk_75 & 2)) {
        memcpy((void *)arg0->unk_08, (void *)arg0->unk_04, 0x7C);
        arg0->unk_75 |= 2;
    }
}
