/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x70];
    u32 unk_70;
    u32 unk_74;
    s32 *unk_78;
    s32 *unk_7C;
    u8 *unk_80;
    s32 *unk_84;
} unk_func_001D0B10_0;

s32 func_001D0A90();
void func_001D0830();
void func_00155FA0();

void func_001D0B10(unk_func_001D0B10_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 *temp_s0;

    temp_s0 = &arg0->unk_70;
    if (func_001D0A90(arg0, arg1) != 0) {
        return;
    }
    switch (arg4) {
    case 1:
        func_001D0830(arg0, 1);
        break;
    case 2:
        if (arg0->unk_70 < arg0->unk_74) {
            (*temp_s0)++;
            break;
        }
        return;
    default:
        return;
    }
    arg0->unk_78[*temp_s0 - 1] = arg1;
    arg0->unk_7C[*temp_s0 - 1] = arg2;
    arg0->unk_84[*temp_s0 - 1] = arg4;
    func_00155FA0(arg0->unk_80 + (*temp_s0 - 1) * 0x60, arg3);
}
