/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001DC2A0_0;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_001DC2A0_1;

typedef struct {
    f32 unk_00;
    unk_001DC2A0_0 unk_04;
    unk_001DC2A0_0 unk_10;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s16 unk_2C;
    s16 unk_2E;
    unk_001DC2A0_1 unk_30;
    unk_001DC2A0_1 unk_3C;
    unk_001DC2A0_1 unk_48;
    f32 unk_54;
    u8 pad_58[0x10];
} unk_001DC2A0_2;

extern s32 D_0035F514;
extern unk_001DC2A0_2 *D_0035F580;
extern s32 D_0035F584;
extern unk_001DC2A0_2 D_00603EC0[];

s32 func_00161FF0(s32);
u16 func_00162330(s32);
void *memmove(void *, const void *, unsigned int);

#define UNK_00(value) ((value) > 0.0f ? (value) : -(value))
#define UNK_01(dst, src) \
    (dst).unk_00 = (src)->unk_00; \
    (dst).unk_04 = (src)->unk_04; \
    (dst).unk_08 = (src)->unk_08;

#define UNK_02(dst, src) \
    UNK_01(*(unk_001DC2A0_1 *)(void *)&(dst), (unk_001DC2A0_1 *)(void *)(src))

#define UNK_03() \
    { \
        s32 temp0 = 0; \
        unk_001DC2A0_2 *temp1 = D_0035F580 + D_0035F584; \
        unk_001DC2A0_2 *temp2 = temp5; \
        while (temp2++ < temp1) { \
            temp0++; \
        } \
        if (temp2 == D_00603EC0) { \
            temp0--; \
        } \
        if (temp0 != 0) { \
            memmove(temp5 + 1, temp5, temp0 * sizeof(*temp5)); \
        } \
    }

void func_001DC2A0(unk_001DC2A0_1 *arg0, unk_001DC2A0_0 *arg1, unk_001DC2A0_0 *arg2,
                  s32 arg3, f32 arg4, f32 arg5, s32 arg6, s16 arg7, s16 arg8, s32 arg9,
                  s16 arg10, unk_001DC2A0_1 *arg11, unk_001DC2A0_1 *arg12)
{
    s32 temp0;
    s32 temp1;
    unk_001DC2A0_2 *temp2;
    f32 temp3;
    f32 temp4;
    unk_001DC2A0_2 *temp5;
    s32 temp6;

    temp0 = func_00161FF0(arg3);
    if (temp0 != -1 && (func_00162330(temp0) & 8)) {
        temp0 = func_00161FF0(arg6);
        if (temp0 == -1 || (func_00162330(temp0) & 4) != 4) {
            return;
        }
    }

    if (arg8 == 7 || arg8 == 8) {
        for (temp1 = 0, temp2 = D_0035F580; temp1 < D_0035F584; temp2++, temp1++) {
            if (temp2->unk_2E == arg8 && temp2->unk_24 == arg9) {
                temp3 = temp2->unk_00 - arg4;
                if (UNK_00(temp3) < 0.001f &&
                    UNK_00(temp2->unk_10.unk_00 - arg1->unk_00) < 0.005f &&
                    UNK_00(temp2->unk_10.unk_04 - arg1->unk_04) < 0.005f &&
                    UNK_00(temp2->unk_10.unk_08 - arg1->unk_08) < 0.005f &&
                    UNK_00(temp2->unk_04.unk_00 - arg2->unk_00) < 0.005f &&
                    UNK_00(temp2->unk_04.unk_04 - arg2->unk_04) < 0.005f &&
                    UNK_00(temp2->unk_04.unk_08 - arg2->unk_08) < 0.005f) {
                    temp2->unk_28 |= 2;
                    return;
                }
            }
        }
    }

    for (temp5 = D_0035F580, temp6 = 0; temp6 < D_0035F584; temp5++, temp6++) {
        temp4 = arg4 - temp5->unk_00;
        if (UNK_00(temp4) < 0.0001f) {
            if (arg2->unk_00 < temp5->unk_04.unk_00) {
                UNK_03()
                break;
            }
        } else if (arg4 < temp5->unk_00) {
            UNK_03()
            break;
        }
    }

    if (temp6 != D_0035F514) {
        temp5->unk_00 = arg4;
        UNK_01(temp5->unk_30, arg0)
        UNK_02(temp5->unk_10, arg1)
        UNK_02(temp5->unk_04, arg2)
        UNK_01(temp5->unk_3C, arg11)
        UNK_01(temp5->unk_48, arg12)
        temp5->unk_1C = arg3;
        temp5->unk_20 = arg6;
        temp5->unk_2C = arg7;
        temp5->unk_2E = arg8;
        temp5->unk_54 = arg5;
        temp5->unk_24 = arg9;
        temp5->unk_28 = arg10;
        if (D_0035F584 != D_0035F514) {
            D_0035F584++;
        }
    }
}
