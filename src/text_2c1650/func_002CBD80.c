#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} __attribute__((aligned(16))) unk_002CBD80_0;

typedef struct {
    unk_002CBD80_0 unk_00;
    unk_002CBD80_0 unk_10;
    unk_002CBD80_0 unk_20;
    unk_002CBD80_0 unk_30;
} unk_002CBD80_1;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0C;
} __attribute__((aligned(16))) unk_002CBD80_2;

typedef struct {
    unk_002CBD80_2 unk_00;
    unk_002CBD80_1 unk_10;
    union {
        unk_002CBD80_1 unk_00;
        struct {
            u8 pad_00[0x38];
            u32 unk_38;
            u32 unk_3C;
        } unk_01;
    } unk_50;
    unk_002CBD80_1 unk_90;
    unk_002CBD80_2 unk_D0;
    unk_002CBD80_1 unk_E0;
    unk_002CBD80_1 unk_120;
} unk_002CBD80_3;

typedef struct {
    u8 pad_00[0x6090];
    f32 unk_6090;
    f32 unk_6094;
    f32 unk_6098;
    f32 unk_609C;
    f32 unk_60A0;
    f32 unk_60A4;
    u8 pad_60A8[0x62B0 - 0x60A8];
    unk_002CBD80_1 unk_62B0;
    unk_002CBD80_1 unk_62F0;
    u8 pad_6330[0x6740 - 0x6330];
    unk_002CBD80_1 unk_6740;
    u8 pad_6780[0x68B0 - 0x6780];
    unk_002CBD80_1 unk_68B0;
    unk_002CBD80_1 unk_68F0;
    u8 pad_6930[0x6B84 - 0x6930];
    u8 *unk_6B84;
    u8 pad_6B88[0x6C14 - 0x6B88];
    s32 *unk_6C14;
} unk_002CBD80_4;

extern u16 D_007B2438[];
extern u8 D_007B7B8C[];
extern u32 D_003604AC;
void func_002C9350(unk_002CBD80_4 *);
void func_00101928(void *, void *, void *);
void func_00101C18(void *);
void func_00101B10(void *, void *, void *);
void func_002C82A0(void *, f32, f32, f32, f32, f32, f32);

static inline u8 unk_002CBD80_5(unk_002CBD80_1 *arg0)
{
    if (arg0->unk_00.unk_00 == 1.0f &&
        arg0->unk_00.unk_04 == 0.0f &&
        arg0->unk_00.unk_08 == 0.0f &&
        arg0->unk_10.unk_00 == 0.0f &&
        arg0->unk_10.unk_04 == 1.0f &&
        arg0->unk_10.unk_08 == 0.0f) {
        return 0;
    }
    return 1;
}

void func_002CBD80(unk_002CBD80_4 *arg0)
{
    unk_002CBD80_3 *temp = (unk_002CBD80_3 *)arg0->unk_6B84;
    unk_002CBD80_0 temp_30;
    unk_002CBD80_0 temp_40;
    unk_002CBD80_1 *temp_0;
    unk_002CBD80_1 *temp_1;
    u8 temp_2;
    u8 temp_3;

    D_007B7B8C[0] = 0;
    if (!(D_007B2438[0] & 4)) {
        arg0->unk_6B84 += 0x160;
        func_002C9350(arg0);
        temp->unk_120 = arg0->unk_62B0;
        temp->unk_50.unk_00 = arg0->unk_62F0;
        temp_0 = &arg0->unk_68B0;
        temp_1 = &arg0->unk_68F0;
        temp->unk_50.unk_01.unk_38 = temp_2 = unk_002CBD80_5(temp_0);
        temp->unk_50.unk_01.unk_3C = temp_3 = unk_002CBD80_5(temp_1);
        if (temp_2 || temp_3) {
            unk_002CBD80_2 *temp_4;
            unk_002CBD80_0 *temp_5;

            if (temp_2) {
                D_003604AC |= 2;
            } else {
                D_003604AC &= ~2;
            }
            temp_4 = (unk_002CBD80_2 *)arg0->unk_6B84;
            temp_4->unk_04 = 0;
            temp_4->unk_00 = 0;
            temp_4->unk_08 = 0x01000404;
            temp_4->unk_0C = 0x6C06004A;
            temp_5 = (unk_002CBD80_0 *)temp_4;
            *++temp_5 = temp_0->unk_00;
            *++temp_5 = temp_0->unk_10;
            *++temp_5 = temp_0->unk_20;
            *++temp_5 = temp_1->unk_00;
            *++temp_5 = temp_1->unk_10;
            *++temp_5 = temp_1->unk_20;
            arg0->unk_6B84 += 0x70;
        } else {
            D_003604AC &= ~2;
        }
        func_00101928(&temp->unk_10, &arg0->unk_6740, &arg0->unk_62B0);
        func_00101C18(&temp->unk_90);
        temp->unk_90.unk_00.unk_00 = temp_40.unk_00 = 0.5f * arg0->unk_6098;
        temp->unk_90.unk_10.unk_04 = temp_40.unk_04 = 0.5f * arg0->unk_609C;
        temp->unk_90.unk_20.unk_08 = temp_40.unk_08 = 0.5f * (arg0->unk_60A4 - arg0->unk_60A0);
        temp_40.unk_0C = 0.0f;
        temp_30.unk_00 = arg0->unk_6090;
        temp_30.unk_04 = arg0->unk_6094;
        temp_30.unk_08 = arg0->unk_60A0;
        temp_30.unk_0C = 1.0f;
        func_00101B10(&temp->unk_90.unk_30, &temp_40, &temp_30);
        func_00101928(&temp->unk_E0, &temp->unk_90, &temp->unk_10);
        if (*arg0->unk_6C14 == 1) {
            func_002C82A0(&temp->unk_10, 0.0f, 4095.9375f, 0.0f, 4095.9375f, 0.0f, -arg0->unk_60A0);
        }
        temp->unk_00.unk_04 = 0;
        temp->unk_00.unk_00 = 0;
        temp->unk_00.unk_08 = 0x01000404;
        temp->unk_00.unk_0C = 0x6C0C0000;
        temp->unk_D0.unk_04 = 0;
        temp->unk_D0.unk_00 = 0;
        temp->unk_D0.unk_08 = 0x01000404;
        temp->unk_D0.unk_0C = 0x6C080024;
    }
}
