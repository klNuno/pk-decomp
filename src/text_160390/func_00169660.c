/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00169660_1 {
    u8 pad_00[0x60];
    void *unk_60[16];
    s32 unk_A0;
} unk_func_00169660_1;

extern s32 D_0035FB64;
extern s32 D_0035FB68;
extern unk_func_00169660_1 *D_0036A450[];

void *memcpy(void *, void *, u32);

s32 func_00169660(s32 arg0, s16 arg1, void *arg2, s32 *arg3) {
    unk_func_00169660_1 *temp;
    void *temp2;

    D_0035FB68 = 1;
    while (D_0035FB64 != 0) {
    }
    temp = D_0036A450[(s16)(arg1 / 16)];
    temp2 = temp->unk_60[(s16)(arg1 % 16)];
    *arg3 = 1;
    memcpy(arg2, temp2, 0x70);
    temp->unk_A0 = 1;
    D_0035FB68 = 0;
    return 1;
}
