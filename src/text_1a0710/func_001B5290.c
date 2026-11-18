/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001B5290_0;

void func_001B5290(s32 arg0, unk_func_001B5290_0 *arg1) {
    ((unk_func_001B5290_0 *)(arg0 + 0x164))->unk_00 = arg1->unk_00;
    ((unk_func_001B5290_0 *)(arg0 + 0x164))->unk_04 = arg1->unk_04;
    ((unk_func_001B5290_0 *)(arg0 + 0x164))->unk_08 = arg1->unk_08;
}
