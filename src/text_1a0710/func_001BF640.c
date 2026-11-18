/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BF640_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001BF640_0;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_00197950(s32, s32);
extern char D_0034B748[];
extern u8 D_0035F528;

void func_001BF640(unk_func_001BF640_0 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B748, 0x205);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B748, 0x205);
    }
    if (arg0->unk_04 == 0) {
        Erm_fn_ClearLastError(0, D_0034B748, 0x208);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B748, 0x208);
    }
    switch (arg1) {
    case 5:
    case 2:
    case 1:
    case 4:
    case 3:
        func_00197950(arg0->unk_04, 0);
        break;
    }
}
