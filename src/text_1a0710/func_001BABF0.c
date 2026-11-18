/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BABF0_1 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_001BABF0_1;

typedef struct unk_func_001BABF0_0 {
    u8 pad_00[0x28];
    unk_func_001BABF0_1 *unk_28;
} unk_func_001BABF0_0;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_001BAFD0(unk_func_001BABF0_1 *);
void func_001BB010(unk_func_001BABF0_1 *);
extern char D_0034B6F8[];
extern u8 D_0035F528;

void func_001BABF0(unk_func_001BABF0_0 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B6F8, 0xF1);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B6F8, 0xF1);
    }
    if (arg0->unk_28 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B6F8, 0xF4);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B6F8, 0xF4);
    }
    switch (arg1) {
    case 0:
        break;
    case 2:
        break;
    case 3:
        break;
    case 1:
        func_001BAFD0(arg0->unk_28);
        func_001BB010(arg0->unk_28);
        arg0->unk_28->unk_08 = 0;
        break;
    case 4:
        break;
    default:
        break;
    }
}
