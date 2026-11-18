/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001AA530_0 {
    u8 pad_00[0x30];
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[0x10];
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    u8 pad_60[0x10];
} unk_func_001AA530_0;

typedef struct unk_func_001AA530_1 {
    u8 pad_00[0x354];
    s16 unk_354[6];
    unk_func_001AA530_0 unk_360[5];
    u8 unk_590[5][8];
    s32 unk_5B8[5];
} unk_func_001AA530_1;

extern unk_func_001AA530_1 D_005AB790;
extern s16 D_005AB894[];
extern char D_0034B490[];
extern u8 D_0035F528;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s32 func_00169850(s16, unk_func_001AA530_0 *, s16 *);
s32 func_00169250(s16, s16, void *);
void func_00169790(s16, s16, unk_func_001AA530_0 *);
void func_0016ED40(s16, s16, s32);
void func_0016DDD0(s16, s16, s32);
void func_0016DD80(s32, s32);
void func_001AAC70(u8);
void func_001AA930(u8);

void func_001AA530(u8 arg0) {
    D_005AB790.unk_360[arg0].unk_30 = 100;
    D_005AB790.unk_360[arg0].unk_34 = 100;
    D_005AB790.unk_360[arg0].unk_48 = 0;
    D_005AB790.unk_360[arg0].unk_4C = 1000;
    D_005AB790.unk_360[arg0].unk_50 = 0;
    D_005AB790.unk_360[arg0].unk_54 = 1000;
    D_005AB790.unk_360[arg0].unk_58 = 0;
    D_005AB790.unk_360[arg0].unk_5C = 0;
    if (func_00169850(D_005AB894[0], &D_005AB790.unk_360[arg0], &D_005AB790.unk_354[arg0]) == 0) {
        Erm_fn_ClearLastError(0, D_0034B490, 0x1B5);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x28, -1, 0xFF, 0xFF, 0, D_0034B490, 0x1B5);
    }
    if (func_00169250(D_005AB894[0], D_005AB790.unk_354[arg0], (void *)&D_005AB790.unk_590[arg0]) == 0) {
        Erm_fn_ClearLastError(0, D_0034B490, 0x1BA);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x28, -1, 0xFF, 0xFF, 0, D_0034B490, 0x1BA);
    }
    func_00169790(D_005AB894[0], D_005AB790.unk_354[arg0], &D_005AB790.unk_360[arg0]);
    if (D_005AB790.unk_5B8[arg0] == 0) {
        func_001AAC70(arg0);
    }
    func_0016ED40(D_005AB894[0], D_005AB790.unk_354[arg0], D_005AB790.unk_5B8[arg0]);
    func_0016DDD0(D_005AB894[0], D_005AB790.unk_354[arg0], D_005AB790.unk_5B8[arg0]);
    func_0016DD80(D_005AB790.unk_5B8[arg0], 0);
    func_001AA930(arg0);
}
