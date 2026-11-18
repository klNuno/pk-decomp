/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u32 unk_00;
    u8 unk_04;
    u8 pad_05[3];
    u32 unk_08[];
} unk_001E8180_0;

typedef struct {
    u32 unk_00;
    s32 unk_04;
    u16 unk_08;
    u8 pad_0A[6];
} unk_001E8180_1;

typedef struct {
    u8 pad_00[4];
    unk_001E8180_1 *unk_04;
} unk_001E8180_2;

typedef struct {
    unk_001E8180_2 **unk_00;
    u8 pad_04[4];
    u8 *unk_08;
} unk_001E8180_3;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C;
} unk_001E8180_4;

typedef struct {
    u8 pad_00[8];
    unk_001E8180_4 *unk_08;
} unk_001E8180_5;

typedef struct {
    unk_001E8180_5 *unk_00;
    u8 pad_04[8];
    unk_001E8180_3 *unk_0C;
} unk_001E8180_6;

void func_001E8050(void *, s32, u16);
s32 func_00208E60(s32);

void func_001E8180(unk_001E8180_6 *arg0) {
    u8 temp0;
    unk_001E8180_0 *temp1;
    s32 temp2;
    void *temp3;
    u16 temp4;
    s32 temp5;
    u8 temp6;
    s32 temp7;

    if (arg0 && arg0->unk_0C && arg0->unk_00->unk_08) {
        for (temp6 = 0; temp6 < arg0->unk_00->unk_08->unk_0C; temp6++) {
            temp4 = (*arg0->unk_0C->unk_00)->unk_04[temp6].unk_08;
            if (temp4 != 0) {
                temp3 = (*arg0->unk_0C->unk_00)->unk_04[temp6].unk_00 + arg0->unk_0C->unk_08;
                temp7 = (*arg0->unk_0C->unk_00)->unk_04[temp6].unk_04;
                if (func_00208E60(temp7) == 0x2A) {
                    temp0 = 0;
                    temp1 = temp3;
                    temp5 = temp1->unk_00;
                    for (temp0 = 0; temp0 < temp1->unk_04; temp0++) {
                        if (temp1->unk_00 == 8) {
                            temp2 = temp0 * 3;
                        } else {
                            temp2 = temp0;
                        }
                        temp3 = &temp1->unk_08[temp2];
                        func_001E8050(temp3, temp5, temp4);
                    }
                } else {
                    func_001E8050(temp3, temp7, temp4);
                }
            }
        }
    }
}
