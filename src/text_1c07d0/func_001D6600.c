/* profile: o0_301 */
#include "common.h"

void func_00136B10(u8, s32, s32);
void func_00137700(s32, u8, s32, s32, s32, s32, s32);
void func_00137A10();
extern u8 D_0035F574;
extern u8 D_003600C9;
extern u8 D_003600CA;
extern u8 D_003600CB;
extern u8 D_003600CC;
extern u8 D_003600CD;
extern u8 D_003600CE;
extern s32 D_00367210[];
extern s32 D_005ECC44[];
extern s32 D_005ECC48[];
extern s32 D_005ECC4C[];

void func_001D6600(void) {
    func_00136B10(D_0035F574, 1, 100000);
    func_00137A10();
    func_00137700(0, D_0035F574, D_00367210[D_0035F574], 0x20000, 100000, 4, 12);
    D_005ECC44[0] = 0;
    D_005ECC48[0] = 0;
    D_005ECC4C[0] = 0;
    D_003600C9 = 1;
    D_003600CA = 2;
    D_003600CB = 4;
    D_003600CC = 4;
    D_003600CD = 4;
    D_003600CE = 4;
}
