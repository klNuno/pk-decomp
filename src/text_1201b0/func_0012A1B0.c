/* profile: opt_300 */
#include "common.h"

typedef struct {
    u64 unk_00;
    u64 unk_08;
} unk_0012A1B0_0;

typedef struct {
    s16 unk_00;
    s16 unk_02;
    u8 pad_04[4];
    u64 unk_08;
    u64 unk_10;
    u64 unk_18;
    u64 unk_20;
    u64 unk_28;
    u64 unk_30;
    u8 pad_38[8];
} unk_0012A1B0_1;

extern char D_00346398[];
extern u8 D_0035F384;
extern s16 D_0035F830;
extern unk_0012A1B0_1 D_00363330[];

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_0012AC30(s16, unk_0012A1B0_0 *);

s16 func_0012A1B0(s16 arg0, unk_0012A1B0_0 *arg1)
{
    s32 temp0;
    s16 temp1;
    u64 temp2;
    u64 temp3;
    u64 temp6;
    u64 temp7;
    u64 temp8;
    u64 temp9;
    u64 temp10;
    u64 temp11;

    if (!D_0035F830) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 2, -1, 255, 255, 0, D_00346398, 0x177);
        return 0x7FFF;
    }
    if (arg0 >= 16) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 5, -1, 255, 255, 0, D_00346398, 0x17C);
        return 0x7FFF;
    }
    temp0 = D_00363330[arg0].unk_02;
    if (!temp0) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 5, -1, 255, 255, 0, D_00346398, 0x181);
        return 0x7FFF;
    }
    temp1 = D_00363330[arg0].unk_00;
    if (temp1 > 2) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 6, -1, 255, 255, 0, D_00346398, 0x186);
        return 0x7FFF;
    }
    switch (temp0) {
    case 2:
        func_0012AC30(temp1, arg1);
        temp2 = D_00363330[arg0].unk_08;
        temp3 = D_00363330[arg0].unk_10;
        if (arg1->unk_08 == temp3) {
            arg1->unk_00 -= temp2;
            arg1->unk_08 = 0;
        } else {
            if (arg1->unk_00 >= temp2) {
                arg1->unk_00 -= temp2;
            } else {
                arg1->unk_00 += (1UL << 32) - temp2;
                --arg1->unk_08;
            }
            arg1->unk_08 -= temp3;
        }
        break;
    case 3:
        arg1->unk_00 = D_00363330[arg0].unk_18;
        arg1->unk_08 = D_00363330[arg0].unk_20;
        temp6 = D_00363330[arg0].unk_08;
        temp7 = D_00363330[arg0].unk_10;
        if (arg1->unk_08 == temp7) {
            arg1->unk_00 -= temp6;
            arg1->unk_08 = 0;
        } else {
            if (arg1->unk_00 >= temp6) {
                arg1->unk_00 -= temp6;
            } else {
                arg1->unk_00 += (1UL << 32) - temp6;
                --arg1->unk_08;
            }
            arg1->unk_08 -= temp7;
        }
        break;
    case 1:
    case 4:
        arg1->unk_08 = 0;
        arg1->unk_00 = 0;
        break;
    }
    temp8 = arg1->unk_00;
    temp10 = D_00363330[arg0].unk_30;
    temp9 = D_00363330[arg0].unk_28;
    temp11 = (u32)(s32)(temp8 + temp9);
    if (temp11 < temp8) {
        ++arg1->unk_08;
    }
    arg1->unk_00 = temp11;
    arg1->unk_08 = arg1->unk_08 + temp10;
    return 0;
}
