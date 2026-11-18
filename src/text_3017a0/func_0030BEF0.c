#include "common.h"

void func_0010C9A0();
s32 func_0010D120();
void func_0010CE78();
extern s32 D_0035F7B4;
extern u8 D_00360838;
extern u8 D_00360839;
extern u8 D_0036083A;

void func_0030BEF0(void) {
    func_0010C9A0(0);
    D_0035F7B4 = func_0010D120();
    D_00360838 = 0;
    D_00360839 = 1;
    D_0036083A = 0;
    if (D_0035F7B4 == 20) {
        func_0010CE78(2);
    } else if (D_0035F7B4 == 18) {
        func_0010CE78(1);
    }
}
