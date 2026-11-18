/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
} unk_func_002FA2A0_0;

typedef struct {
    u32 unk_00;
    u8 pad_04[8];
    void *unk_0C;
} unk_func_002FA2A0_1;

typedef struct {
    unk_func_002FA2A0_1 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002FA2A0_2;

class unk_func_002FA2A0_3 {
public:
    virtual void unk_vf08();
    virtual s32 unk_vf0C();
};

class unk_func_002FA2A0_4 {
public:
    unk_func_002FA2A0_3 *unk_00;
    virtual void unk_vf08(void *, u32, s32);
};

class unk_func_002FA2A0_5 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C(unk_func_002FA2A0_4 *);
};

typedef struct {
    u8 pad_00[0x10];
    f32 unk_10;
    u8 unk_14;
    u8 unk_15;
    s32 unk_18;
    s32 unk_1C;
    unk_func_002FA2A0_1 *unk_20;
    unk_func_002FA2A0_1 *unk_24;
    unk_func_002FA2A0_5 *unk_28;
} unk_func_002FA2A0_6;

inline u32 func_002FA2A0_0(u32 temp) {
    return (temp << 24) | (((temp << 8) & 0xFF0000) | ((temp >> 24) | ((temp >> 8) & 0xFF00)));
}

inline f32 func_002FA2A0_1(f32 *arg0) {
    void *p = arg0;
    s64 temp = *(s64 *)p;
    s64 temp2 = (temp << 24) | (((temp << 8) & 0xFF0000) | ((temp >> 24) | ((temp >> 8) & 0xFF00)));
    void *q = &temp2;
    return *(f32 *)q;
}

extern "C" {
void *__register_global_object(void *, void *, void *);
void func_002CD2A0();
void func_002CDB60(...);
void func_002CD300(void *, s32);
void func_002F4E40();
s32 func_002F42C0();
void func_002FAC80();
s32 func_002F3FB0();
unk_func_002FA2A0_0 *func_002F4060(s32, void *, s32, s32, s32, void (*)(), s32);
s32 func_002EA770(s32);
s32 func_002EA780();
unk_func_002FA2A0_2 *func_002EA630(unk_func_002FA2A0_3 *);
s32 func_00308850(void *, void *, char *, s32);
s32 func_0011D3F8(char *);
void func_002D3AD0(unk_func_002FA2A0_1 **, char *, s32);
void func_002CD690(unk_func_002FA2A0_1 **, unk_func_002FA2A0_2 *, s32, s32);
extern u8 D_0035C880[];
extern s32 D_00360724;
extern s8 D_00360728;
extern unk_func_002FA2A0_0 *D_0036072C;
extern u8 D_007BF1A0[];

void func_002FA2A0(unk_func_002FA2A0_6 *arg0, unk_func_002FA2A0_4 *arg1) {
    u32 sp164;
    f32 sp168;
    f32 sp16C;
    u32 sp170;
    u32 sp174;
    u32 sp178;
    s32 sp17C;

    func_002F4E40();
    if (D_00360728 == 0) {
        s32 temp_s0;
        void *temp_s3 = __register_global_object(&D_00360724, (void *)func_002CD2A0, D_007BF1A0);
        void *temp_a0 = temp_s3;
        func_002CDB60(temp_a0, D_0035C880, &sp17C);
        func_002CD300(&sp17C, -1);
        temp_s0 = func_002F42C0();
        D_0036072C = func_002F4060(temp_s0, temp_s3, func_002F3FB0(), 0x30, 2, func_002FAC80, 0);
        D_00360728 = 1;
    }

    sp164 = D_0036072C->unk_08;
    if (func_002EA770(func_002EA780()) == 1) {
        sp164 = func_002FA2A0_0(sp164);
    }
    arg1->unk_vf08(&sp164, 4, 1);

    sp168 = arg0->unk_10;
    if (func_002EA770(func_002EA780()) == 1) {
        sp16C = sp168;
        sp16C = func_002FA2A0_1(&sp16C);
        sp168 = sp16C;
    }
    arg1->unk_vf08(&sp168, 4, 1);

    sp170 = arg0->unk_14;
    if (func_002EA770(func_002EA780()) == 1) {
        sp170 = func_002FA2A0_0(sp170);
    }
    arg1->unk_vf08(&sp170, 4, 1);

    sp174 = arg0->unk_15;
    if (func_002EA770(func_002EA780()) == 1) {
        sp174 = func_002FA2A0_0(sp174);
    }
    arg1->unk_vf08(&sp174, 4, 1);

    if (arg0->unk_14 != 0) {
        char sp50[0x100];
        if (func_00308850(func_002EA630(arg1->unk_00)->unk_00->unk_0C, arg0->unk_20->unk_0C, sp50, 0x100)) {
            func_002D3AD0(&arg0->unk_24, sp50, func_0011D3F8(sp50));
        }
        u32 temp_s0 = arg0->unk_24->unk_00;
        sp178 = temp_s0;
        if (func_002EA770(func_002EA780()) == 1) {
            sp178 = func_002FA2A0_0(sp178);
        }
        arg1->unk_vf08(&sp178, 4, 1);
        if (temp_s0 != 0) {
            unk_func_002FA2A0_1 *temp_v0 = arg0->unk_24;
            arg1->unk_vf08(temp_v0->unk_0C, temp_v0->unk_00, 1);
        }
    } else {
        s32 temp_s0 = func_002EA630(arg1->unk_00)->unk_0C;
        func_002CD690(&arg0->unk_20, func_002EA630(arg1->unk_00), 0, -1);
        s32 temp_v0 = arg1->unk_00->unk_vf0C();
        arg0->unk_18 = temp_s0 + temp_v0;
        arg0->unk_28->unk_vf1C(arg1);
        arg0->unk_1C = arg1->unk_00->unk_vf0C() - temp_v0;
    }
}
}
