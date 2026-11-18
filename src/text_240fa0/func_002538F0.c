/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
    u8 *unk_08;
    u8 *unk_0C;
} unk_func_002538F0_0;

void func_001FD710(unk_func_002538F0_0 *, u8 *, u8 *, u8 *, s32, s32, s32);
s32 func_00257690(s32);
extern unk_func_002538F0_0 *D_003601D8;

void func_002538F0(void *arg0) {
    if (func_00257690(*(s32 *)((u8 *)arg0 + 0x10C)) != 0) {
        if ((*(f32 *)((u8 *)arg0 + 0x254) > 0.0f ? *(f32 *)((u8 *)arg0 + 0x254) : -*(f32 *)((u8 *)arg0 + 0x254)) > 1.5707964f) {
            func_001FD710(D_003601D8, &D_003601D8->unk_04[0x72], &D_003601D8->unk_08[0x72], &D_003601D8->unk_0C[0x72], 1, 1, 0x80);
        }
    }
}
