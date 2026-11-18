/* profile: opt_noprop */
#include "common.h"

typedef struct unk_func_00317710_0 {
    u32 unk_00;
    void *unk_04;
} unk_func_00317710_0;

void *memset(void *, s32, u32);

void func_00317710(unk_func_00317710_0 *arg0) {
    void *temp = arg0->unk_04;
    u32 temp2 = arg0->unk_00;

    memset(temp, 0, ((temp2 * (temp2 + 1)) >> 1) * 4);
}
