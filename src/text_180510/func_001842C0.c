/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_001842C0_1 {
    s32 unk_00;
    u8 pad_04[0x4];
    struct unk_func_001842C0_1 *unk_08;
} unk_func_001842C0_1;

typedef struct unk_func_001842C0_0 {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[0x18];
    unk_func_001842C0_1 *unk_68;
    unk_func_001842C0_1 *unk_6C;
    s32 unk_70;
} unk_func_001842C0_0;

void func_001842C0(unk_func_001842C0_0 *arg0, s32 arg1) {
    u32 i;
    u32 idx = arg1 - 1;

    if (arg0->unk_70 > 0 && idx < arg0->unk_70) {
        arg0->unk_6C = arg0->unk_68;
        for (i = 0; i < idx; i++) {
            arg0->unk_6C = arg0->unk_6C->unk_08;
        }
        arg0->unk_4C = arg0->unk_6C->unk_00;
    }
}
