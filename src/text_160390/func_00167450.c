/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00167450_0 {
    s32 unk_00;
    u8 pad_04[0x5C];
} __attribute__((aligned(16))) unk_func_00167450_0;

typedef struct unk_func_00167450_1 {
    void *unk_00;
    void *unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    u8 pad_10[8];
    s32 unk_18;
    u8 pad_1C[0x60];
    s32 unk_7C;
    unk_func_00167450_0 *unk_80;
    u8 pad_84[0x6C];
    u8 unk_F0[0xA4];
    s32 unk_194;
    u8 pad_198[0x48];
    f32 unk_1E0;
} unk_func_00167450_1;

typedef struct unk_func_00167450_2 {
    u8 pad_00[0x68];
    s32 *unk_68;
} unk_func_00167450_2;

typedef struct unk_func_00167450_3 {
    u8 pad_00[0x20];
    s16 unk_20;
    u8 pad_22[0x5E];
    s32 unk_80;
} unk_func_00167450_3;

extern unk_func_00167450_0 *D_0035F820;
extern unk_func_00167450_1 *D_0035FB04;
extern s8 D_0035FB40;
extern s32 D_0035FD10;
void func_0018AD40();
void func_0018AD50();
extern s32 D_0035FB84;
extern s32 D_0035FB9C;
extern unk_func_00167450_2 *D_0035FBB0;
extern u8 D_0035FBD8;

s32 func_0012C380();
void func_00153920();
void func_00155FA0();
void func_001676F0();
void func_0016F320();
void func_001966E0();
s32 func_00196CB0();

void func_00167450(unk_func_00167450_2 *arg0, unk_func_00167450_3 *arg1, s32 arg2) {
    unk_func_00167450_0 saved;
    s32 *p;

    saved.unk_00 = -1;
    if (arg1->unk_20 > 5000) {
        return;
    }
    D_0035FBB0 = arg0;
    if (D_0035FB04->unk_1E0 == 0.0f && (arg2 & 8) != 8) {
        return;
    }
    if (arg1->unk_80 == 1) {
        if (D_0035FB40 != 0 &&
            ((D_0035FB40 == 1 && !(arg2 & 0x80000000)) ||
             (D_0035FB40 == 2 && (arg2 & 0x80000000)) ||
             D_0035FB40 == 3)) {
            func_0018AD50(arg1);
        }
        if (D_0035FD10) {
            func_0018AD40(arg1);
        }
        return;
    }
    p = arg0->unk_68;
    D_0035FB04->unk_00 = arg0;
    D_0035FB04->unk_0C = arg2;
    D_0035FB04->unk_18 = 0;
    D_0035FB04->unk_04 = arg1;
    D_0035FB04->unk_80 = D_0035F820;
    D_0035FB04->unk_7C = *p + 0x10;
    D_0035FB04->unk_194 = *p;
    if (func_00196CB0(arg1)) {
        saved = *D_0035F820;
        func_001966E0(arg1, arg0, D_0035F820);
        func_00153920(D_0035FB04->unk_F0, *p + 0x10, D_0035FB04->unk_80);
    } else {
        func_00155FA0(D_0035FB04->unk_F0, func_0012C380());
    }
    D_0035FB04->unk_18 = 0x10F;
    func_001676F0(D_0035FB04, arg0);
    if (D_0035FBD8) {
        func_0016F320();
    }
    D_0035FB9C = 0;
    if (func_00196CB0(arg1)) {
        *D_0035F820 = saved;
    }
    D_0035FB84 = 0;
}
