#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_0016FA80_0;

typedef struct {
    u8 pad_00[0x44];
    u32 unk_44;
} unk_0016FA80_1;

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
} unk_0016FA80_2;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_0016FA80_3;

typedef struct {
    unk_0016FA80_1 *unk_00;
    s16 unk_04;
    u8 pad_06[6];
    unk_0016FA80_2 *unk_0C;
    u8 pad_10[0xC];
    unk_0016FA80_3 *unk_1C;
} unk_0016FA80_4;

typedef struct {
    u8 pad_00[0xC];
    s16 *unk_0C;
    unk_0016FA80_4 **unk_10;
    u8 pad_14[0xE];
    s16 unk_22;
    u8 pad_24[0x14];
    unk_0016FA80_0 *unk_38;
    s16 unk_3C;
} unk_0016FA80_5;

typedef struct {
    u8 pad_00[4];
    unk_0016FA80_5 *unk_04;
    u8 pad_08[0x30];
    unk_0016FA80_0 *unk_38;
} unk_0016FA80_6;

extern unk_0016FA80_6 *D_0035FB04;
void *malloc(u32);
void *memcpy(void *, const void *, u32);

static inline s16 unk_0016FA80_7(s16 arg2, s16 arg3, unk_0016FA80_0 *arg0, u32 *arg1)
{
    u32 temp;

    for (temp = 0; temp < *arg1; temp++, arg0++) {
        if ((arg0->unk_00 == arg2 && arg0->unk_04 == arg3) ||
            (arg0->unk_00 == arg3 && arg0->unk_04 == arg2)) {
            return temp;
        }
    }
    arg0->unk_00 = arg2;
    arg0->unk_04 = arg3;
    return (*arg1)++;
}

void func_0016FA80(void)
{
    s32 temp_7 = 0;
    unk_0016FA80_2 *temp_0;
    unk_0016FA80_0 *temp_1;
    s16 temp_2;
    u32 temp_3;

    temp_3 = 0;
    temp_1 = D_0035FB04->unk_38;

    for (temp_2 = 0; temp_2 < D_0035FB04->unk_04->unk_22; temp_2++) {
        if (D_0035FB04->unk_04->unk_0C[temp_2] == 1) {
            unk_0016FA80_4 *temp_6 = D_0035FB04->unk_04->unk_10[temp_2];
            s32 temp;

            if (temp_6->unk_00 != 0 && (temp_6->unk_00->unk_44 & 8)) {
                temp = 1;
            } else {
                temp = 0;
            }

            if (temp) {
                u32 temp_9;
                unk_0016FA80_3 *temp_8;

                temp_7 = 1;
                temp_0 = temp_6->unk_0C;
                temp_6->unk_1C = temp_8 = malloc(temp_6->unk_04 * sizeof(*temp_8));
                for (temp_9 = 0; temp_9 < (u32)temp_6->unk_04; temp_0++, temp_9++, temp_8++) {
                    temp_8->unk_00 = unk_0016FA80_7(temp_0->unk_00, temp_0->unk_02, temp_1, &temp_3);
                    temp_8->unk_04 = unk_0016FA80_7(temp_0->unk_02, temp_0->unk_04, temp_1, &temp_3);
                    temp_8->unk_08 = unk_0016FA80_7(temp_0->unk_04, temp_0->unk_00, temp_1, &temp_3);
                }
            }
        }
    }
    if (temp_7) {
        D_0035FB04->unk_04->unk_38 = malloc(temp_3 * sizeof(*temp_1));
        memcpy(D_0035FB04->unk_04->unk_38, temp_1, temp_3 * sizeof(*temp_1));
        D_0035FB04->unk_04->unk_3C = temp_3;
    }
}
