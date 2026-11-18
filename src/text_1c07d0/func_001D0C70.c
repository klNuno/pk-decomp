/* profile: o0 */
#include "common.h"

typedef struct unk_func_001D0C70_1 {
    u8 pad_00[0x60];
} unk_func_001D0C70_1;

typedef struct unk_func_001D0C70_0 {
    u8 pad_00[0x70];
    u32 unk_70;
    u8 pad_74[4];
    s32 *unk_78;
    s32 *unk_7C;
    unk_func_001D0C70_1 *unk_80;
    s32 *unk_84;
} unk_func_001D0C70_0;

void func_00155FA0();

void func_001D0C70(unk_func_001D0C70_0 *arg0, u32 arg1) {
    u32 *count;
    u32 idx;
    u32 i;

    count = &arg0->unk_70;
    if (arg1 != 0) {
        idx = arg1 - 1;
        for (i = idx + 1; i < *count; i++) {
            arg0->unk_78[i - 1] = arg0->unk_78[i];
            arg0->unk_7C[i - 1] = arg0->unk_7C[i];
            arg0->unk_84[i - 1] = arg0->unk_84[i];
            func_00155FA0(&arg0->unk_80[i - 1], &arg0->unk_80[i]);
        }
        (*count)--;
    }
}
