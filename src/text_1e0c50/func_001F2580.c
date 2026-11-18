/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001F2580_0;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_001F2580_2;

typedef struct {
    f32 unk_00;
    unk_001F2580_2 unk_04;
    u8 pad_10[8];
} unk_001F2580_1;

extern s32 D_005AB800[];

void func_001388F0(unk_001F2580_1 *, unk_001F2580_0 *, unk_001F2580_0 *);
u32 func_0019D250(void);
s32 func_001E6A60(s32, s32);
void func_001FDEF0(unk_001F2580_0 *, unk_001F2580_0 *, unk_001F2580_2 *);
f32 func_001FE030(unk_001F2580_0 *, unk_001F2580_0 *, s32);

void func_001F2580(s32 arg0, unk_001F2580_0 *arg1, unk_001F2580_0 *arg2, unk_001F2580_2 *arg3,
                  unk_001F2580_0 *arg4, f32 arg5, s32 arg6, s32 arg7)
{
    unk_001F2580_1 temp0;
    unk_001F2580_0 temp1;
    unk_001F2580_0 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    s32 temp6;

    temp1.unk_00 = arg4->unk_00 - arg2->unk_00;
    temp1.unk_04 = arg4->unk_04 - arg2->unk_04;
    temp1.unk_08 = arg4->unk_08 - arg2->unk_08;
    func_001FDEF0(&temp1, &temp1, arg3);
    temp2.unk_00 = arg1->unk_00 - arg2->unk_00;
    temp2.unk_04 = arg1->unk_04 - arg2->unk_04;
    temp2.unk_08 = arg1->unk_08 - arg2->unk_08;
    func_001FDEF0(&temp2, &temp2, arg3);
    temp3 = func_001FE030(&temp2, &temp1, 0);
    temp4 = arg5 / (f32)arg6;
    temp6 = D_005AB800[0] - func_001E6A60(5, arg0);
    if (temp6 < arg7) {
        temp4 = (f32)temp6 * (temp4 / (f32)arg7);
    }
    if (arg6 - arg7 < temp6) {
        temp5 = (f32)temp6 * -(temp4 / (f32)arg7);
        temp4 = temp5 + (f32)arg6 * temp4 / (f32)arg7;
    }
    ((unk_001F2580_2 *)(void *)&temp0.unk_04)->unk_00 = arg3->unk_00;
    ((unk_001F2580_2 *)(void *)&temp0.unk_04)->unk_04 = arg3->unk_04;
    ((unk_001F2580_2 *)(void *)&temp0.unk_04)->unk_08 = arg3->unk_08;
    temp4 *= (f32)func_0019D250();
    temp0.unk_00 = temp4;
    temp1.unk_00 = arg4->unk_00 - arg2->unk_00;
    temp1.unk_04 = arg4->unk_04 - arg2->unk_04;
    temp1.unk_08 = arg4->unk_08 - arg2->unk_08;
    func_001388F0(&temp0, &temp1, arg1);
    arg1->unk_00 = arg1->unk_00 + arg2->unk_00;
    arg1->unk_04 = arg1->unk_04 + arg2->unk_04;
    arg1->unk_08 = arg1->unk_08 + arg2->unk_08;
}
