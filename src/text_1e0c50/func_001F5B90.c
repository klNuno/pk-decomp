/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F5B90_0;

typedef struct {
    u8 pad_00[0x34];
    unk_func_001F5B90_0 unk_34;
    u8 pad_40[0xC];
    unk_func_001F5B90_0 unk_4C;
} unk_func_001F5B90_1;

typedef struct {
    u8 pad_00[0x18];
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[0x48];
    s32 unk_68;
    u8 pad_6C[6];
    u16 unk_72;
} unk_func_001F5B90_2;

typedef struct {
    u8 pad_00[8];
    unk_func_001F5B90_1 *unk_08;
    unk_func_001F5B90_2 *unk_0C;
    u8 pad_10[0x10];
    unk_func_001F5B90_0 unk_20;
    unk_func_001F5B90_0 unk_2C;
    u8 pad_38[0x18];
    unk_func_001F5B90_0 unk_50;
    u8 pad_5C[0x50];
    unk_func_001F5B90_0 unk_AC;
    unk_func_001F5B90_0 unk_B8;
} unk_func_001F5B90_3;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_001F41C0(unk_func_001F5B90_3 *, unk_func_001F5B90_0 *);
void func_001F5230(unk_func_001F5B90_3 *, unk_func_001F5B90_0 *, unk_func_001F5B90_0 *, f32 *, f32 *);
void func_001F53D0(unk_func_001F5B90_0 *, f32, f32, unk_func_001F5B90_0 *);
void func_001F5B00(unk_func_001F5B90_1 *, unk_func_001F5B90_0 *);
extern s8 D_00360154;
extern s8 D_00360158;

#define UNK_001F5B90_0(arg, temp) \
    if (D_00360158) { \
        temp = func_001E60E0(func_00151360((arg)->unk_08->unk_4C.unk_00) \
                          + func_00151360((arg)->unk_08->unk_4C.unk_04) \
                          + func_00151360((arg)->unk_08->unk_4C.unk_08)); \
        if (0.0f != temp) { \
            temp = 1.0f / temp; \
            (arg)->unk_B8.unk_00 = temp * (arg)->unk_08->unk_4C.unk_00; \
            (arg)->unk_B8.unk_04 = temp * (arg)->unk_08->unk_4C.unk_04; \
            (arg)->unk_B8.unk_08 = temp * (arg)->unk_08->unk_4C.unk_08; \
        } else { \
            (arg)->unk_B8 = (arg)->unk_08->unk_4C; \
        } \
    } else { \
        (arg)->unk_B8.unk_00 = 0.0f; \
        (arg)->unk_B8.unk_04 = 0.0f; \
        (arg)->unk_B8.unk_08 = 1.0f; \
    }

void func_001F5B90(unk_func_001F5B90_3 *arg0)
{
    unk_func_001F5B90_0 temp;
    unk_func_001F5B90_0 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    f32 temp8;
    f32 temp9;

    if (arg0->unk_0C->unk_72 & 0x2000) {
        UNK_001F5B90_0(arg0, temp8)
        D_00360154 = 1;
        ((s32 *)&arg0->unk_2C)[0] = ((s32 *)&arg0->unk_08->unk_34)[0];
        ((s32 *)&arg0->unk_2C)[1] = ((s32 *)&arg0->unk_08->unk_34)[1];
        ((s32 *)&arg0->unk_2C)[2] = ((s32 *)&arg0->unk_08->unk_34)[2];
        arg0->unk_AC.unk_00 = arg0->unk_2C.unk_00 - arg0->unk_20.unk_00;
        arg0->unk_AC.unk_04 = arg0->unk_2C.unk_04 - arg0->unk_20.unk_04;
        arg0->unk_AC.unk_08 = arg0->unk_2C.unk_08 - arg0->unk_20.unk_08;
        return;
    }
    if (arg0->unk_0C->unk_68 == 0) {
        UNK_001F5B90_0(arg0, temp9)
        func_001F41C0(arg0, &temp);
        ((s32 *)&arg0->unk_2C)[0] = ((s32 *)&arg0->unk_20)[0];
        ((s32 *)&arg0->unk_2C)[1] = ((s32 *)&arg0->unk_20)[1];
        ((s32 *)&arg0->unk_2C)[2] = ((s32 *)&arg0->unk_20)[2];
        arg0->unk_AC.unk_08 = arg0->unk_AC.unk_04 = arg0->unk_AC.unk_00 = 0.0f;
        return;
    }
    temp2.unk_00 = arg0->unk_20.unk_00 - arg0->unk_50.unk_00;
    temp2.unk_04 = arg0->unk_20.unk_04 - arg0->unk_50.unk_04;
    temp2.unk_08 = arg0->unk_20.unk_08 - arg0->unk_50.unk_08;
    if (temp2.unk_00 == arg0->unk_B8.unk_00 && temp2.unk_04 == arg0->unk_B8.unk_04) {
        temp2.unk_00 += 0.5f;
    }
    func_001F41C0(arg0, &temp);
    func_001F5230(arg0, &temp, &temp2, &temp6, &temp7);
    func_001F53D0(&temp, temp6, temp7, &arg0->unk_B8);
    temp3 = func_00151360(temp2.unk_00) + func_00151360(temp2.unk_04) + func_00151360(temp2.unk_08);
    temp4 = arg0->unk_0C->unk_18;
    temp5 = arg0->unk_0C->unk_1C;
    if (temp3 < func_00151360(temp4)) {
        temp3 = temp4;
    } else if (!(temp3 <= func_00151360(temp5))) {
        temp3 = temp5;
    } else {
        temp3 = func_001E60E0(temp3);
    }
    if (temp3 <= 0.01f) {
        temp3 = 0.01f;
    }
    temp.unk_00 = temp3 * temp.unk_00;
    temp.unk_04 = temp3 * temp.unk_04;
    temp.unk_08 = temp3 * temp.unk_08;
    arg0->unk_2C.unk_00 = arg0->unk_50.unk_00 + temp.unk_00;
    arg0->unk_2C.unk_04 = arg0->unk_50.unk_04 + temp.unk_04;
    arg0->unk_2C.unk_08 = arg0->unk_50.unk_08 + temp.unk_08;
    func_001F5B00(arg0->unk_08, &arg0->unk_2C);
    arg0->unk_AC.unk_00 = arg0->unk_2C.unk_00 - arg0->unk_20.unk_00;
    arg0->unk_AC.unk_04 = arg0->unk_2C.unk_04 - arg0->unk_20.unk_04;
    arg0->unk_AC.unk_08 = arg0->unk_2C.unk_08 - arg0->unk_20.unk_08;
}
