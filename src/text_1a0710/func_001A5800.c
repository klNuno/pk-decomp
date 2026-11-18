/* profile: o0_301_p */
#include "common.h"

s32 func_00129C50(u8);
void func_0012E330(void);
void func_00131AD0(s32);
void func_00133170(s32);
void func_001349D0(void);
void func_00155C70(void *);
void func_0015BA30(void);
void func_0015DF60(void);
void func_00164BA0(s32);
void func_00169000(void);
void func_00169240(s16, u8);
void func_00169D10(s16, s16, u8);
void func_00198870(void);
void func_001996F0(void);
void func_0019A7D0(void);
void func_0019D570(void);
void func_0019D9C0(void);
void func_001A2CC0(void);
void func_001A5AA0(s32);
void func_001A94B0(s32, u8);
void func_001AE6B0(void);
void func_001AECB0(u8, s32);
void func_001AEF90(s32);
void func_001B5010(void);
void func_001BD720(void);
void func_001EEFA0(void);
void func_00267590(void);
void func_002D4EF0(s32);

extern s32 D_0035F538, D_0035F53C, D_0035F828;
extern u8 D_0035FA88;
extern s32 D_0035FF6C, D_0035FF84;
extern u8 D_0035FF88, D_0035FF8C, D_0035FFA0;
extern s32 D_003601A4;
extern s32 D_005AB780[];
extern s16 D_005AB790[], D_005AB894[];
extern s32 D_005ABDBC[], D_005ABDC0[];
extern u8 D_005ABDD0[], D_005ABE30[], D_005ACAD0[], D_005ACAD1[];

void func_001A5800(void) {
    u8 i;
    u8 j;
    u8 k;

    func_00169240((s16)func_00129C50(0), 0);
    func_002D4EF0(D_0035F538);
    func_002D4EF0(D_0035F53C);
    func_001BD720();
    func_001B5010();
    func_00155C70(D_005ABDD0);
    func_00155C70(D_005ABE30);
    D_005ACAD1[0] = 0;
    func_0019A7D0();
    func_001A2CC0();
    func_00133170(0x10);
    func_00198870();
    func_001A5AA0(D_0035FF6C);
    func_001EEFA0();
    for (i = 0; i < 4; i++) {
        func_001AEF90(i);
    }
    func_00169000();
    if (D_0035FF88) {
        func_001A94B0(D_0035F828, 0);
    }
    func_001349D0();
    D_0035FA88 = 0;
    func_0012E330();
    for (j = 0; j < 4; j++) {
        D_005AB780[j] = 0;
    }
    D_003601A4 = 0;
    func_0015BA30();
    func_001AE6B0();
    func_00267590();
    for (k = 0; k < 4; k++) {
        func_00169D10(D_005AB894[0], (D_005AB790 + k)[0x83], 1);
    }
    func_0019D570();
    if (D_0035FF8C) {
        func_0019D9C0();
        D_005ACAD0[0] = 1;
    }
    func_00131AD0(D_0035FF84);
    if (D_0035FFA0) {
        D_0035FFA0 = 0;
        func_001AECB0(0, D_005ABDC0[0]);
        func_001AECB0(1, D_005ABDBC[0]);
        D_005ABDBC[0] = D_005ABDC0[0];
    }
    func_001996F0();
    func_0015DF60();
    func_00164BA0(4);
}
