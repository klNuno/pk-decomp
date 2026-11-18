/* profile: o0_301_p */
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
} unk_PLD_fn_vReadAnimationsBanks_0;

extern unk_PLD_fn_vReadAnimationsBanks_0 D_005E5950[];
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

extern u16 D_00337830[];
extern char D_0034EF80[];

void *memcpy(void *, const void *, u32);
void func_0011B418(char *, s32, s32, s64);

void PLD_fn_vReadAnimationsBanks(s32 **arg0, s32 arg1, s32 arg2)
{
    s32 temp;
    s32 temp1;
    u16 *temp2;
    s32 *temp3;
    s32 *temp4;

    temp3 = *arg0;
    temp2 = D_00337830;
    memcpy((void *)&D_005E5950[arg1], *arg0, (u32)temp2[3] * (arg2 * 13));
    *arg0 = (s32 *)((u8 *)*arg0 + (u32)temp2[3] * (arg2 * 13));
    temp1 = arg1 + arg2;
    for (temp = arg1; temp < temp1; temp++) {
        if (D_005E5950[temp].unk_08 != 0) {
            D_005E57C0[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_1C != 0) {
            D_005E5630[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_30 != 0) {
            D_005E54A0[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_44 != 0) {
            D_005E5310[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_58 != 0) {
            D_005E5180[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_6C != 0) {
            D_005E4FF0[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_80 != 0) {
            D_005E4E60[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_94 != 0) {
            D_005E4CD0[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_A8 != 0) {
            D_005E4B40[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_BC != 0) {
            D_005E49B0[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_D0 != 0) {
            D_005E4820[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_E4 != 0) {
            D_005E4690[temp] = *(*arg0)++;
        }
        if (D_005E5950[temp].unk_F8 != 0) {
            D_005E4500[temp] = *(*arg0)++;
        }
    }
    temp4 = *arg0;
    func_0011B418(D_0034EF80, arg1, arg2, (s64)((u8 *)temp4 - (u8 *)temp3));
}
