#include "common.h"

typedef struct {
    u8 pad_00[0x60];
} unk_func_002CD0C0_1;

typedef struct {
    u8 pad_00[0x70];
} unk_func_002CD0C0_2;

typedef struct {
    u8 pad_00[0x10];
} unk_func_002CD0C0_3;

typedef struct {
    u8 pad_00[0x180];
    unk_func_002CD0C0_1 unk_180[2];
    unk_func_002CD0C0_1 *unk_240;
    u8 pad_244[0x5C];
    unk_func_002CD0C0_2 unk_2A0[2];
    unk_func_002CD0C0_2 *unk_380;
    u8 pad_384[0x5D2C];
    unk_func_002CD0C0_3 unk_60B0[2];
    unk_func_002CD0C0_3 *unk_60D0;
    u8 pad_60D4[0x3C];
    s32 unk_6110;
    u8 pad_6114[0xC];
    unk_func_002CD0C0_3 unk_6120[2];
    unk_func_002CD0C0_3 *unk_6140;
    u8 pad_6144[0x1C];
    unk_func_002CD0C0_3 unk_6160[2];
    u8 pad_6180[4];
    unk_func_002CD0C0_3 *unk_6184;
    u8 pad_6188[0x38];
    unk_func_002CD0C0_3 unk_61C0[2];
    unk_func_002CD0C0_3 *unk_61E0;
} unk_func_002CD0C0_0;

extern unk_func_002CD0C0_0 D_007B2370;
extern unk_func_002CD0C0_2 *D_003604F8;

void func_002CD0C0(s32 arg0) {
    unk_func_002CD0C0_0 *p;
    unk_func_002CD0C0_2 *q;

    p = &D_007B2370;
    if (arg0 < 0 || arg0 >= 2) {
        return;
    }
    p->unk_6110 = arg0;
    p->unk_240 = &p->unk_180[arg0];
    q = &p->unk_2A0[arg0];
    p->unk_380 = q;
    p->unk_6184 = &p->unk_6160[arg0];
    D_003604F8 = q;
    p->unk_60D0 = &p->unk_60B0[arg0];
    p->unk_6140 = &p->unk_6120[arg0];
    p->unk_61E0 = &p->unk_61C0[arg0];
}
