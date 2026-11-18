/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001ADE10_0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
    void *unk_20;
} unk_func_001ADE10_0;

typedef struct unk_func_001ADE10_1 {
    unk_func_001ADE10_0 *unk_00;
    u8 pad_04[4];
    struct unk_func_001ADE10_1 *unk_08;
    u8 pad_0C[4];
    u8 unk_10;
    u8 pad_11[3];
} unk_func_001ADE10_1;

typedef struct unk_func_001ADE10_2 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xC];
} unk_func_001ADE10_2;

typedef struct unk_func_001ADE10_3 {
    u8 pad_00[0xA4];
    unk_func_001ADE10_1 *unk_A4;
} unk_func_001ADE10_3;

unk_func_001ADE10_3 **HIE_fn_hGetSuperObjectObject(s32);
f32 func_00133350(s32, f32, f32);
void func_00155C70(void *);
void func_00155E80(void *, f32 *);
void func_001565B0(void *, f32 *);
void *func_001979A0(unk_func_001ADE10_0 *);
void func_001979E0(s32, unk_func_001ADE10_0 *);
unk_func_001ADE10_2 **func_001A7060(unk_func_001ADE10_3 *);
void func_001AE100(unk_func_001ADE10_0 *, f32);
unk_func_001ADE10_0 *func_001C4FF0(void);
extern s32 D_0035F560;

void func_001ADE10(s32 arg0, s16 arg1, s16 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7)
{
    unk_func_001ADE10_0 *temp;
    unk_func_001ADE10_1 *temp2;
    unk_func_001ADE10_2 *temp3;
    unk_func_001ADE10_3 *temp4;
    unk_func_001ADE10_1 *temp5;
    void *temp6;
    f32 temp7;
    f32 temp8[3];

    temp4 = *HIE_fn_hGetSuperObjectObject(arg0);
    temp3 = *func_001A7060(temp4);
    temp5 = temp4->unk_A4;
    temp = func_001C4FF0();
    func_001979E0(arg0, temp);
    temp2 = &temp5[arg1];
    temp2->unk_10 = 1;
    func_00155C70(temp->unk_20);
    temp2->unk_00 = temp;
    temp->unk_00 = temp3[arg2].unk_04 ? 8 : 1;
    temp->unk_04 = temp3[arg2].unk_04;
    func_001AE100(temp, 255.0f);
    if (arg1) {
        temp5[arg1 - 1].unk_08 = temp2;
    }
    if (temp != NULL) {
        temp6 = func_001979A0(temp);
        temp8[0] = (0.5f * arg5) + (arg3 + func_00133350(D_0035F560, -arg6, arg6));
        temp8[1] = 0.0f;
        temp8[2] = arg4 + func_00133350(D_0035F560, -arg6, arg6);
        func_00155E80(temp6, temp8);
        if (!((arg7 - 1.0f) <= 0.0f)) {
            temp7 = arg7 - 1.0f;
        } else {
            temp7 = -(arg7 - 1.0f);
        }
        if (!(temp7 <= 0.0001f)) {
            temp8[0] = arg7;
            temp8[1] = arg7;
            temp8[2] = arg7;
            func_001565B0(temp6, temp8);
        }
    }
}
