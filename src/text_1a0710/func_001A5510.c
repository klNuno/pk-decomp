/* profile: o0_301 */
#include "common.h"

void func_00131AD0();
void func_00133170();
void func_0015BA30(void);
void func_0015DF60(void);
void func_00162AB0();
void func_00169000(void);
void func_00198240(void);
void func_00198BA0(void);
void func_0019D570(void);
void func_001A2AD0();
s32 func_001A41C0();
void func_001A5800(void);
void func_001A5AA0();
s32 func_001A7D60();
s32 func_001A7D80(void);
s32 func_001A94F0();
void func_001A99E0(void);
void func_001AECB0();
void func_001AEF90();
void func_002CF8F0();
s32 *HIE_fn_hGetSuperObjectObject();
extern s32 D_003370C4[];
extern s32 D_0035F544;
extern u8 D_0035FA88;
extern s32 D_0035FF6C;
extern s32 D_0035FF84;
extern u8 D_0035FF88;
extern s32 D_005AB780[];
extern u8 D_005AB790[];
extern s32 D_005AB7F8[];
extern s32 D_005ABDBC[];
extern u8 D_005ACAD0[];
extern u8 D_005ACAD1[];
extern u8 D_005ACAD2[];

void func_001A5510(void)
{
    u8 i, j;
    s32 a;
    s32 sp4C;

    D_005AB7F8[0] = 0;
    D_005ACAD0[0] = 0;
    D_005ACAD2[0] = 0;
    func_00162AB0(0);
    func_0019D570();
    func_001A5AA0(D_0035FF6C);
    for (i = 0; i < 4; i++) {
        func_001AEF90(i);
    }
    func_00131AD0(D_0035FF84);
    if (D_005AB790[0] != 5 && D_005AB790[0] != 3) {
        a = func_001A7D60(func_001A7D80());
        if ((func_001A41C0(HIE_fn_hGetSuperObjectObject(a)[1]) & 0xFF) > 0) {
            func_00133170(0x20);
            func_00198BA0();
            func_0015BA30();
        } else {
            func_001A5800();
            func_00198240();
        }
        D_005ACAD1[0] = 0;
        for (j = 0; j < 4; j++) {
            D_005AB780[j] = 0;
        }
        D_0035FA88 = 0;
        func_00169000();
    }
    func_001A2AD0(func_001A7D60(func_001A7D80()));
    if (D_005AB790[0] == 5 || D_005AB790[0] == 3) {
        D_003370C4[0] = 0;
    } else if (D_005AB790[0] == 7 && D_0035FF88) {
        if (D_003370C4[0] == 0) {
            sp4C = func_001A94F0(0);
        } else {
            sp4C = D_003370C4[0];
        }
        (void)&sp4C;
        func_002CF8F0(-1, -1, D_0035F544, sp4C, 0, 0);
    }
    func_001A99E0();
    func_0015DF60();
    func_001AECB0(4, D_005ABDBC[0]);
}
