/* profile: opt */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_00269690_0;

typedef struct {
    u8 pad_00[0x90];
    f32 unk_90;
} unk_func_00269690_1;

extern void func_002592B0(unk_func_00269690_0 *, unk_func_00269690_0 *, unk_func_00269690_0 *);
extern void func_002699F0(unk_func_00269690_1 *, f32, f32, unk_func_00269690_0 *, unk_func_00269690_0 *, unk_func_00269690_0 *);

void func_00269690(unk_func_00269690_1 *arg0)
{
    unk_func_00269690_0 temp0, temp1, temp2;
    f32 temp3, temp4;

    temp3 = 1.5f * arg0->unk_90;
    temp4 = 0.25f * temp3;
    temp0.unk_00 = 0.0f;
    temp0.unk_04 = 0.0f;
    temp0.unk_08 = 1.0f;
    func_002592B0(&temp0, &temp1, &temp2);
    func_002699F0(arg0, temp3, temp4, &temp0, &temp1, &temp2);

    temp0.unk_00 = 1.0f;
    temp0.unk_04 = 0.0f;
    temp0.unk_08 = 0.0f;
    func_002592B0(&temp0, &temp1, &temp2);
    func_002699F0(arg0, temp3, temp4, &temp0, &temp1, &temp2);

    temp0.unk_00 = -1.0f;
    temp0.unk_04 = 0.0f;
    temp0.unk_08 = 0.0f;
    func_002592B0(&temp0, &temp1, &temp2);
    func_002699F0(arg0, temp3, temp4, &temp0, &temp1, &temp2);

    temp0.unk_00 = 0.0f;
    temp0.unk_04 = 1.0f;
    temp0.unk_08 = 0.0f;
    func_002592B0(&temp0, &temp1, &temp2);
    func_002699F0(arg0, temp3, temp4, &temp0, &temp1, &temp2);

    temp0.unk_00 = 0.0f;
    temp0.unk_04 = -1.0f;
    temp0.unk_08 = 0.0f;
    func_002592B0(&temp0, &temp1, &temp2);
    func_002699F0(arg0, temp3, temp4, &temp0, &temp1, &temp2);

    temp3 = 0.9f * arg0->unk_90;
    temp0.unk_00 = 0.707f;
    temp0.unk_04 = 0.707f;
    temp0.unk_08 = 0.707f;
    func_002592B0(&temp0, &temp1, &temp2);
    func_002699F0(arg0, temp3, temp4, &temp0, &temp1, &temp2);

    temp0.unk_00 = -0.707f;
    temp0.unk_04 = 0.707f;
    temp0.unk_08 = 0.707f;
    func_002592B0(&temp0, &temp1, &temp2);
    func_002699F0(arg0, temp3, temp4, &temp0, &temp1, &temp2);

    temp0.unk_00 = 0.707f;
    temp0.unk_04 = -0.707f;
    temp0.unk_08 = 0.707f;
    func_002592B0(&temp0, &temp1, &temp2);
    func_002699F0(arg0, temp3, temp4, &temp0, &temp1, &temp2);

    temp0.unk_00 = -0.707f;
    temp0.unk_04 = -0.707f;
    temp0.unk_08 = 0.707f;
    func_002592B0(&temp0, &temp1, &temp2);
    func_002699F0(arg0, temp3, temp4, &temp0, &temp1, &temp2);

    temp3 = 1.2f * arg0->unk_90;
    temp0.unk_00 = 0.707f;
    temp0.unk_04 = 0.707f;
    temp0.unk_08 = -0.707f;
    func_002592B0(&temp0, &temp1, &temp2);
    func_002699F0(arg0, temp3, temp4, &temp0, &temp1, &temp2);

    temp0.unk_00 = -0.707f;
    temp0.unk_04 = -0.707f;
    temp0.unk_08 = -0.707f;
    func_002592B0(&temp0, &temp1, &temp2);
    func_002699F0(arg0, temp3, temp4, &temp0, &temp1, &temp2);
}
