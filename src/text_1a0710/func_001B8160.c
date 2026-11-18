/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
} unk_001B8160_0;

typedef struct {
    unk_001B8160_0 *unk_00;
    void *unk_04;
    s32 unk_08;
} unk_001B8160_1;

typedef struct {
    u8 pad_00[8];
    unk_001B8160_1 *unk_08;
} unk_001B8160_2;

u8 fn_ucIsAnAlwaysObject(unk_001B8160_2 *);
void func_00137A20(unk_001B8160_0 *, unk_001B8160_0 *);
void func_001B7AA0(unk_001B8160_1 *, s32, u8, u8);
void func_001B7D60(unk_001B8160_1 *);
void *memcpy(void *, const void *, u32);

void func_001B8160(unk_001B8160_2 *arg0, unk_001B8160_2 *arg1)
{
    unk_001B8160_1 *temp0;
    unk_001B8160_0 *temp1;
    unk_001B8160_0 *temp2;
    u8 temp3;
    unk_001B8160_1 *temp4;
    s32 temp5;
    u8 temp6;
    s32 temp7;
    s32 temp8;

    temp3 = 1;
    temp0 = arg0->unk_08;
    temp4 = arg1->unk_08;
    temp1 = arg1->unk_08->unk_00;
    temp2 = arg0->unk_08->unk_00;
    if (temp1 != 0) {
        temp6 = fn_ucIsAnAlwaysObject(arg0);
        if (temp1->unk_0C & 4) {
            temp7 = 1;
        } else {
            temp7 = 0;
        }
        if (temp7) {
            temp5 = 2;
        } else {
            if (temp1->unk_0C & 2) {
                temp8 = 1;
            } else {
                temp8 = 0;
            }
            if (temp8) {
                temp5 = 1;
            } else {
                temp5 = 0;
            }
        }
        if (temp2 != 0) {
            switch (temp5) {
            case 2:
                temp3 = (u8)!((temp2->unk_0C & 4) ? 1 : 0);
                break;
            case 1:
                temp3 = (u8)!((temp2->unk_0C & 2) ? 1 : 0);
                break;
            case 0:
                temp3 = (u8)!((temp2->unk_0C & 1) ? 1 : 0);
                break;
            }
            if (((temp1->unk_0C & 0x4000) ? 1 : 0) != ((temp2->unk_0C & 0x4000) ? 1 : 0)) {
                temp3 = 1;
            }
            if (temp3) {
                func_001B7D60(temp0);
            }
        }
        if (temp3) {
            func_001B7AA0(temp0, temp5, (temp1->unk_0C & 0x4000) ? 1 : 0, temp6);
        }
        func_00137A20(temp0->unk_00, temp4->unk_00);
        memcpy((void *)temp0->unk_04, temp4->unk_04, 0x1C);
        temp0->unk_08 = temp4->unk_08;
        temp0->unk_00->unk_0C = temp6
            ? (temp0->unk_00->unk_0C |= 0x40000U)
            : (temp0->unk_00->unk_0C &= ~0x40000U);
    }
}
