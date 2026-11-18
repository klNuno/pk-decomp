#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001DF980_0;

typedef struct {
    f32 unk_00;
    s32 unk_04;
    s16 unk_08;
    u8 pad_0A[2];
} unk_001DF980_1;

typedef struct {
    unk_001DF980_1 *unk_00;
    s16 unk_04;
} unk_001DF980_2;

typedef struct {
    u8 pad_00[8];
    unk_001DF980_0 *unk_08;
} unk_001DF980_3;

typedef struct {
    s32 unk_00;
    s16 (*unk_04)[3];
    unk_001DF980_0 *unk_08;
    s16 unk_0C;
    u8 pad_0E[6];
    s16 (*unk_14)[3];
    unk_001DF980_0 *unk_18;
    f32 *unk_1C;
} unk_001DF980_4;

typedef struct {
    unk_001DF980_0 *unk_00;
    unk_001DF980_0 unk_04;
    unk_001DF980_0 *unk_10;
    unk_001DF980_0 unk_14;
    f32 unk_20;
    u8 pad_24[4];
    unk_001DF980_0 unk_28;
    unk_001DF980_0 unk_34;
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[8];
    unk_001DF980_3 *unk_50;
    unk_001DF980_4 *unk_54;
    u8 pad_58[6];
    s16 unk_5E;
    unk_001DF980_1 *unk_60;
    u8 pad_64[8];
    unk_001DF980_3 *unk_6C;
    u8 pad_70[0x70];
    u8 unk_E0[0x60];
    u8 unk_140[0x120];
    f32 unk_260;
    unk_001DF980_2 *unk_264;
    u8 pad_268[4];
    s32 unk_26C;
    u8 pad_270[0x10];
    unk_001DF980_0 *unk_280;
} unk_001DF980_5;

void func_001559E0(unk_001DF980_0 *, void *, unk_001DF980_0 *);
void func_001DFCF0(unk_001DF980_5 *, s32);
void func_001E0310(unk_001DF980_5 *, unk_001DF980_0 *);
void func_001E0C50(unk_001DF980_5 *);
extern f32 D_003600F8;
extern unk_001DF980_0 *D_003600FC;

void func_001DF980(unk_001DF980_5 *arg0) {
    s16 temp;
    s16 temp2;
    for (temp = 0; temp < arg0->unk_264->unk_04; temp++) {
        if (arg0->unk_26C == -1 || (arg0->unk_26C & (1 << temp))) {
            arg0->unk_60 = &arg0->unk_264->unk_00[temp];
            arg0->unk_280 = &arg0->unk_6C->unk_08[arg0->unk_60->unk_08];
            func_001559E0(&arg0->unk_14, arg0->unk_E0, arg0->unk_280);
            func_001559E0(&arg0->unk_28, arg0->unk_140, arg0->unk_280);
            arg0->unk_34.unk_00 = arg0->unk_28.unk_00 - arg0->unk_14.unk_00;
            arg0->unk_34.unk_04 = arg0->unk_28.unk_04 - arg0->unk_14.unk_04;
            arg0->unk_34.unk_08 = arg0->unk_28.unk_08 - arg0->unk_14.unk_08;
            arg0->unk_20 = arg0->unk_60->unk_00 / arg0->unk_260;
            func_001E0C50(arg0);
            for (arg0->unk_5E = 0; arg0->unk_5E < arg0->unk_54->unk_0C; arg0->unk_5E++) {
                arg0->unk_40 = arg0->unk_60->unk_04;
                arg0->unk_44 = arg0->unk_54->unk_00;
                func_001DFCF0(arg0, 0);
                for (temp2 = 0; temp2 < 3; temp2++) {
                    unk_001DF980_4 *temp3;
                    s16 temp4;
                    unk_001DF980_0 *temp5;
                    f32 *temp6;
                    unk_001DF980_0 *temp7;
                    arg0->unk_00 = &arg0->unk_50->unk_08[arg0->unk_54->unk_04[arg0->unk_5E][temp2]];
                    arg0->unk_10 = &arg0->unk_50->unk_08[arg0->unk_54->unk_04[arg0->unk_5E][(temp2 + 1) % 3]];
                    arg0->unk_04.unk_00 = arg0->unk_10->unk_00 - arg0->unk_00->unk_00;
                    arg0->unk_04.unk_04 = arg0->unk_10->unk_04 - arg0->unk_00->unk_04;
                    arg0->unk_04.unk_08 = arg0->unk_10->unk_08 - arg0->unk_00->unk_08;
                    arg0->unk_10 = &arg0->unk_50->unk_08[arg0->unk_54->unk_04[arg0->unk_5E][(temp2 + 2) % 3]];
                    temp3 = arg0->unk_54;
                    temp4 = temp3->unk_14[arg0->unk_5E][temp2];
                    temp5 = temp3->unk_18;
                    temp6 = temp3->unk_1C;
                    temp7 = &temp5[temp4];
                    D_003600F8 = temp6[temp4];
                    D_003600FC = &arg0->unk_54->unk_08[arg0->unk_5E];
                    func_001E0310(arg0, temp7);
                }
            }
        }
    }
}
