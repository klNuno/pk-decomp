/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002034B0_3 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002034B0_3;

typedef struct unk_func_002034B0_1 {
    u8 pad_00[0x10];
    unk_func_002034B0_3 unk_10;
    unk_func_002034B0_3 unk_1C;
    u8 pad_28[0x38];
    s32 unk_60;
    u8 pad_64[0x11];
    u8 unk_75;
    u8 unk_76;
} unk_func_002034B0_1;

typedef struct unk_func_002034B0_2 {
    u8 pad_00[0x18];
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[8];
    f32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
} unk_func_002034B0_2;

typedef struct unk_func_002034B0_0 {
    u8 pad_00[8];
    unk_func_002034B0_1 *unk_08;
    unk_func_002034B0_2 *unk_0C;
    unk_func_002034B0_2 *unk_10;
    u8 pad_14[0xC];
    unk_func_002034B0_3 unk_20;
} unk_func_002034B0_0;

void func_001B4DD0();
void func_00203450();
void func_001F5B90();

void func_002034B0(unk_func_002034B0_0 *arg0, unk_func_002034B0_3 *arg1) {
    arg0->unk_08->unk_76 = 0;
    func_001B4DD0(arg0->unk_08);
    func_00203450(arg0, arg1);
    arg0->unk_08->unk_60 = 1;
    arg0->unk_08->unk_75 |= 4;
    arg0->unk_0C->unk_28 = arg0->unk_10->unk_28;
    arg0->unk_0C->unk_30 = arg0->unk_10->unk_30;
    arg0->unk_0C->unk_18 = arg0->unk_10->unk_18;
    arg0->unk_0C->unk_1C = arg0->unk_10->unk_1C;
    func_001F5B90(arg0);
    ((s32 *)&arg0->unk_08->unk_10)[0] = ((s32 *)&arg0->unk_20)[0];
    ((s32 *)&arg0->unk_08->unk_10)[1] = ((s32 *)&arg0->unk_20)[1];
    ((s32 *)&arg0->unk_08->unk_10)[2] = ((s32 *)&arg0->unk_20)[2];
    ((s32 *)&arg0->unk_08->unk_1C)[0] = ((s32 *)arg1)[0];
    ((s32 *)&arg0->unk_08->unk_1C)[1] = ((s32 *)arg1)[1];
    ((s32 *)&arg0->unk_08->unk_1C)[2] = ((s32 *)arg1)[2];
}
