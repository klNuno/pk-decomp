/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x78];
    u8 unk_78[0xC];
    u8 unk_84[0x54];
} unk_func_001B5610_0;

void *memcpy();

void func_001B5610(unk_func_001B5610_0 *arg0, s32 *arg1) {
    memcpy((void *)arg0->unk_78, (void *)arg0->unk_84, 0x54);
    ((s32 *)((u8 *)arg0 + 0xCC))[0] = arg1[0];
    ((s32 *)((u8 *)arg0 + 0xCC))[1] = arg1[1];
    ((s32 *)((u8 *)arg0 + 0xCC))[2] = arg1[2];
}
