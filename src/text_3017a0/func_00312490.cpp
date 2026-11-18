#include "common.h"

typedef union {
    s32 unk_00;
    f32 unk_00_f32;
} unk_func_00312490_0;

typedef struct {
    unk_func_00312490_0 unk_00, unk_04, unk_08;
} unk_func_00312490_1;

class unk_func_00312490_2 {
public:
    s32 unk_00;
    u8 pad_04[4];
    u8 unk_08;
    u8 pad_09[0xB];
    unk_func_00312490_1 *unk_14;
    u8 pad_18[0x94];
    virtual void unk_vf08();
    virtual void unk_vf0C();
};

typedef struct {
    u8 pad_00[8];
    s32 unk_08, unk_0C;
    f32 unk_10, unk_14, unk_18, unk_1C;
    u8 unk_20;
    u8 pad_21[3];
} unk_func_00312490_3;

typedef struct {
    u8 pad_00[0x1C];
    unk_func_00312490_2 *unk_1C;
    u8 pad_20[0x44];
    void *unk_64;
    unk_func_00312490_3 *unk_68;
    unk_func_00312490_1 *unk_6C;
} unk_func_00312490_4;

typedef struct {
    s32 unk_00, unk_04, unk_08;
    u8 pad_0C[4];
    f32 unk_10, unk_14;
    u8 pad_18[8];
} unk_func_00312490_5;

typedef struct {
    u32 unk_00;
    unk_func_00312490_5 *unk_04;
} unk_func_00312490_6;

typedef struct {
    u32 unk_00, unk_04;
    u8 pad_08[0x24];
    s32 *unk_2C;
    u8 pad_30[4];
    s32 *unk_34;
} unk_func_00312490_7;

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C, unk_10, unk_14, unk_18, unk_1C;
} unk_func_00312490_8;

typedef void (*unk_func_00312490_9)(void *, s16);

extern "C" {
f32 func_001E60E0(f32);
void *func_00304B50(u32);
unk_func_00312490_3 *func_00304990(void *, unk_func_00312490_9, unk_func_00312490_9, u32, u32);
void *func_00304C50(u32);
f32 func_00310970(f32);
void func_003123E0(unk_func_00312490_2 *, s32, f32);
void func_00312970(unk_func_00312490_2 *, void *);
void *func_003166D0(void *, unk_func_00312490_1 *);
void func_00318D00(void *, s16);
void func_00318D60(void *, s16);

void func_00312490(unk_func_00312490_4 *arg0, unk_func_00312490_1 **arg1,
                   unk_func_00312490_6 *arg2, unk_func_00312490_7 *arg3,
                   unk_func_00312490_8 *arg4) {
    f32 temp0;
    u32 i;
    unk_func_00312490_1 temp1;
    void *temp2;

    temp0 = arg4->unk_10;
    if (arg0->unk_1C->unk_00 == 1) {
        temp0 *= 0.1f;
    }
    for (i = 0; i < arg3->unk_04; i++) {
        arg0->unk_1C->unk_14[i].unk_00.unk_00 = (*arg1)[arg3->unk_34[i]].unk_00.unk_00;
        arg0->unk_1C->unk_14[i].unk_04.unk_00 = (*arg1)[arg3->unk_34[i]].unk_04.unk_00;
        arg0->unk_1C->unk_14[i].unk_08.unk_00 = (*arg1)[arg3->unk_34[i]].unk_08.unk_00;
        arg0->unk_6C[i].unk_00.unk_00 = arg0->unk_1C->unk_14[i].unk_00.unk_00;
        arg0->unk_6C[i].unk_04.unk_00 = arg0->unk_1C->unk_14[i].unk_04.unk_00;
        arg0->unk_6C[i].unk_08.unk_00 = arg0->unk_1C->unk_14[i].unk_08.unk_00;
        func_003123E0(arg0->unk_1C, i, temp0);
    }
    i = arg2->unk_00;
    arg0->unk_68 = func_00304990(func_00304B50(i * 0x24 + 0x10), func_00318D00, func_00318D60, 0x24, i);
    for (i = 0; i < arg2->unk_00; i++) {
        f32 temp3;
        s32 temp4;

        arg0->unk_68[i].unk_08 = arg2->unk_04[i].unk_04;
        arg0->unk_68[i].unk_0C = arg2->unk_04[i].unk_08;
        arg0->unk_68[i].unk_10 = arg2->unk_04[i].unk_10;
        arg0->unk_68[i].unk_14 = arg2->unk_04[i].unk_14;
        temp3 = func_001E60E0(
            func_00310970(arg0->unk_1C->unk_14[arg0->unk_68[i].unk_08].unk_08.unk_00_f32 -
                          arg0->unk_1C->unk_14[arg0->unk_68[i].unk_0C].unk_08.unk_00_f32) +
            (func_00310970(arg0->unk_1C->unk_14[arg0->unk_68[i].unk_08].unk_00.unk_00_f32 -
                           arg0->unk_1C->unk_14[arg0->unk_68[i].unk_0C].unk_00.unk_00_f32) +
             func_00310970(arg0->unk_1C->unk_14[arg0->unk_68[i].unk_08].unk_04.unk_00_f32 -
                           arg0->unk_1C->unk_14[arg0->unk_68[i].unk_0C].unk_04.unk_00_f32)));
        arg0->unk_68[i].unk_20 = 1;
        temp4 = arg2->unk_04[i].unk_00;
        if (temp4 == 1) {
            arg0->unk_68[i].unk_18 = temp3;
            arg0->unk_68[i].unk_1C = temp3 * arg4->unk_14;
        } else if (temp4 == 2) {
            arg0->unk_68[i].unk_18 = temp3;
            arg0->unk_68[i].unk_1C = temp3 * arg4->unk_18;
        } else if (temp4 == 3) {
            arg0->unk_68[i].unk_18 = temp3;
            arg0->unk_68[i].unk_1C = temp3 * arg4->unk_1C;
        }
        func_00312970(arg0->unk_1C, &arg0->unk_68[i]);
    }
    for (i = 0; i < arg3->unk_00; i++) {
        if (arg0->unk_1C->unk_00 != 1) {
            func_003123E0(arg0->unk_1C, arg3->unk_2C[i], 0.0f);
        }
    }
    arg0->unk_1C->unk_vf0C();
    temp1.unk_00.unk_00 = 0;
    temp1.unk_04.unk_00 = 0;
    temp1.unk_08.unk_00_f32 = -arg4->unk_0C;
    temp2 = func_00304C50(0x14);
    if (temp2 != NULL) {
        temp2 = func_003166D0(temp2, &temp1);
    }
    arg0->unk_64 = temp2;
    func_00312970(arg0->unk_1C, arg0->unk_64);
    arg0->unk_1C->unk_08 = 0;
}
}
