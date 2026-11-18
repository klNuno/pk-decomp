#include "common.h"

void Erm_fn_v_UpdateLastError();
void func_001653A0();
u8 func_001DB790();
extern char D_00333450[];
extern char D_00333460[];
extern char D_00349DE8[];
extern u8 D_0035F4F8;
extern u8 D_0035F57C;

void func_00192890(void) {
    if (D_0035F4F8 == 0xFF) {
        D_0035F4F8 = func_001DB790(D_00333450, D_00333460);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_00349DE8, 0x18);
    }
    func_001653A0(0xFF);
}
