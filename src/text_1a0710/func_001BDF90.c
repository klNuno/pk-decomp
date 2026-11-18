/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BDF90_0 {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} unk_func_001BDF90_0;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
s32 fn_h_StandardGameGetSuperObject();
void func_001BE3F0();
extern char D_0034B738[];
extern u8 D_0035F528;

void func_001BDF90(unk_func_001BDF90_0 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B738, 0x13C);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B738, 0x13C);
    }
    if (arg0->unk_20 == 0) {
        Erm_fn_ClearLastError(0, D_0034B738, 0x13F);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B738, 0x13F);
    }
    switch (arg1) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 4:
        if (fn_h_StandardGameGetSuperObject(arg0->unk_04) != 0) {
            func_001BE3F0(fn_h_StandardGameGetSuperObject(arg0->unk_04));
        }
        break;
    }
}
