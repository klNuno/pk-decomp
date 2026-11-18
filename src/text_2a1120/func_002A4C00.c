#include "common.h"

typedef struct unk_func_002A4C00_0 {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08[0x10];
} unk_func_002A4C00_0;

void *memcpy(void *, const void *, u32);
void func_0028E920();

void func_002A4C00(unk_func_002A4C00_0 *arg0) {
    u8 sp20[0x10];

    memcpy(sp20, arg0->unk_08, 0x10);
    func_0028E920(arg0->unk_00, arg0->unk_04, sp20);
}
