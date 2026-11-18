/* profile: opt_300 */
#include "common.h"

struct unk_func_002DD720_0 {
    u8 pad_00[4];
    void *unk_04;
};

class unk_func_002DD720_1 {
public:
    virtual unk_func_002DD720_0 *unk_vf08(u8 *);
};

struct unk_func_002DD720_2 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
    u8 *unk_1C;
    u8 *unk_20;
    u8 *unk_24;
    u8 pad_28[0x14];
    u8 *unk_3C;
    u8 pad_40[0xC];
    unk_func_002DD720_1 *unk_4C;
    unk_func_002DD720_1 *unk_50;
};

struct unk_func_002DD720_3 {
    u8 unk_00;
    u8 pad_01[3];
    unk_func_002DD720_2 *unk_04;
    unk_func_002DD720_0 *unk_08;
    u8 *unk_0C;
};

extern "C" {
u8 func_002DD0F0(unk_func_002DD720_0 *);
s32 func_002FEDC0(void *);
s32 func_003019F0(void *);

#define UNK_CASE(field) { \
    unk_func_002DD720_1 *temp = temp2->field; \
    s32 temp6 = *(s32 *)(temp3 + (temp4 + 4)); \
    *temp7 = temp4 + 8; \
    *arg1 = 0x20; \
    if (!temp) { \
        arg0->unk_0C = 0; \
        temp8 = false; \
        break; \
    } \
    arg0->unk_00 = 1; \
    arg0->unk_08 = temp->unk_vf08(arg0->unk_04->unk_1C + temp6); \
    if (!arg0->unk_08) { \
        temp8 = false; \
        break; \
    } \
    if (func_003019F0(arg0->unk_08->unk_04) != 0) { \
        arg0->unk_08 = 0; \
        temp8 = false; \
        break; \
    } \
    if (func_002FEDC0(arg0->unk_08->unk_04) != 4) { \
        arg0->unk_08 = 0; \
        temp8 = false; \
        break; \
    } \
    *arg1 = func_002DD0F0(arg0->unk_08); \
    temp8 = true; \
    break; \
}

bool func_002DD720(unk_func_002DD720_3 *arg0, u8 *arg1) {
    unk_func_002DD720_2 *temp2;
    s32 temp4;
    u8 *temp3;
    s32 temp5;
    bool temp8;
    s32 *temp7;

    {
        s32 temp = arg0->unk_04->unk_10 & 3;
        if (temp) {
            arg0->unk_04->unk_10 += 4 - temp;
        }
    }

    temp2 = arg0->unk_04;
    temp3 = temp2->unk_24;
    temp4 = temp2->unk_10;
    temp7 = &temp2->unk_10;
    switch (*(s32 *)(temp3 + temp4)) {
    case 13:
        temp5 = *(s32 *)(temp3 + (temp4 + 4));
        arg0->unk_0C = temp2->unk_18 + (temp2->unk_0C - temp5);
        arg0->unk_00 = 0;
        *arg1 = arg0->unk_04->unk_18[arg0->unk_04->unk_0C - temp5];
        arg0->unk_04->unk_10 += 8;
        temp8 = true;
        break;
    case 7:
        temp5 = *(s32 *)(temp3 + (temp4 + 4));
        arg0->unk_0C = temp2->unk_20 + temp5;
        arg0->unk_00 = 0;
        *arg1 = arg0->unk_04->unk_20[temp5];
        arg0->unk_04->unk_10 += 8;
        temp8 = true;
        break;
    case 15: {
        s32 temp6 = *(s32 *)(temp3 + (temp4 + 4));
        u8 *temp = temp2->unk_3C;
        switch (temp[temp6]) {
        case 1:
            arg0->unk_0C = *(u8 **)(temp + (temp6 + 4));
            arg0->unk_00 = 0;
            if (arg0->unk_0C) {
                *arg1 = *arg0->unk_0C;
            } else {
                *arg1 = 0x20;
            }
            arg0->unk_04->unk_10 += 8;
            temp8 = arg0->unk_0C != 0;
            break;
        case 2:
            arg0->unk_08 = *(unk_func_002DD720_0 **)(temp + (temp6 + 4));
            arg0->unk_04->unk_10 += 8;
            if (arg0->unk_08) {
                if (func_003019F0(arg0->unk_08->unk_04) == 0) {
                    if (func_002FEDC0(arg0->unk_08->unk_04) == 4) {
                        arg0->unk_00 = 1;
                        temp8 = true;
                        break;
                    }
                    temp8 = false;
                    break;
                }
                temp8 = false;
                break;
            }
            temp8 = false;
            break;
        default:
            temp8 = false;
            break;
        }
        break;
    }
    case 9:
        UNK_CASE(unk_4C)
    case 11:
        UNK_CASE(unk_50)
    default:
        arg0->unk_0C = 0;
        arg0->unk_00 = 0;
        *arg1 = 0x20;
        temp8 = false;
        break;
    }
    return temp8;
}
}
