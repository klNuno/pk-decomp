/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002E9D40_0 {
    u8 pad_00[4];
    void *unk_04;
} unk_func_002E9D40_0;

class unk_func_002E9D40_1 {
public:
    virtual unk_func_002E9D40_0 *unk_vf08(u8 *);
};

typedef struct unk_func_002E9D40_2 {
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
    unk_func_002E9D40_1 *unk_4C;
    unk_func_002E9D40_1 *unk_50;
} unk_func_002E9D40_2;

typedef struct unk_func_002E9D40_3 {
    u8 unk_00;
    u8 pad_01[3];
    unk_func_002E9D40_2 *unk_04;
    unk_func_002E9D40_0 *unk_08;
    void **unk_0C;
} unk_func_002E9D40_3;

extern "C" {
u32 func_003019F0(void *);
s32 func_002FEDC0(void *);
extern char D_0035BC88[];
s32 func_0011D3F8(const char *);
void func_002CD690(void *, void *, s32, s32);
void func_002D3AD0(void *, const char *, s32);
void func_002DD120(void *, unk_func_002E9D40_0 *);
void c4sdk_malloc(void *, s32);

bool func_002E9D40(unk_func_002E9D40_3 *arg0, void *arg1) {
    u32 temp1;
    u32 temp2;
    u32 *temp0 = &arg0->unk_04->unk_10;
    temp1 = *temp0;
    temp2 = temp1 & 3;
    if (temp2 != 0) {
        *temp0 = temp1 + (4 - temp2);
    }

    unk_func_002E9D40_2 *temp = arg0->unk_04;
    u32 temp4;
    u8 *temp3 = temp->unk_24;
    u32 *temp7 = &temp->unk_10;
    temp4 = *temp7;
    switch (*(s32 *)(temp3 + temp4)) {
    case 13:
        arg0->unk_0C = (void **)(temp->unk_18 + (temp->unk_0C - *(u32 *)(temp3 + (temp4 + 4))));
        if (arg0->unk_0C != 0) {
            if (*arg0->unk_0C != 0) {
                func_002CD690(arg1, *arg0->unk_0C, 0, -1);
            } else {
                func_002D3AD0(arg1, D_0035BC88, func_0011D3F8(D_0035BC88));
            }
        } else {
            func_002D3AD0(arg1, D_0035BC88, func_0011D3F8(D_0035BC88));
        }
        arg0->unk_00 = 0;
        arg0->unk_04->unk_10 += 8;
        return true;
    case 7:
        arg0->unk_0C = (void **)(temp->unk_20 + *(u32 *)(temp3 + (temp4 + 4)));
        if (arg0->unk_0C != 0) {
            if (*arg0->unk_0C != 0) {
                func_002CD690(arg1, *arg0->unk_0C, 0, -1);
            } else {
                func_002D3AD0(arg1, D_0035BC88, func_0011D3F8(D_0035BC88));
            }
        } else {
            func_002D3AD0(arg1, D_0035BC88, func_0011D3F8(D_0035BC88));
        }
        arg0->unk_00 = 0;
        arg0->unk_04->unk_10 += 8;
        return true;
    case 15: {
        u32 temp5 = *(u32 *)(temp3 + (temp4 + 4));
        u8 *temp6 = temp->unk_3C;
        switch (temp6[temp5]) {
        case 1:
            arg0->unk_0C = (void **)(temp6 + (temp5 + 4));
            arg0->unk_00 = 0;
            if (arg0->unk_0C != 0) {
                func_002CD690(arg1, *arg0->unk_0C, 0, -1);
            } else {
                func_002D3AD0(arg1, D_0035BC88, func_0011D3F8(D_0035BC88));
            }
            arg0->unk_04->unk_10 += 8;
            return *arg0->unk_0C != 0;
        case 2:
            arg0->unk_08 = *(unk_func_002E9D40_0 **)(temp6 + (temp5 + 4));
            arg0->unk_04->unk_10 += 8;
            arg0->unk_00 = 0;
            arg0->unk_0C = 0;
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
        unk_func_002E9D40_1 *temp5 = temp->unk_4C;
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
        s32 temp8;
        func_002DD120(&temp8, arg0->unk_08);
        func_002CD690(arg1, &temp8, 0, -1);
        c4sdk_malloc(&temp8, 0);
        return true;
    }
    case 11: {
        unk_func_002E9D40_1 *temp5 = temp->unk_50;
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
        s32 temp9;
        func_002DD120(&temp9, arg0->unk_08);
        func_002CD690(arg1, &temp9, 0, -1);
        c4sdk_malloc(&temp9, 0);
        return true;
    }
    default:
        arg0->unk_0C = 0;
        arg0->unk_00 = 0;
        arg0->unk_04->unk_10 += 8;
        func_002D3AD0(arg1, D_0035BC88, func_0011D3F8(D_0035BC88));
        return false;
    }
}
}
