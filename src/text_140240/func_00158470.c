#include "common.h"

typedef struct unk_func_00158470_0 {
    s16 unk_00;
    u8 pad_02[0x7];
    u8 unk_09;
    u8 unk_0A;
    u8 pad_0B;
} unk_func_00158470_0;

typedef struct unk_func_00158470_1 {
    u8 pad_00[0x2];
    u16 unk_02;
    u32 unk_04;
} unk_func_00158470_1;

typedef struct unk_func_00158470_2 {
    u8 pad_00[0x8];
    unk_func_00158470_1 *unk_08;
} unk_func_00158470_2;

typedef struct unk_func_00158470_3 {
    u8 unk_00;
    u8 pad_01[0x3];
    unk_func_00158470_2 *unk_04;
    u8 pad_08[0xFC];
} unk_func_00158470_3;

extern u32 D_003312A0[];
extern unk_func_00158470_0 *D_0035F968;
extern u8 D_003678BC[][0x104];
extern unk_func_00158470_3 D_00367ABC[];

u8 func_00158470(unk_func_00158470_0 *arg0) {
    s32 idx;
    s32 s;
    unk_func_00158470_2 *obj;
    unk_func_00158470_0 *p;
    u8 ret;
    u32 mask;

    D_0035F968 = arg0 + 1;
    idx = D_0035F968->unk_00;
    obj = D_00367ABC[idx].unk_04;
    D_0035F968++;
    ret = 0;
    if (D_00367ABC[idx].unk_00 == 4 || D_00367ABC[idx].unk_00 == 3) {
        p = D_0035F968;
        s = p->unk_00;
        switch (s) {
        case 0:
            ret = ((obj->unk_08->unk_02 & 4) && D_003678BC[idx][s] >= p->unk_09 && D_003678BC[idx][s] <= p->unk_0A) ? 1 : 0;
            break;
        case 1:
            ret = ((obj->unk_08->unk_02 & 8) && D_003678BC[idx][s] >= p->unk_09 && D_003678BC[idx][s] <= p->unk_0A) ? 1 : 0;
            break;
        case 2:
            ret = ((obj->unk_08->unk_02 & 1) && D_003678BC[idx][s] >= p->unk_09 && D_003678BC[idx][s] <= p->unk_0A) ? 1 : 0;
            break;
        case 3:
            ret = ((obj->unk_08->unk_02 & 2) && D_003678BC[idx][s] >= p->unk_09 && D_003678BC[idx][s] <= p->unk_0A) ? 1 : 0;
            break;
        default:
            if (s >= 0xC && s < 0x1C) {
                mask = D_003312A0[s];
                ret = ((u8)((mask & obj->unk_08->unk_04) == mask) && D_003678BC[idx][s] >= p->unk_09 && D_003678BC[idx][s] <= p->unk_0A) ? 1 : 0;
            }
            break;
        }
    }
    D_0035F968++;
    return ret;
}
