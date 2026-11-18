#include "common.h"

typedef struct unk_func_001692C0_0 {
    u8 pad_00[0x60];
    void *unk_60[16];
} unk_func_001692C0_0;

void *memset(void *, s32, u32);
void Mmg_fn_v_SetModeAlloc(u8, s32, s32);
void func_00136DE0(void *, s32);
extern u8 D_0035F380;
extern s32 D_0035FB64;
extern unk_func_001692C0_0 *D_0036A450[];

s32 func_001692C0(s16 arg0) {
    s16 i;
    unk_func_001692C0_0 *p;

    p = D_0036A450[arg0];

    if (D_0035FB64 == 0) {
        for (i = 0; i < 16; i++) {
            void **q = &p->unk_60[i];
            if (*q != 0) {
                memset(*q, 0xCC, 0x74);
                *q = 0;
            }
        }
    }
    memset(p, 0xCC, 0xC0);
    Mmg_fn_v_SetModeAlloc(D_0035F380, 0xFF, 0);
    func_00136DE0(p, 0);
    D_0036A450[arg0] = 0;
    return 1;
}
