/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001EC960_0 {
    u8 unk_00;
    u8 pad_01[3];
    s32 *unk_04;
} unk_func_001EC960_0;

extern char D_0034D8E8[];
extern u8 D_0035F588;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);

void func_001EC960(unk_func_001EC960_0 *arg0, u8 arg1) {
    u8 i;

    if (arg1 == 0xFF) {
        arg1 = (s8)arg0->unk_00 - 1;
    }
    if (arg1 <= arg0->unk_00 - 1) {
        for (i = arg1; i <= arg0->unk_00 - 2; i++) {
            arg0->unk_04[i] = arg0->unk_04[i + 1];
        }
        arg0->unk_00--;
    } else {
        Erm_fn_v_UpdateLastError(0x43, D_0035F588, 0, 0x10, -1, 0xFF, 0xFF, 0, D_0034D8E8, 0xBB);
    }
}
