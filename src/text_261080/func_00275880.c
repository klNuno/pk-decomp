/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0x10];
    s32 unk_1C;
    u8 pad_20[0x10];
    s32 unk_30;
    u8 pad_34[0x10];
    s32 unk_44;
    u8 pad_48[0x10];
    s32 unk_58;
    u8 pad_5C[0x10];
    s32 unk_6C;
    u8 pad_70[0x10];
    s32 unk_80;
    u8 pad_84[0x10];
    s32 unk_94;
    u8 pad_98[0x10];
    s32 unk_A8;
    u8 pad_AC[0x10];
    s32 unk_BC;
    u8 pad_C0[0x10];
    s32 unk_D0;
    u8 pad_D4[0x10];
    s32 unk_E4;
    u8 pad_E8[0x10];
    s32 unk_F8;
    u8 pad_FC[8];
} unk_00275880_0;

extern unk_00275880_0 D_005E5950[];
extern s32 D_005E57C0[];
extern s32 D_005E5630[];
extern s32 D_005E54A0[];
extern s32 D_005E5310[];
extern s32 D_005E5180[];
extern s32 D_005E4FF0[];
extern s32 D_005E4E60[];
extern s32 D_005E4CD0[];
extern s32 D_005E4B40[];
extern s32 D_005E49B0[];
extern s32 D_005E4820[];
extern s32 D_005E4690[];
extern s32 D_005E4500[];

void func_00275880(s32 arg0, s32 arg1)
{
    s32 unk_00 = arg0 + arg1;
    s32 temp;

    for (temp = arg0; temp < unk_00; temp++) {
        D_005E5950[temp].unk_08 = 0;
        D_005E57C0[temp] = 0;
        D_005E5950[temp].unk_1C = 0;
        D_005E5630[temp] = 0;
        D_005E5950[temp].unk_30 = 0;
        D_005E54A0[temp] = 0;
        D_005E5950[temp].unk_44 = 0;
        D_005E5310[temp] = 0;
        D_005E5950[temp].unk_58 = 0;
        D_005E5180[temp] = 0;
        D_005E5950[temp].unk_6C = 0;
        D_005E4FF0[temp] = 0;
        D_005E5950[temp].unk_80 = 0;
        D_005E4E60[temp] = 0;
        D_005E5950[temp].unk_94 = 0;
        D_005E4CD0[temp] = 0;
        D_005E5950[temp].unk_A8 = 0;
        D_005E4B40[temp] = 0;
        D_005E5950[temp].unk_BC = 0;
        D_005E49B0[temp] = 0;
        D_005E5950[temp].unk_D0 = 0;
        D_005E4820[temp] = 0;
        D_005E5950[temp].unk_E4 = 0;
        D_005E4690[temp] = 0;
        D_005E5950[temp].unk_F8 = 0;
        D_005E4500[temp] = 0;
    }
}
