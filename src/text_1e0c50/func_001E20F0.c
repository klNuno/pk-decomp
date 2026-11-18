/* profile: opt */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001E20F0_0;

#define MAX3(a, b, c) (((a) > (b) && (a) > (c)) ? (a) : ((b) > (c) ? (b) : (c)))
#define MIN3(a, b, c) (((a) < (b) && (a) < (c)) ? (a) : ((b) < (c) ? (b) : (c)))

s32 func_001E20F0(const unk_001E20F0_0 *arg0, const unk_001E20F0_0 *arg1,
                  const unk_001E20F0_0 *arg2, const unk_001E20F0_0 *arg3,
                  const unk_001E20F0_0 *arg4)
{
    f32 temp1;

    f32 temp2[3];

    temp2[0] = arg0->unk_00 + arg1->unk_00;
    temp2[1] = arg0->unk_04 + arg1->unk_04;
    temp2[2] = arg0->unk_08 + arg1->unk_08;

    {
        u8 temp0 = arg1->unk_00 > 0.0f;
        temp1 = temp0 ? arg0->unk_00 : temp2[0];

        if (MAX3(arg2->unk_00, arg3->unk_00, arg4->unk_00) < temp1) {
            return 0;
        }
        temp2[0] = temp0 ? temp2[0] : arg0->unk_00;
        if (temp2[0] < MIN3(arg2->unk_00, arg3->unk_00, arg4->unk_00)) {
            return 0;
        }
    }
    {
        u8 temp0 = arg1->unk_04 > 0.0f;
        temp1 = temp0 ? arg0->unk_04 : temp2[1];

        if (MAX3(arg2->unk_04, arg3->unk_04, arg4->unk_04) < temp1) {
            return 0;
        }
        temp2[1] = temp0 ? temp2[1] : arg0->unk_04;
        if (temp2[1] < MIN3(arg2->unk_04, arg3->unk_04, arg4->unk_04)) {
            return 0;
        }
    }
    {
        u8 temp0 = arg1->unk_08 > 0.0f;
        temp1 = temp0 ? arg0->unk_08 : temp2[2];

        if (MAX3(arg2->unk_08, arg3->unk_08, arg4->unk_08) < temp1) {
            return 0;
        }
        temp2[2] = temp0 ? temp2[2] : arg0->unk_08;
        if (temp2[2] < MIN3(arg2->unk_08, arg3->unk_08, arg4->unk_08)) {
            return 0;
        }
        return 1;
    }
}
