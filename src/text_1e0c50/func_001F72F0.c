/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F72F0_0;

typedef struct {
    u8 pad_00[0x28];
    f32 unk_28;
    u8 pad_2C[0x46];
    u16 unk_72;
    u8 pad_74[8];
} unk_func_001F72F0_1;

typedef struct {
    u8 pad_00[0xC];
    unk_func_001F72F0_1 *unk_0C;
    u8 pad_10[0x1C];
    unk_func_001F72F0_0 unk_2C;
    u8 pad_38[0x74];
    unk_func_001F72F0_0 unk_AC;
    u8 pad_B8[0x18];
} unk_func_001F72F0_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001F72F0_0 unk_10;
    u8 pad_1C[0x44];
    s32 unk_60;
    u8 pad_64[0x11];
    u8 unk_75;
} unk_func_001F72F0_3;

typedef struct {
    u8 pad_00[8];
    unk_func_001F72F0_3 *unk_08;
    unk_func_001F72F0_1 *unk_0C;
    u8 pad_10[0xC];
    s32 unk_1C;
    unk_func_001F72F0_0 unk_20;
    unk_func_001F72F0_0 unk_2C;
    u8 pad_38[0x74];
    unk_func_001F72F0_0 unk_AC;
} unk_func_001F72F0_4;

extern s8 D_00360150;
void *memcpy(void *, const void *, u32);
f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_001FF6A0(s32, unk_func_001F72F0_2 *);
void func_001F49F0(unk_func_001F72F0_2 *);
void func_001F6260(unk_func_001F72F0_2 *);
s32 func_002011C0(unk_func_001F72F0_2 *, unk_func_001F72F0_0 *, s8);

s32 func_001F72F0(unk_func_001F72F0_4 *arg0, f32 arg1)
{
    unk_func_001F72F0_1 temp0;
    unk_func_001F72F0_2 temp1;
    s8 temp2;

    memcpy(&temp0, arg0->unk_0C, sizeof(temp0));
    temp0.unk_28 = arg1;
    func_001FF6A0(arg0->unk_1C, &temp1);
    temp1.unk_0C = &temp0;
    func_001F49F0(&temp1);
    func_001F6260(&temp1);

    if (D_00360150) {
        unk_func_001F72F0_0 temp3;
        unk_func_001F72F0_0 temp4;

        temp3.unk_00 = arg0->unk_08->unk_10.unk_00 - arg0->unk_20.unk_00;
        temp3.unk_04 = arg0->unk_08->unk_10.unk_04 - arg0->unk_20.unk_04;
        temp3.unk_08 = arg0->unk_08->unk_10.unk_08 - arg0->unk_20.unk_08;
        temp4.unk_00 = arg0->unk_08->unk_10.unk_00 - temp1.unk_2C.unk_00;
        temp4.unk_04 = arg0->unk_08->unk_10.unk_04 - temp1.unk_2C.unk_04;
        temp4.unk_08 = arg0->unk_08->unk_10.unk_08 - temp1.unk_2C.unk_08;

        if (!(func_001E60E0(func_00151360(temp3.unk_00) + func_00151360(temp3.unk_04) + func_00151360(temp3.unk_08)) <= func_001E60E0(func_00151360(temp4.unk_00) + func_00151360(temp4.unk_04) + func_00151360(temp4.unk_08))))
            return 0;
    }

    temp2 = 0;
    if ((arg0->unk_08->unk_75 & 4) && arg0->unk_08->unk_60 == 1) {
        temp2 = 3;
        if (arg0->unk_0C->unk_72 & 8)
            temp2 &= ~1;
    }
    if (func_002011C0(&temp1, &temp1.unk_2C, temp2))
        return 0;

    ((s32 *)&arg0->unk_2C)[0] = ((s32 *)&temp1.unk_2C)[0];
    ((s32 *)&arg0->unk_2C)[1] = ((s32 *)&temp1.unk_2C)[1];
    ((s32 *)&arg0->unk_2C)[2] = ((s32 *)&temp1.unk_2C)[2];
    ((s32 *)&arg0->unk_AC)[0] = ((s32 *)&temp1.unk_AC)[0];
    ((s32 *)&arg0->unk_AC)[1] = ((s32 *)&temp1.unk_AC)[1];
    ((s32 *)&arg0->unk_AC)[2] = ((s32 *)&temp1.unk_AC)[2];
    return 1;
}