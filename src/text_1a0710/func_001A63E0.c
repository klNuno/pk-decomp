/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[0x105];
    s16 unk_106[5];
} unk_func_001A63E0_0;

extern void PLD_fn_vLoadLevel(s32);
extern void func_0012F450(void);
extern void func_00130550(void);
extern void func_00130560(s32);
extern void func_00133170(s32);
extern void func_0015A820(s32);
extern void func_0015BA30(void);
extern void func_0015BAB0(void);
extern void func_00163EC0(void);
extern void func_001653B0(void);
extern void func_00169000(void);
extern void func_0016DD90(s16, s16, s32 *);
extern void func_0016DDD0(s16, s16, s32);
extern void func_0016DF10(s32, f32, f32);
extern void func_0016EDC0(s32 *, s32);
extern void func_00177190(void);
extern void func_00198240(void);
extern void func_001982C0(void);
extern void func_00199290(void);
extern void func_00199340(void);
extern s32 func_0019B0A0(void);
extern void func_0019B220(s32, u8);
extern void func_001A4CF0(void *);
extern void func_001A5510(void);
extern void func_001A94B0(s32, s32);
extern void func_001AB410(void);
extern void func_001AEE60(void);
extern void func_001C4F80(void);
extern s32 func_001CFBB0(void);
extern s32 func_001CFBC0(void);
extern void func_00267590(void);
extern s32 func_002CFB70(s32, s32, s32, s32, s32, s32, s32);

extern s32 D_0035F52C;
extern s32 D_0035F544;
extern f32 D_0035F5A8;
extern union {
    s32 unk_00;
    f32 unk_00_f32;
} D_0035F828;
extern s8 D_0035FA88;
extern s8 D_0035FAA0;
extern s32 D_0035FADC;
extern s32 D_0035FF6C;
extern s32 D_0035FF84;
extern u8 D_0035FF88;
extern s8 D_003601AC;
extern u8 D_005AB740[];
extern s32 D_005AB780[];
extern unk_func_001A63E0_0 D_005AB790;
extern s32 D_005AB800[];
extern s16 D_005AB894[];
extern s32 D_005ABD88[];
extern s32 D_005ABD8C[];
extern s32 D_005ABD90[];

void func_001A63E0(void) {
    s32 sp4C;
    u8 i;
    u8 j;
    s8 temp;

    func_00130550();
    func_0012F450();
    PLD_fn_vLoadLevel(func_0019B0A0());
    func_0019B220(0, 1);
    func_00199290();
    func_00199340();
    D_0035FAA0 = 0;
    D_0035FADC = 0;
    D_003601AC = 0;
    for (i = 0; i <= 4; i++) {
        func_0016DD90(D_005AB894[0], D_005AB790.unk_106[i], &sp4C);
        if (sp4C == 0) {
            func_0016EDC0(&sp4C, 0x67);
            func_0016DF10(sp4C, 1.5f, 0.75f);
            func_0016DDD0(D_005AB894[0], D_005AB790.unk_106[i], sp4C);
        }
    }
    D_005ABD88[0] = 0;
    D_005ABD8C[0] = 0;
    D_005ABD90[0] = 0;
    func_001653B0();
    func_001AB410();
    func_00163EC0();
    func_00198240();
    func_001AEE60();
    D_0035FF84 = D_0035FF6C;
    func_001A5510();
    if (D_005AB790.unk_00 == 5) {
        temp = 0;
        if (func_001CFBC0() != 0) {
            func_00133170(8);
            temp = 1;
        }
        if (func_001CFBB0() != 0) {
            func_00133170(4);
            temp = 1;
        }
        if (temp) {
            func_001982C0();
        }
    }
    if ((D_005AB790.unk_00 == 5 || D_005AB790.unk_00 == 3) && D_0035FF88) {
        func_001A94B0(D_0035F828.unk_00, 0);
        func_002CFB70(-3, -1, -1, D_0035F544, D_0035F828.unk_00, 0, 0);
        D_0035F5A8 = D_0035F828.unk_00_f32;
    }
    func_001A4CF0(D_005AB740);
    func_0015BAB0();
    func_001C4F80();
    D_0035F52C = 0;
    D_0035FA88 = 0;
    func_00169000();
    func_00130560(D_0035FF6C);
    func_0015BA30();
    func_0015A820(D_005AB800[0]);
    func_0015A820(D_005AB800[0]);
    for (j = 0; j < 4; j++) {
        D_005AB780[j] = 0;
    }
    func_00267590();
    func_00177190();
}
