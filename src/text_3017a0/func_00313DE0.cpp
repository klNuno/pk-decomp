#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00313DE0_0;

class unk_func_00313DE0_1 {
public:
    u8 pad_00[0x4];
    u32 unk_04;
    u8 pad_08[0xA4];
    virtual void unk_vf08(s32);
};

class unk_func_00313DE0_2 {
public:
    u8 pad_00[0x4];
    virtual void unk_vf08();
    virtual void unk_vf0C(s32);
};

typedef struct {
    u8 pad_00[0x1C];
    unk_func_00313DE0_1 *unk_1C;
    u8 pad_20[0x24];
    u8 unk_44[0x1C];
    void *unk_60;
    unk_func_00313DE0_2 *unk_64;
    s32 unk_68;
    unk_func_00313DE0_0 *unk_6C;
    u8 pad_70[4];
    s32 unk_74;
    s32 *unk_78;
} unk_func_00313DE0_3;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00313DE0_4;

extern "C" {
void func_00119548(...);
void func_003048F0(...);
void func_00304B00(...);
void func_00312AD0(...);
void func_00318D60(...);
extern u8 D_0035F1C0[];
extern s32 D_003608B0;
extern unk_func_00313DE0_0 **D_003608B4;
extern unk_func_00313DE0_4 *D_003608B8;
extern unk_func_00313DE0_4 *D_003608BC;

unk_func_00313DE0_3 *func_00313DE0(unk_func_00313DE0_3 *arg0, s16 arg1) {
    u32 i;

    if (arg0) {
        arg0->unk_60 = D_0035F1C0;
        if (arg0->unk_6C && arg0->unk_74) {
            for (i = 0; i < arg0->unk_1C->unk_04; i++) {
                (*D_003608B4)[arg0->unk_78[i]].unk_00 = arg0->unk_6C[i].unk_00;
                (*D_003608B4)[arg0->unk_78[i]].unk_04 = arg0->unk_6C[i].unk_04;
                (*D_003608B4)[arg0->unk_78[i]].unk_08 = arg0->unk_6C[i].unk_08;
            }
            if (D_003608B8) {
                func_00119548(D_003608B8->unk_04);
                D_003608B8->unk_04 = 0;
            }
            if (D_003608BC) {
                func_00119548(D_003608BC->unk_04);
                D_003608BC->unk_04 = 0;
            }
        }
        if (D_003608B0) {
            func_00119548(D_003608B0);
            D_003608B0 = 0;
        }
        if (arg0->unk_1C) {
            arg0->unk_1C->unk_vf08(1);
        }
        if (arg0->unk_64) {
            arg0->unk_64->unk_vf0C(1);
        }
        func_003048F0(arg0->unk_68, func_00318D60);
        func_00119548(arg0->unk_6C);
        func_00312AD0(arg0->unk_44, -1);
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
}
