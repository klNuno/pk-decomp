#include "common.h"

void func_0012C570();
void func_00176110();
extern u8 *D_0035FB04;
extern s32 D_0035FC50;
extern s32 D_0035FC6C;
extern s32 D_0035FF74;
extern s32 D_007B2448[];

void func_00177130(void) {
    *(f32 *)(D_0035FB04 + 0x1E0) = 1.0f;
    D_007B2448[0] = 0x3E80;
    D_0035FC50 = 0;
    func_0012C570();
    D_0035FC6C = 1;
    func_00176110(D_0035FF74);
    D_0035FC6C = 0;
    func_00176110(D_0035FF74);
    D_007B2448[0] = 0x1F4;
}
