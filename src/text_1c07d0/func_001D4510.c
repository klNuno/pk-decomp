/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001D4510_0 {
    u8 pad_00[0xA4];
    s32 unk_A4;
    u8 pad_A8[0x4];
    s32 unk_AC;
    s32 unk_B0;
    u8 pad_B4[0x20];
    s32 unk_D4;
} unk_func_001D4510_0;

u16 func_001C4700(unk_func_001D4510_0 *);
s32 func_001D4420();
void *memcpy(void *, void *, s32);
void func_001D3660(unk_func_001D4510_0 *, u16);

void func_001D4510(unk_func_001D4510_0 **arg0, void **arg1) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    u16 e;

    a = (*arg0)->unk_A4;
    b = (*arg0)->unk_B0;
    c = (*arg0)->unk_AC;
    d = (*arg0)->unk_D4;
    e = func_001C4700(*arg0);
    memcpy(*arg0, *arg1, func_001D4420());
    (*arg0)->unk_A4 = a;
    (*arg0)->unk_B0 = b;
    (*arg0)->unk_AC = c;
    (*arg0)->unk_D4 = d;
    func_001D3660(*arg0, e);
}
