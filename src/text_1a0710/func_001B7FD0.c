/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001B7FD0_0;

typedef struct {
    u8 pad_00[8];
    unk_func_001B7FD0_0 **unk_08;
} unk_func_001B7FD0_1;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
void func_001B7D60(unk_func_001B7FD0_0 **);
extern char D_0034B6A8[];
extern u8 D_0035F528;

void func_001B7FD0(unk_func_001B7FD0_1 *arg0, s32 arg1) {
    s32 flag;

    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B6A8, 0x1B4);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B6A8, 0x1B4);
    }
    if (arg0->unk_08 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B6A8, 0x1B7);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B6A8, 0x1B7);
    }
    switch (arg1) {
    case 2:
        break;
    case 1:
        if ((*arg0->unk_08)->unk_0C & 0x40000) {
            flag = 1;
        } else {
            flag = 0;
        }
        if (flag) {
            func_001B7D60(arg0->unk_08);
        }
        break;
    case 5:
        break;
    case 4:
        break;
    }
}
