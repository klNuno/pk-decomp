/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001961C0_0;

typedef struct {
    u8 pad_00[0xC];
    unk_func_001961C0_0 *unk_0C;
    unk_func_001961C0_0 *unk_10;
} unk_func_001961C0_1;

typedef struct {
    unk_func_001961C0_1 *unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x1C];
    s16 unk_28;
    u8 pad_2A[2];
} unk_func_001961C0_2;

typedef struct {
    f32 unk_00;
    u8 pad_04[4];
    s16 unk_08;
    u8 pad_0A[2];
} unk_func_001961C0_3;

typedef struct {
    void *unk_00;
    s16 unk_04;
} unk_func_001961C0_4;

typedef struct {
    unk_func_001961C0_0 *unk_00;
    u8 pad_04[8];
    s16 *unk_0C;
    unk_func_001961C0_4 **unk_10;
    u8 pad_14[0xC];
    s16 unk_20;
    s16 unk_22;
} unk_func_001961C0_5;

void func_00196440(unk_func_001961C0_0 *, f32 *, unk_func_001961C0_0 *,
                  unk_func_001961C0_0 *, f32);
void func_00196570(unk_func_001961C0_0 *, f32 *, unk_func_001961C0_0 *,
                  unk_func_001961C0_0 *, f32, f32);
f32 func_001E60E0(f32);

void func_001961C0(unk_func_001961C0_5 *arg0, unk_func_001961C0_0 *arg1, f32 *arg2) {
    unk_func_001961C0_0 unk_A0;
    unk_func_001961C0_0 *temp;
    s32 i;
    s32 j;
    unk_func_001961C0_4 *unk_00;
    s32 unk_2C;
    s32 unk_30;

    temp = arg0->unk_00;
    for (i = 0; i < arg0->unk_20; i++, temp++) {
        func_00196440(arg1, arg2, arg1, temp, *arg2);
    }

    for (j = 0; j < arg0->unk_22; j++) {
        switch (arg0->unk_0C[j]) {
        case 3: {
            unk_00 = arg0->unk_10[j];
            for (unk_2C = unk_30 = 0; unk_30 < unk_00->unk_04; unk_2C += 0x2C, unk_30++) {
                unk_func_001961C0_2 *unk_04 = (unk_func_001961C0_2 *)((u8 *)unk_00->unk_00 + unk_2C);
                unk_func_001961C0_1 *unk_08 = unk_04->unk_00;
                f32 unk_0C = unk_04->unk_04 * (unk_08->unk_0C->unk_00 + unk_08->unk_10->unk_00);
                f32 unk_10 = unk_04->unk_08 * (unk_08->unk_0C->unk_04 + unk_08->unk_10->unk_04);
                f32 unk_14 = func_001E60E0(unk_0C * unk_0C + unk_10 * unk_10);
                unk_func_001961C0_0 *unk_18 = &arg0->unk_00[
                    ((unk_func_001961C0_2 *)((u8 *)unk_00->unk_00 + unk_2C))->unk_28];

                unk_A0 = *unk_18;
                func_00196570(arg1, arg2, arg1, &unk_A0, *arg2, unk_14);
            }
            break;
        }
        case 7: {
            s32 unk_34;
            s32 k;
            unk_func_001961C0_4 *unk_38;

            unk_38 = arg0->unk_10[j];
            for (unk_34 = k = 0; k < unk_38->unk_04; unk_34 += 0xC, k++) {
                unk_func_001961C0_0 *unk_04 = &arg0->unk_00[
                    ((unk_func_001961C0_3 *)((u8 *)unk_38->unk_00 + unk_34))->unk_08];

                unk_A0 = *unk_04;
                func_00196570(arg1, arg2, arg1, &unk_A0, *arg2,
                              ((unk_func_001961C0_3 *)((u8 *)unk_38->unk_00 + unk_34))->unk_00);
            }
            break;
        }
        case 8:
        case 9:
            break;
        }
    }
}
