/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BEBB0_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001BEBB0_0;

extern char D_0034B748[];
extern u8 D_0035F528;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s32 func_001BECD0();
void func_001BF7A0(s32);

void func_001BEBB0(unk_func_001BEBB0_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B748, 0x13E);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B748, 0x13E);
    }
    if (arg0->unk_04 != 0) {
        Erm_fn_ClearLastError(0, D_0034B748, 0x141);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xD, -1, 0xFF, 0xFF, 0, D_0034B748, 0x141);
    }
    arg0->unk_04 = func_001BECD0();
    func_001BF7A0(arg0->unk_04);
}
