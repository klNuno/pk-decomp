#include "common.h"

void func_0016B130();
void func_00165FD0();
void func_00176C90();
void func_0017ED20();
void func_0012C570();
void func_00176110();
extern f32 D_0035F494;
extern f32 D_0035F498;
extern f32 D_0035F4BC;
extern f32 D_0035F4C0;
extern s32 D_0035FA14;
extern u8 *D_0035FB04;
extern s32 D_0035FC50;
extern s32 D_0035FC6C;
extern s32 D_0035FF68;
extern s32 D_0035FF70;
extern s32 D_0035FF74;
extern s32 D_007B2448[];

void func_00177190(void) {
    D_0035FA14 = 0;
    *(f32 *)(D_0035FB04 + 0x1E0) = 1.0f;
    D_0035F494 = 1.3333334f;
    D_0035F498 = 45.0f;
    D_0035F4BC = 0.8f;
    D_0035F4C0 = 2048.0f;
    func_0016B130();
    D_0035FC50 = 0;
    func_00165FD0();
    func_00176C90(D_0035FF74);
    func_00176C90(D_0035FF70);
    func_00176C90(D_0035FF68);
    func_0017ED20();
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
