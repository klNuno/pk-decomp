/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00169790_0 {
    u8 pad_00[0x60];
    s32 unk_60;
    s32 unk_64;
} unk_func_00169790_0;

typedef struct unk_func_00169790_1 {
    u8 pad_00[0x60];
    unk_func_00169790_0 *unk_60[16];
} unk_func_00169790_1;

extern s32 D_0035FB64;
extern s32 D_0035FB68;
extern unk_func_00169790_1 *D_0036A450[];

void *memcpy(void *, void *, u32);

s32 func_00169790(s32 arg0, s16 arg1, void *arg2) {
    unk_func_00169790_0 *temp2;

    D_0035FB68 = 1;
    while (D_0035FB64 != 0) {
    }
    temp2 = D_0036A450[(s16)(arg1 / 16)]->unk_60[(s16)(arg1 % 16)];
    temp2->unk_64 = -1;
    temp2->unk_60 = 0;
    memcpy(arg2, temp2, 0x70);
    D_0035FB68 = 0;
    return 1;
}
