/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_001E43E0_0;

typedef struct {
    s16 unk_00, unk_02, unk_04;
} unk_func_001E43E0_1;

typedef struct {
    u8 pad_00[4];
    unk_func_001E43E0_1 *unk_04;
    unk_func_001E43E0_0 *unk_08;
    s16 unk_0C;
} unk_func_001E43E0_2;

typedef struct {
    f32 unk_00;
    u8 pad_04[4];
    s16 unk_08;
} unk_func_001E43E0_3;

typedef struct {
    s16 unk_00, unk_02;
    u8 pad_04[4];
} unk_func_001E43E0_4;

typedef struct {
    void *unk_00;
    s16 unk_04;
} unk_func_001E43E0_5;

typedef struct {
    u8 pad_00[2];
    s16 unk_02;
    u8 pad_04[4];
    unk_func_001E43E0_0 *unk_08;
    s16 *unk_0C;
    void **unk_10;
} unk_func_001E43E0_6;

extern unk_func_001E43E0_0 D_00333D10;
s32 func_001E1F60(void *, unk_func_001E43E0_0 *, unk_func_001E43E0_0 *, unk_func_001E43E0_0 *,
                 unk_func_001E43E0_0 *, unk_func_001E43E0_0 *, f32 *, unk_func_001E43E0_0 *, f32);
u8 func_001E1BA0(void *, unk_func_001E43E0_0 *, f32);
s32 func_001E35A0(void *, void *, void *);

s32 func_001E43E0(void *arg0, unk_func_001E43E0_6 *arg1) {
    f32 temp1;
    unk_func_001E43E0_0 temp2;
    unk_func_001E43E0_0 temp0 = D_00333D10;
    s16 i;
    s16 j;
    s16 k;

    for (i = 0; i < arg1->unk_02; i++) {
        switch (arg1->unk_0C[i]) {
        case 1: {
            unk_func_001E43E0_2 *temp3 = arg1->unk_10[i];
            k = 0;
            for (j = 0; j < temp3->unk_0C; j++) {
                unk_func_001E43E0_1 *temp4 = &temp3->unk_04[j];
                unk_func_001E43E0_0 *temp5 = &temp3->unk_08[j];
                unk_func_001E43E0_0 *temp6 = arg1->unk_08;
                unk_func_001E43E0_0 *temp7 = &temp6[temp4->unk_00];
                if (func_001E1F60(arg0, &temp0, temp7, &temp6[temp4->unk_02],
                                  &temp6[temp4->unk_04], temp5, &temp1, &temp2,
                                  -(temp5->unk_00 * temp7->unk_00 + temp5->unk_04 * temp7->unk_04 +
                                    temp5->unk_08 * temp7->unk_08))) {
                    k++;
                }
            }
            if (k % 2) {
                return 1;
            }
            break;
        }
        case 7: {
            unk_func_001E43E0_5 *temp3 = arg1->unk_10[i];
            for (j = 0; j < temp3->unk_04; j++) {
                unk_func_001E43E0_3 *temp4 = &((unk_func_001E43E0_3 *)temp3->unk_00)[j];
                if (func_001E1BA0(arg0, &arg1->unk_08[temp4->unk_08], temp4->unk_00)) {
                    return 1;
                }
            }
            break;
        }
        case 8: {
            unk_func_001E43E0_5 *temp3 = arg1->unk_10[i];
            for (j = 0; j < temp3->unk_04; j++) {
                unk_func_001E43E0_4 *temp4 = &((unk_func_001E43E0_4 *)temp3->unk_00)[j];
                if (func_001E35A0(arg0, &arg1->unk_08[temp4->unk_00], &arg1->unk_08[temp4->unk_02])) {
                    return 1;
                }
            }
            break;
        }
        }
    }
    return 0;
}
