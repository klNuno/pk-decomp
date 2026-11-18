/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002EA240_0 {
    u8 pad_00[4];
    void *unk_04;
} unk_func_002EA240_0;

class unk_func_002EA240_1 {
public:
    virtual unk_func_002EA240_0 *unk_vf08(u8 *);
};

typedef struct unk_func_002EA240_2 {
    u8 pad_00[0xC];
    u32 unk_0C;
    u32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
    u8 *unk_1C;
    u8 *unk_20;
    u8 *unk_24;
    u8 pad_28[0x14];
    u8 *unk_3C;
    u8 pad_40[0xC];
    unk_func_002EA240_1 *unk_4C;
    unk_func_002EA240_1 *unk_50;
} unk_func_002EA240_2;

typedef struct unk_func_002EA240_3 {
    u8 unk_00;
    u8 pad_01[3];
    unk_func_002EA240_2 *unk_04;
    unk_func_002EA240_0 *unk_08;
    s32 *unk_0C;
} unk_func_002EA240_3;

extern "C" {
u32 func_003019F0(void *);
s32 func_002FEDC0(void *);

bool func_002EA240(unk_func_002EA240_3 *arg0) {
    u32 temp1;
    u32 temp2;
    u32 *temp0 = &arg0->unk_04->unk_10;
    temp1 = *temp0;
    temp2 = temp1 & 3;
    if (temp2 != 0) {
        *temp0 = temp1 + (4 - temp2);
    }

    unk_func_002EA240_2 *temp = arg0->unk_04;
    u32 temp4;
    u8 *temp3 = temp->unk_24;
    u32 *temp7 = &temp->unk_10;
    temp4 = *temp7;
    switch (*(s32 *)(temp3 + temp4)) {
    case 13:
        arg0->unk_0C = (s32 *)(temp->unk_18 + (temp->unk_0C - *(u32 *)(temp3 + (temp4 + 4))));
        arg0->unk_00 = 0;
        arg0->unk_04->unk_10 += 8;
        return true;
    case 7:
        arg0->unk_0C = (s32 *)(temp->unk_20 + *(u32 *)(temp3 + (temp4 + 4)));
        arg0->unk_00 = 0;
        arg0->unk_04->unk_10 += 8;
        return true;
    case 15: {
        u32 temp5 = *(u32 *)(temp3 + (temp4 + 4));
        *temp7 = temp4 + 8;
        u8 *temp6 = arg0->unk_04->unk_3C;
        switch (temp6[temp5]) {
        case 1:
            arg0->unk_0C = *(s32 **)(temp6 + (temp5 + 4));
            arg0->unk_00 = 0;
            return *arg0->unk_0C != 0;
        case 2:
            arg0->unk_08 = *(unk_func_002EA240_0 **)(temp6 + (temp5 + 4));
            if (arg0->unk_08 != 0) {
                if (func_003019F0(arg0->unk_08->unk_04) == 0) {
                    if (func_002FEDC0(arg0->unk_08->unk_04) == 2) {
                        arg0->unk_00 = 1;
                        break;
                    }
                    return false;
                }
                return false;
            }
            return false;
        default:
            return false;
        }
        return true;
    }
    case 9: {
        unk_func_002EA240_1 *temp5 = temp->unk_4C;
        u32 temp6 = *(u32 *)(temp3 + (temp4 + 4));
        *temp7 = temp4 + 8;
        if (temp5 == 0) {
            arg0->unk_0C = 0;
            return false;
        }
        arg0->unk_00 = 1;
        arg0->unk_08 = temp5->unk_vf08(arg0->unk_04->unk_1C + temp6);
        if (arg0->unk_08 == 0) {
            return false;
        }
        if (func_003019F0(arg0->unk_08->unk_04) != 0) {
            arg0->unk_08 = 0;
            return false;
        }
        if (func_002FEDC0(arg0->unk_08->unk_04) != 2) {
            arg0->unk_08 = 0;
            return false;
        }
        return true;
    }
    case 11: {
        unk_func_002EA240_1 *temp5 = temp->unk_50;
        u32 temp6 = *(u32 *)(temp3 + (temp4 + 4));
        *temp7 = temp4 + 8;
        if (temp5 == 0) {
            arg0->unk_0C = 0;
            return false;
        }
        arg0->unk_00 = 1;
        arg0->unk_08 = temp5->unk_vf08(arg0->unk_04->unk_1C + temp6);
        if (arg0->unk_08 == 0) {
            return false;
        }
        if (func_003019F0(arg0->unk_08->unk_04) != 0) {
            arg0->unk_08 = 0;
            return false;
        }
        if (func_002FEDC0(arg0->unk_08->unk_04) != 2) {
            arg0->unk_08 = 0;
            return false;
        }
        return true;
    }
    default:
        arg0->unk_0C = 0;
        arg0->unk_00 = 0;
        arg0->unk_04->unk_10 += 8;
        return false;
    }
}
}
