/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B5210_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001B5210_0;

void func_001B5210(u8 *arg0, unk_func_001B5210_0 *arg1) {
    ((unk_func_001B5210_0 *)(arg0 + 0x158))->unk_00 = arg1->unk_00;
    ((unk_func_001B5210_0 *)(arg0 + 0x158))->unk_04 = arg1->unk_04;
    ((unk_func_001B5210_0 *)(arg0 + 0x158))->unk_08 = arg1->unk_08;
}
