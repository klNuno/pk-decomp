/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C87E0_0 {
    u16 unk_00;
    u8 pad_02[6];
} unk_func_001C87E0_0;

typedef struct unk_func_001C87E0_1 {
    u8 pad_00[0xC4];
    u32 unk_C4;
    unk_func_001C87E0_0 *unk_C8;
} unk_func_001C87E0_1;

typedef struct unk_func_001C87E0_2 {
    s32 unk_00;
    unk_func_001C87E0_0 *unk_04;
} unk_func_001C87E0_2;

extern unk_func_001C87E0_1 *D_0035FFE0;

void func_001C87E0(u32 arg0, unk_func_001C87E0_2 *arg1) {
    u32 i;

    arg1->unk_04 = 0;
    arg1->unk_00 = 0;
    for (i = 0; i < D_0035FFE0->unk_C4; i++) {
        if (arg0 == D_0035FFE0->unk_C8[i].unk_00) {
            arg1->unk_04 = &D_0035FFE0->unk_C8[i];
            for (; i < D_0035FFE0->unk_C4; i++) {
                if (arg0 == D_0035FFE0->unk_C8[i].unk_00) {
                    arg1->unk_00++;
                } else {
                    return;
                }
            }
        } else if (D_0035FFE0->unk_C8[i].unk_00 > arg0) {
            return;
        }
    }
}
