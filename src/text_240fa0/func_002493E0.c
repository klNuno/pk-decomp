/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002493E0_0 {
    u8 pad_00[0x1C];
    u8 unk_1C;
} unk_func_002493E0_0;

void func_00248B20(unk_func_002493E0_0 *, u16);
void func_0024B960(f32, unk_func_002493E0_0 *, s32, s32, s32 *);
extern s32 D_003601C0;
extern s32 D_00617320[];

void func_002493E0(unk_func_002493E0_0 *arg0) {
    u16 i;
    u16 n;

    n = (u16)(arg0->unk_1C - 2);
    if (n > 0) {
        for (i = 0; i < n; i++) {
            func_00248B20(arg0, i);
        }
        if (D_003601C0 != 0) {
            func_0024B960(0.0f, arg0, 0x6B, 0, D_00617320);
        }
    }
}
