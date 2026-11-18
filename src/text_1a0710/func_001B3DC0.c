/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    f32 unk_60;
    f32 unk_64;
    u32 unk_68, unk_6C;
    u16 unk_70, unk_72;
    s32 unk_74;
    s8 unk_78;
    u8 unk_79;
    u8 pad_7A[2];
} unk_001B3DC0_0;

typedef struct {
    unk_001B3DC0_0 *unk_00[4];
    u8 pad_10[0x23C];
    f32 unk_24C, unk_250;
    u8 pad_254[2];
    u8 unk_256;
} unk_001B3DC0_1;

typedef struct {
    u8 pad_00[0x10];
    unk_001B3DC0_1 *unk_10;
} unk_001B3DC0_2;

extern char D_0034B648[];
extern u8 D_0035F528;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void *func_001B4210(void);
void *func_001B4250(void);
void func_001B5BD0(void *);

void func_001B3DC0(unk_001B3DC0_2 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B648, 0x148);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B648, 0x148);
    }
    if (arg0->unk_10 != NULL) {
        Erm_fn_ClearLastError(0, D_0034B648, 0x14B);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xD, -1, 0xFF, 0xFF, 0, D_0034B648, 0x14B);
    }
    arg0->unk_10 = func_001B4210();
    arg0->unk_10->unk_00[0] = func_001B4250();
    arg0->unk_10->unk_00[1] = func_001B4250();
    arg0->unk_10->unk_00[2] = func_001B4250();
    arg0->unk_10->unk_00[3] = func_001B4250();

    arg0->unk_10->unk_00[0]->unk_08 = arg0->unk_10->unk_00[0]->unk_04 = arg0->unk_10->unk_00[0]->unk_00 = 0.0f;
    arg0->unk_10->unk_00[0]->unk_14 = arg0->unk_10->unk_00[0]->unk_10 = arg0->unk_10->unk_00[0]->unk_0C = 0.0f;
    arg0->unk_10->unk_00[0]->unk_18 = 6.0f;
    arg0->unk_10->unk_00[0]->unk_1C = 6.0f;
    arg0->unk_10->unk_00[0]->unk_20 = 2.0f;
    arg0->unk_10->unk_00[0]->unk_24 = 10.0f;
    arg0->unk_10->unk_00[0]->unk_28 = 0.0f;
    arg0->unk_10->unk_00[0]->unk_2C = 0.0f;
    arg0->unk_10->unk_00[0]->unk_30 = 0.0f;
    arg0->unk_10->unk_00[0]->unk_34 = 0.0f;
    arg0->unk_10->unk_00[0]->unk_38 = 200.0f;
    arg0->unk_10->unk_00[0]->unk_3C = 1.0f;
    arg0->unk_10->unk_00[0]->unk_40 = 0.0f;
    arg0->unk_10->unk_00[0]->unk_44 = 3.14f;
    arg0->unk_10->unk_00[0]->unk_48 = 1.0f;
    arg0->unk_10->unk_00[0]->unk_4C = 0.0f;
    arg0->unk_10->unk_00[0]->unk_50 = 200.0f;
    arg0->unk_10->unk_00[0]->unk_54 = 1.0f;
    arg0->unk_10->unk_00[0]->unk_58 = 0.0f;
    arg0->unk_10->unk_00[0]->unk_5C = 1.5f;
    arg0->unk_10->unk_00[0]->unk_60 = -3.40282205e38f;
    arg0->unk_10->unk_00[0]->unk_64 = 3.40282205e38f;
    arg0->unk_10->unk_00[0]->unk_68 = 0;
    arg0->unk_10->unk_00[0]->unk_6C = 0;
    arg0->unk_10->unk_00[0]->unk_70 = 0;
    arg0->unk_10->unk_00[0]->unk_72 = 0;
    arg0->unk_10->unk_00[0]->unk_74 = -1;
    arg0->unk_10->unk_00[0]->unk_78 = -1;
    arg0->unk_10->unk_00[0]->unk_79 = 0;
    func_001B5BD0(arg0->unk_10);
    arg0->unk_10->unk_24C = 128.0f;
    arg0->unk_10->unk_250 = 1.0f;
    arg0->unk_10->unk_256 = 0;
}
