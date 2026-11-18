#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00316E00_1;

typedef struct {
    u8 pad_00[0x28];
    u32 unk_28;
    unk_func_00316E00_1 *unk_2C;
    u8 pad_30[0x38];
    u32 unk_68;
    unk_func_00316E00_1 *unk_6C;
    u8 pad_70[4];
    u32 unk_74;
    unk_func_00316E00_1 *unk_78;
    u8 pad_7C[4];
    u32 unk_80;
    unk_func_00316E00_1 *unk_84;
    u8 pad_88[0x30];
    u32 unk_B8;
    unk_func_00316E00_1 *unk_BC;
} unk_func_00316E00_0;

void func_00316E00(unk_func_00316E00_0 *arg0) {
    u32 i;

    for (i = 0; i < arg0->unk_28; i++) {
        arg0->unk_2C[i].unk_00 = 0;
        arg0->unk_2C[i].unk_04 = 0;
        arg0->unk_2C[i].unk_08 = 0;
    }
    for (i = 0; i < arg0->unk_74; i++) {
        arg0->unk_78[i].unk_00 = 0;
        arg0->unk_78[i].unk_04 = 0;
        arg0->unk_78[i].unk_08 = 0;
    }
    for (i = 0; i < arg0->unk_80; i++) {
        arg0->unk_84[i].unk_00 = 0;
        arg0->unk_84[i].unk_04 = 0;
        arg0->unk_84[i].unk_08 = 0;
    }
    for (i = 0; i < arg0->unk_B8; i++) {
        arg0->unk_BC[i].unk_00 = 0;
        arg0->unk_BC[i].unk_04 = 0;
        arg0->unk_BC[i].unk_08 = 0;
    }
    for (i = 0; i < arg0->unk_68; i++) {
        arg0->unk_6C[i].unk_00 = 0;
        arg0->unk_6C[i].unk_04 = 0;
        arg0->unk_6C[i].unk_08 = 0;
    }
}
