/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_001693B0_0 {
    u8 pad_00[0x60];
    void *unk_60[16];
} unk_func_001693B0_0;

extern s32 D_0035FB64;
extern s32 D_0035FB68;
extern u8 D_0035F380;
extern unk_func_001693B0_0 *D_0036A450[];

void *memset(void *, s32, u32);
void Mmg_fn_v_SetModeAlloc(u8, s32, s32);
void func_00136DE0(void *, s32);

static inline void func_001693B0_inl0(void **p, s32 i) { p[i] = NULL; }
s32 func_001693B0(s32 arg0, s16 arg1) {
    void *temp2;
    unk_func_001693B0_0 *temp;
    s16 temp3;

    D_0035FB68 = 1;
    while (D_0035FB64 != 0) {
    }
    temp = D_0036A450[(s16)(arg1 / 16)];
    temp3 = arg1 % 16;
    temp2 = temp->unk_60[temp3];
    memset(temp2, 0xCC, 0x74);
    Mmg_fn_v_SetModeAlloc(D_0035F380, 0xFF, 0);
    func_00136DE0(temp2, 0);
    func_001693B0_inl0(temp->unk_60, temp3);
    D_0035FB68 = 0;
    return 1;
}
