#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00312050_6;

class unk_func_00312050_0 {
public:
    s32 unk_00;
    u8 pad_04[0x4];
    u8 unk_08;
    u8 pad_09[0xB];
    unk_func_00312050_6 *unk_14;
    u8 pad_18[0x8];
    unk_func_00312050_6 *unk_20;
    u8 pad_24[0x88];
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
};

typedef struct {
    u8 pad_00[0x18];
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[0x4];
} unk_func_00312050_1;

typedef struct {
    u8 pad_00[0x1C];
    unk_func_00312050_0 *unk_1C;
    u8 pad_20[0x44];
    s32 unk_64;
    unk_func_00312050_1 *unk_68;
    unk_func_00312050_6 *unk_6C;
} unk_func_00312050_2;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x1C];
} unk_func_00312050_7;

typedef struct {
    u32 unk_00;
    unk_func_00312050_7 *unk_04;
} unk_func_00312050_3;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u8 pad_08[0x24];
    s32 *unk_2C;
} unk_func_00312050_4;

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
} unk_func_00312050_5;

extern "C" {
void func_003122F0(void *, void *);
void func_003123E0(unk_func_00312050_0 *, s32, f32);
void func_00316790(s32, void *);
void func_00316E00(unk_func_00312050_0 *);

void func_00312050(unk_func_00312050_2 *arg0, s32 arg1, unk_func_00312050_3 *arg2, unk_func_00312050_4 *arg3, unk_func_00312050_5 *arg4) {
    f32 scale;
    u32 i;
    f32 sp80[3];

    scale = arg4->unk_10;
    if (arg0->unk_1C->unk_00 == 1) {
        scale *= 0.1f;
    }
    arg0->unk_1C->unk_vf14();
    for (i = 0; i < arg3->unk_04; i++) {
        func_003123E0(arg0->unk_1C, i, scale);
        arg0->unk_1C->unk_14[i].unk_00 = arg0->unk_6C[i].unk_00;
        arg0->unk_1C->unk_14[i].unk_04 = arg0->unk_6C[i].unk_04;
        arg0->unk_1C->unk_14[i].unk_08 = arg0->unk_6C[i].unk_08;
        arg0->unk_1C->unk_20[i].unk_00 = 0;
        arg0->unk_1C->unk_20[i].unk_04 = 0;
        arg0->unk_1C->unk_20[i].unk_08 = 0;
    }
    func_00316E00(arg0->unk_1C);
    if (arg0->unk_1C->unk_00 != 1) {
        for (i = 0; i < arg3->unk_00; i++) {
            func_003123E0(arg0->unk_1C, arg3->unk_2C[i], 0.0f);
        }
    }
    for (i = 0; i < arg2->unk_00; i++) {
        if (arg2->unk_04[i].unk_00 == 1) {
            arg0->unk_68[i].unk_1C = arg4->unk_14 * arg0->unk_68[i].unk_18;
        } else if (arg2->unk_04[i].unk_00 == 2) {
            arg0->unk_68[i].unk_1C = arg4->unk_18 * arg0->unk_68[i].unk_18;
        } else if (arg2->unk_04[i].unk_00 == 3) {
            arg0->unk_68[i].unk_1C = arg4->unk_1C * arg0->unk_68[i].unk_18;
        }
    }
    *(s32 *)&sp80[0] = 0;
    *(s32 *)&sp80[1] = 0;
    sp80[2] = -arg4->unk_0C;
    func_00316790(arg0->unk_64, sp80);
    if (arg0->unk_1C->unk_08 != 0) {
        func_003122F0(arg0->unk_1C, (u8 *)arg0->unk_1C + 0x40);
        arg0->unk_1C->unk_08 = 0;
    }
}
}
