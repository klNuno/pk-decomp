/* profile: o0_301 */
#include "common.h"

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_00172950();
void func_0019AD50();
void func_0019AF90();
s32 func_0019B120();
void func_001A53D0();
void func_001A57C0();
void func_001A6720();
void func_002741E0();
void func_00323000();
extern char D_00349FF8[];
extern u8 D_0035F528;
extern u8 D_005AB790[];

void func_0019F360(void) {
    func_00172950();
    switch (D_005AB790[0]) {
    case 2:
        func_001A6720();
        func_002741E0();
        func_001A53D0();
        break;
    case 6:
        func_00323000(0, 0);
        func_001A6720();
        func_0019AF90(func_0019B120());
        func_0019AD50(5);
        break;
    case 8:
        func_001A57C0();
        func_0019AD50(7);
        break;
    default:
        Erm_fn_ClearLastError(0, D_00349FF8, 0x2DE);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x12, -1, 0xFF, 0xFF, 0, D_00349FF8, 0x2DE);
        break;
    }
}
