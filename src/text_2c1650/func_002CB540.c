#include "common.h"

typedef struct unk_func_002CB540_1 {
    u8 pad_00[4];
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002CB540_1;

typedef struct unk_func_002CB540_0 {
    u32 unk_00;
    u8 pad_04[0x10];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x5821 - 0x1C];
    u8 unk_5821;
    u8 pad_5822[0x6B4C - 0x5822];
    s32 unk_6B4C;
    u8 pad_6B50[0x6BD4 - 0x6B50];
    unk_func_002CB540_1 *unk_6BD4;
} unk_func_002CB540_0;

void func_002CB540(unk_func_002CB540_0 *arg0) {
    arg0->unk_5821 = 0;
    if (arg0->unk_00 & 0x2000) {
        switch (arg0->unk_6B4C) {
        case 4:
        case 7:
            arg0->unk_6BD4->unk_04 = 1;
            arg0->unk_6BD4->unk_08 = 1.0f;
            arg0->unk_6BD4->unk_0C = 1.0f;
            break;
        case 5:
        case 8:
            arg0->unk_6BD4->unk_04 = 2;
            arg0->unk_6BD4->unk_08 = -1.0f;
            arg0->unk_6BD4->unk_0C = -1.0f;
            break;
        case 6:
        case 9:
            arg0->unk_6BD4->unk_04 = 3;
            arg0->unk_6BD4->unk_08 = 1.0f;
            arg0->unk_6BD4->unk_0C = 1.0f;
            break;
        default:
            arg0->unk_6BD4->unk_04 = 0;
            break;
        }
        if ((arg0->unk_14 == 0x405 && arg0->unk_18 == 0x900) || (arg0->unk_14 == 0x404 && arg0->unk_18 == 0x901)) {
            arg0->unk_6BD4->unk_08 = -arg0->unk_6BD4->unk_08;
        }
    } else {
        arg0->unk_6BD4->unk_04 = 0;
    }
}
