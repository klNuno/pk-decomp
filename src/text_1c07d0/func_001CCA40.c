/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001CCA40_0;

typedef struct {
    u8 pad_00[2];
    u16 unk_02;
    u8 pad_04[0xA];
} unk_001CCA40_1;

typedef struct {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u8 pad_06[2];
    f32 unk_08;
} unk_001CCA40_2;

typedef struct {
    u8 pad_00[0x34];
    u16 unk_34;
} unk_001CCA40_3;

typedef struct {
    u8 pad_00[0x50];
    u16 unk_50;
    u8 pad_52[0xA];
    u16 unk_5C;
} unk_001CCA40_4;

unk_001CCA40_3 *func_001CAAA0(u16, s32);
unk_001CCA40_2 *func_001CF340(u16);
void *memcpy(void *, const void *, u32);
void *memset(void *, s32, u32);
extern unk_001CCA40_1 *D_00360050;
extern unk_001CCA40_0 *D_00360060;
extern f32 D_005E4370[];
extern f32 D_005E4374[];
extern f32 D_005E4378[];

f32 *func_001CCA40(unk_001CCA40_4 *arg0, u16 arg1) {
    unk_001CCA40_0 temp;
    unk_001CCA40_0 temp2;
    f32 temp3;
    unk_001CCA40_2 *temp4;
    unk_001CCA40_1 *temp5;
    unk_001CCA40_1 *temp6;
    unk_001CCA40_3 *temp7;
    unk_001CCA40_3 *temp8;
    u16 temp9;

    if (arg1 >= arg0->unk_50) {
        return NULL;
    }
    temp9 = arg0->unk_5C;
    temp4 = func_001CF340(temp9);
    temp7 = func_001CAAA0(temp4->unk_00, temp4->unk_04);
    temp8 = func_001CAAA0(temp4->unk_02, 0);
    temp5 = &D_00360050[temp7->unk_34 + temp4->unk_04];
    temp6 = &D_00360050[temp8->unk_34];
    temp3 = (f32)arg1 / (f32)arg0->unk_50;
    if (0.0f != temp3) {
        temp3 *= (1.0f + (temp3 * temp4->unk_08)) - temp4->unk_08;
    }

    if (temp6->unk_02 == 0xFFFF) {
        memset(&temp2, 0, sizeof(temp2));
    } else {
        memcpy(&temp2, (const void *)&D_00360060[temp6->unk_02], sizeof(temp2));
    }
    if (temp5->unk_02 == 0xFFFF) {
        memset(&temp, 0, sizeof(temp));
    } else {
        memcpy(&temp, (const void *)&D_00360060[temp5->unk_02], sizeof(temp));
    }
    D_005E4370[0] = temp2.unk_00 - temp.unk_00;
    D_005E4374[0] = temp2.unk_04 - temp.unk_04;
    D_005E4378[0] = temp2.unk_08 - temp.unk_08;
    D_005E4370[0] = temp3 * D_005E4370[0];
    D_005E4374[0] = temp3 * D_005E4374[0];
    D_005E4378[0] = temp3 * D_005E4378[0];
    D_005E4370[0] = temp.unk_00 + D_005E4370[0];
    D_005E4374[0] = temp.unk_04 + D_005E4374[0];
    D_005E4378[0] = temp.unk_08 + D_005E4378[0];
    return D_005E4370;
}
