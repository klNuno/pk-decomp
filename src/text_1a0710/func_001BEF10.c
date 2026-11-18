/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BEF10_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001BEF10_0;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
unk_func_001BEF10_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001A7D60(s32);
s32 func_001A7D80(void);
void func_001BF8D0(s32);
void func_001BF920(s32);
extern char D_0034B748[];
extern u8 D_0035F528;

void func_001BEF10(unk_func_001BEF10_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B748, 0x16D);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B748, 0x16D);
    }
    if (arg0->unk_04 == 0) {
        Erm_fn_ClearLastError(0, D_0034B748, 0x170);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B748, 0x170);
    }
    func_001BF8D0(arg0->unk_04);
    if (arg0 == HIE_fn_hGetSuperObjectObject(func_001A7D60(func_001A7D80()))) {
        func_001BF920(arg0->unk_04);
    }
}
