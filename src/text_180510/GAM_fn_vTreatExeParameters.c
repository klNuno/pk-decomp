/* profile: o0 */
#include "common.h"

s32 func_00170050();
void Erm_SCE_fn_iMessageBox();
void fn_v_EngMain_CancelGame();
void func_0019AD30();
void func_0019AD40();
extern char D_00349EF0[];
extern char D_00349F18[];
extern u8 D_0035FF78;
extern u8 D_0035FF7C;

void GAM_fn_vTreatExeParameters(void) {
    D_0035FF7C = 0;
    D_0035FF78 = 0;
    if (!func_00170050()) {
        Erm_SCE_fn_iMessageBox(D_00349EF0, D_00349F18, 0x40010);
        fn_v_EngMain_CancelGame();
    }
    func_0019AD30();
    func_0019AD40();
}
