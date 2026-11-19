/* profile: opt_300 */
#include "common.h"

struct unk_func_002E5E50_0 {
    u8 pad_00[8];
    u32 unk_08;
};

struct unk_func_002E5E50_1 {
    u32 unk_00;
    u8 pad_04[8];
    void *unk_0C;
};

struct unk_func_002E5E50_2 {
    u8 pad_00[4];
    unk_func_002E5E50_2 *unk_04;
    u8 unk_08[1];
};

class unk_func_002E5E50_3 {
public:
    virtual void unk_vf08();
    virtual unk_func_002E5E50_0 *unk_vf0C();
    u8 pad_04[0x10];
    unk_func_002E5E50_1 *unk_14;
    u8 pad_18[4];
    u32 unk_1C;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2C;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    u32 unk_3C;
    u32 unk_40;
    u32 unk_44;
    u32 unk_48;
    u32 unk_4C;
    u32 unk_50;
    u32 unk_54;
    u32 unk_58;
    u32 unk_5C;
    u32 unk_60;
    u32 unk_64;
    u32 unk_68;
    u32 unk_6C;
    u32 unk_70;
    u32 unk_74;
    u32 unk_78;
    u8 pad_7C[0x90];
    u32 unk_10C;
    u8 unk_110[8];
    u8 *unk_118;
};

class unk_func_002E5E50_4 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, u32, s32);
};

extern "C" {
void func_002F2020(unk_func_002E5E50_3 *, unk_func_002E5E50_4 *);
s32 func_002EA770(void *);
void *func_002EA780(void);
unk_func_002E5E50_2 *func_002E5E30(void *);
void func_002E7470(void *, unk_func_002E5E50_4 *);
}

inline u32 func_002E5E50_0(u32 arg0) {
    return (arg0 << 24) | (((arg0 << 8) & 0xFF0000) | ((arg0 >> 24) | ((arg0 >> 8) & 0xFF00)));
}

#define UNK_WRITE_WORD(dest, value)                                    \
    {                                                                  \
        (dest) = (value);                                              \
        if (func_002EA770(func_002EA780()) == 1) {                     \
            (dest) = func_002E5E50_0(dest);                            \
        }                                                              \
        arg1->unk_vf08(&(dest), 4, 1);                                 \
    }

extern "C" void func_002E5E50(unk_func_002E5E50_3 *arg0, unk_func_002E5E50_4 *arg1) {
    u32 sp60;
    u32 sp64;
    u32 sp68;
    u32 sp6C;
    u32 sp70;
    u32 sp74;
    u32 sp78;
    u32 sp7C;
    u32 sp80;
    u32 sp84;
    u32 sp88;
    u32 sp8C;
    u32 sp90;
    u32 sp94;
    u32 sp98;
    u32 sp9C;
    u32 spA0;
    u32 spA4;
    u32 spA8;
    u32 spAC;
    u32 spB0;
    u32 spB4;
    u32 spB8;
    u32 spBC;
    u32 spC0;
    u32 spC4;
    u32 spC8;
    u8 spCF;
    u32 temp = arg0->unk_1C + arg0->unk_20 * 8;

    u32 i;
    unk_func_002E5E50_2 *temp7;

    func_002F2020(arg0, arg1);
    if (arg0->unk_vf0C()->unk_08 == 4) {
        unk_func_002E5E50_1 **temp1 = &arg0->unk_14;
        u32 temp2 = arg0->unk_14->unk_00;
        UNK_WRITE_WORD(spC8, temp2);
        if (temp2 != 0) {
            unk_func_002E5E50_1 *temp3 = *temp1;
            arg1->unk_vf08(temp3->unk_0C, temp3->unk_00, 1);
        }
    }
    UNK_WRITE_WORD(sp60, temp);
    UNK_WRITE_WORD(sp64, arg0->unk_1C);
    UNK_WRITE_WORD(sp68, arg0->unk_20);
    UNK_WRITE_WORD(sp6C, arg0->unk_24);
    UNK_WRITE_WORD(sp70, arg0->unk_28);
    UNK_WRITE_WORD(sp74, arg0->unk_2C);
    UNK_WRITE_WORD(sp78, arg0->unk_30);
    UNK_WRITE_WORD(sp7C, arg0->unk_34);
    UNK_WRITE_WORD(sp80, arg0->unk_38);
    UNK_WRITE_WORD(sp84, arg0->unk_3C);
    UNK_WRITE_WORD(sp88, arg0->unk_40);
    UNK_WRITE_WORD(sp8C, arg0->unk_44);
    UNK_WRITE_WORD(sp90, arg0->unk_48);
    UNK_WRITE_WORD(sp94, arg0->unk_4C);
    UNK_WRITE_WORD(sp98, arg0->unk_50);
    UNK_WRITE_WORD(sp9C, arg0->unk_54);
    UNK_WRITE_WORD(spA0, arg0->unk_58);
    UNK_WRITE_WORD(spA4, arg0->unk_5C);
    UNK_WRITE_WORD(spA8, arg0->unk_60);
    UNK_WRITE_WORD(spAC, arg0->unk_64);
    UNK_WRITE_WORD(spB0, arg0->unk_68);
    UNK_WRITE_WORD(spB4, arg0->unk_6C);
    UNK_WRITE_WORD(spB8, arg0->unk_70);
    UNK_WRITE_WORD(spBC, arg0->unk_74);
    UNK_WRITE_WORD(spC0, arg0->unk_78);

    u32 temp4;
    if (arg0->unk_5C == -1U) {
        temp4 = 0;
    } else {
        temp4 = arg0->unk_5C + arg0->unk_60;
    }
    if (temp4 == 0) {
        return;
    }
    {
        for (i = 0; i < temp4; ++i) {
            spCF = arg0->unk_118[i];
            arg1->unk_vf08(&spCF, 1, 1);
        }
        UNK_WRITE_WORD(spC4, arg0->unk_10C);
        u8 *temp6 = arg0->unk_110;
        for (temp7 = func_002E5E30(temp6)->unk_04;
             temp7 != func_002E5E30(temp6); temp7 = temp7->unk_04) {
            func_002E7470(temp7->unk_08, arg1);
        }
    }
}
