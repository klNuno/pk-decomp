/* profile: opt_300_noprop */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_0030C7B0_0;

extern s32 D_007DC190[];
extern s32 D_007DD190[];
extern s32 D_007DE190[];

void func_0030C7B0(unk_func_0030C7B0_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp = 0;

    u32 temp2 = arg2 != 0;

    if (temp2) {
        s32 temp3 = arg2 & 0x3FF;
        s32 temp4 = -0x400;
        s32 temp5 = D_007DE190[temp3];
        temp2 = (u8)((arg2 & temp4) == (temp5 &= temp4)) > 0U;
    }
    if (temp2) {
        temp = D_007DD190[arg2 & 0x3FF];
    }
    switch (arg1) {
    case 0x30:
        D_007DC190[arg2 & 0x3FF] = arg0->unk_04;
        arg0->unk_04 = arg2;
        break;
    case 0x44:
        D_007DC190[arg2 & 0x3FF] = arg0->unk_00;
        arg0->unk_00 = arg2;
        arg0->unk_04 = D_007DD190[arg0->unk_04 & 0x3FF];
        break;
    case 0x54:
        D_007DC190[arg2 & 0x3FF] = arg0->unk_00;
        arg0->unk_00 = arg2;
        arg0->unk_04 = D_007DD190[arg0->unk_04 & 0x3FF];
        break;
    case 0x31:
        arg0->unk_00 = temp;
        break;
    case 0x32:
        arg0->unk_00 = temp;
        break;
    case 0x33:
        arg0->unk_00 = temp;
        break;
    case 0x35:
        break;
    case 0x36:
        arg0->unk_00 = temp;
        break;
    case 0x37:
        arg0->unk_04 = temp;
        break;
    case 0x38:
        arg0->unk_00 = temp;
        break;
    case 0x23:
        arg0->unk_04 = D_007DD190[arg0->unk_04 & 0x3FF];
        break;
    case 0x45:
        arg0->unk_00 = D_007DD190[arg0->unk_00 & 0x3FF];
        break;
    case 0x42:
        arg0->unk_00 = temp;
        break;
    case 0x43:
        arg0->unk_04 = D_007DD190[arg0->unk_04 & 0x3FF];
        arg0->unk_00 = temp;
        break;
    case 0x46:
        arg0->unk_00 = temp;
        break;
    case 0x47:
        arg0->unk_00 = temp;
        break;
    case 0x48:
        arg0->unk_00 = temp;
        break;
    case 0x49:
        arg0->unk_00 = temp;
        break;
    case 0x55:
        arg0->unk_00 = D_007DD190[arg0->unk_00 & 0x3FF];
        break;
    case 0x52:
        arg0->unk_00 = temp;
        break;
    case 0x53:
        arg0->unk_04 = D_007DD190[arg0->unk_04 & 0x3FF];
        arg0->unk_00 = temp;
        break;
    case 0x56:
        arg0->unk_00 = temp;
        break;
    case 0x57:
        arg0->unk_00 = temp;
        break;
    case 0x58:
        arg0->unk_00 = temp;
        break;
    case 0x15:
        arg0->unk_00 = temp;
        break;
    case 0x14:
        D_007DC190[arg2 & 0x3FF] = arg0->unk_00;
        arg0->unk_00 = arg2;
        break;
    }
}
