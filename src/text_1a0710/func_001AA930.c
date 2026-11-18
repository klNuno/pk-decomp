/* profile: o0_301 */
#include "common.h"

typedef struct {
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
} unk_func_001AA930_0;

typedef struct {
    s32 unk_00;
    f32 unk_04;
} unk_func_001AA930_1;

typedef struct {
    u8 pad_00[0x106];
    s16 unk_106[5];
    unk_func_001AA930_0 unk_110[5];
    u8 pad_340[0x28C];
    unk_func_001AA930_1 unk_5CC[5];
} unk_func_001AA930_2;

extern void Erm_fn_ClearLastError(s32, char *, s32);
extern void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern s32 func_00169250(s16, s16, void *);
extern void func_00169790(s16, s16, unk_func_001AA930_0 *);
extern s32 func_00169850(s16, unk_func_001AA930_0 *, s16 *);
extern char D_0034B490[];
extern u8 D_0035F528;
extern unk_func_001AA930_2 D_005AB790;
extern s16 D_005AB894[];

void func_001AA930(u8 arg0) {
    D_005AB790.unk_110[arg0].unk_30 = 100;
    D_005AB790.unk_110[arg0].unk_34 = 100;
    D_005AB790.unk_110[arg0].unk_48 = 0;
    D_005AB790.unk_110[arg0].unk_4C = 1000;
    D_005AB790.unk_110[arg0].unk_50 = 0;
    D_005AB790.unk_110[arg0].unk_54 = 1000;
    D_005AB790.unk_110[arg0].unk_58 = 0;
    D_005AB790.unk_110[arg0].unk_5C = 0;
    if (func_00169850(D_005AB894[0], &D_005AB790.unk_110[arg0], &D_005AB790.unk_106[arg0]) == 0) {
        Erm_fn_ClearLastError(0, D_0034B490, 0x1E7);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x28, -1, 0xFF, 0xFF, 0, D_0034B490, 0x1E7);
    }
    D_005AB790.unk_5CC[arg0].unk_00 = 0;
    D_005AB790.unk_5CC[arg0].unk_04 = 0.0f;
    if (func_00169250(D_005AB894[0], D_005AB790.unk_106[arg0], (void *)&D_005AB790.unk_5CC[arg0]) == 0) {
        Erm_fn_ClearLastError(0, D_0034B490, 0x1F8);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x28, -1, 0xFF, 0xFF, 0, D_0034B490, 0x1F8);
    }
    func_00169790(D_005AB894[0], D_005AB790.unk_106[arg0], &D_005AB790.unk_110[arg0]);
}
