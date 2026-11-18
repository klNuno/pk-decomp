/* profile: opt_300 */
#include "common.h"

class unk_func_002F6DD0_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(void *, s32, s32);
};

class unk_func_002F6DD0_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(unk_func_002F6DD0_0 *, s32);
    u8 pad_04[0x10];
    s32 unk_14;
};

typedef struct {
    u8 pad_00[0x10];
    f32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 pad_16[2];
    s32 unk_18;
    u8 pad_1C[4];
    u8 unk_20[8];
    unk_func_002F6DD0_1 *unk_28;
    s32 unk_2C;
} unk_func_002F6DD0_2;

typedef struct {
    struct {
        u8 pad_00[0xC];
        s32 unk_0C;
    } *unk_00;
    s32 unk_04;
} unk_func_002F6DD0_3;

typedef struct {
    s32 unk_00;
    unk_func_002F6DD0_2 *unk_04;
} unk_func_002F6DD0_4;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002F6DD0_5;

extern "C" {
void c4sdk_malloc(...);
s32 func_0011D3F8(...);
void func_002D0DA0(...);
void func_002D3AD0(...);
unk_func_002F6DD0_3 *func_002EA630(...);
void func_002F4E50(...);
void func_002F70D0(...);
void func_003044A0(...);
void func_003089E0(...);
extern u8 D_007BF080[];

void func_002F6DD0(unk_func_002F6DD0_2 *arg0, unk_func_002F6DD0_0 *arg1);
}

void func_002F6DD0(unk_func_002F6DD0_2 *arg0, unk_func_002F6DD0_0 *arg1) {
    char buf[0x100];
    unk_func_002F6DD0_4 sp140;
    unk_func_002F6DD0_5 sp148;
    unk_func_002F6DD0_3 sp150;
    s32 sp158;
    s32 sp15C;
    unk_func_002F6DD0_3 *temp;

    func_002D0DA0(&sp150, &sp150.unk_04);
    func_002F4E50(arg0, arg1);
    arg1->unk_vf0C(&arg0->unk_2C, 4, 1);
    arg1->unk_vf0C(&arg0->unk_10, 4, 1);
    if (arg0->unk_10 > 0.0f) {
        arg0->unk_10 = 0.0f;
    }
    arg1->unk_vf0C(&sp158, 4, 1);
    arg0->unk_14 = sp158 != 0;
    arg1->unk_vf0C(&sp15C, 4, 1);
    arg0->unk_15 = sp15C != 0;
    temp = func_002EA630(arg1->unk_00);
    if (arg0->unk_14 != 0) {
        func_003044A0(arg1, &sp150);
        func_003089E0(temp->unk_00->unk_0C, sp150.unk_00->unk_0C, buf, 0x100);
        func_002D3AD0(arg0->unk_20, buf, func_0011D3F8(buf));
        arg0->unk_18 = 0;
        if (arg0->unk_15 != 0) {
            arg0->unk_28->unk_vf10(arg1, 0);
            arg0->unk_18 = arg0->unk_28->unk_14;
        } else {
            arg0->unk_28->unk_vf10(arg1, 0);
            arg1->unk_vf0C(&arg0->unk_18, 4, 1);
            sp140.unk_00 = arg0->unk_18;
            sp140.unk_04 = arg0;
            func_002F70D0(&sp148, D_007BF080, &sp140);
        }
    }
    c4sdk_malloc(&sp150, 0);
}
