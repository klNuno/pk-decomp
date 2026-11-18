/* profile: o0 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    u8 pad_08[0x14B0];
} unk_func_002461B0_0;

extern unk_func_002461B0_0 D_0060CD50[];

unk_func_002461B0_0 *func_002461B0(s32 arg0) {
    u8 i;

    for (i = 0; i < 8; i++) {
        if (D_0060CD50[i].unk_04 == 0) {
            D_0060CD50[i].unk_00 = i;
            D_0060CD50[i].unk_04 = arg0;
            return &D_0060CD50[i];
        }
    }
    return NULL;
}
