/* profile: opt */
#include "common.h"

typedef struct unk_func_002F3BF0_1 {
    struct unk_func_002F3BF0_1 *unk_00;
    struct unk_func_002F3BF0_1 *unk_04;
    u32 unk_08;
    u8 unk_0C[0x38];
} unk_func_002F3BF0_1;

typedef struct unk_func_002F3BF0_0 {
    u32 unk_00;
    unk_func_002F3BF0_1 *unk_04;
    u8 pad_08[0x4];
    unk_func_002F3BF0_1 *unk_0C;
} unk_func_002F3BF0_0;

typedef struct unk_func_002F3BF0_3 {
    u8 pad_00[0xC];
    void *unk_0C;
} unk_func_002F3BF0_3;

extern "C" {
extern unk_func_002F3BF0_3 *D_0032F73C[];
extern u8 D_0035C2B0[];
void func_00116450(void);
void func_00118218(void *, void *);
void func_002CDC10(void *, void *);
void func_002CEFD0(unk_func_002F3BF0_1 *, unk_func_002F3BF0_1 *);
unk_func_002F3BF0_1 *func_002D2BC0(s32);
s32 func_002D48D0(s32, s32 *);
void func_002D49A0(void *, void *);
void func_002F3200(void *, void *);
void func_002F3230(void *, void *);
}

struct unk_func_002F3BF0_7 {
    s32 unk_00;
    unk_func_002F3BF0_7(const unk_func_002F3BF0_7 &o) {
        func_002D49A0(this, (void *)&o);
    }
    ~unk_func_002F3BF0_7();
};

struct unk_func_002F3BF0_11 {
    unk_func_002F3BF0_7 unk_00;
    unk_func_002F3BF0_11(const unk_func_002F3BF0_11 &o) : unk_00(o.unk_00) {
        unk_00.unk_00 = func_002D48D0(o.unk_00.unk_00, &unk_00.unk_00);
    }
};

struct unk_func_002F3BF0_4 {
    unk_func_002F3BF0_11 unk_00;
};

struct unk_func_002F3BF0_8 {
    u8 unk_00[0x10];
    unk_func_002F3BF0_8(const unk_func_002F3BF0_8 &o) {
        func_002F3230(this, (void *)&o);
    }
    ~unk_func_002F3BF0_8();
};

struct unk_func_002F3BF0_9 {
    u8 unk_00[0x10];
    unk_func_002F3BF0_9(const unk_func_002F3BF0_9 &o) {
        func_002F3200(this, (void *)&o);
    }
    ~unk_func_002F3BF0_9();
};

struct unk_func_002F3BF0_10 {
    u8 unk_00[0x4];
    unk_func_002F3BF0_10(const unk_func_002F3BF0_10 &o) {
        func_002CDC10(this, (void *)&o);
    }
    ~unk_func_002F3BF0_10();
};

struct unk_func_002F3BF0_5 {
    unk_func_002F3BF0_8 unk_00;
    unk_func_002F3BF0_9 unk_10;
    unk_func_002F3BF0_9 unk_20;
    unk_func_002F3BF0_10 unk_30;
};

struct unk_func_002F3BF0_2 {
    unk_func_002F3BF0_4 unk_00;
    unk_func_002F3BF0_5 unk_04;
};

inline void *operator new(unsigned int, void *p) { return p; }

extern "C" unk_func_002F3BF0_1 *func_002F3BF0(unk_func_002F3BF0_0 *arg0, unk_func_002F3BF0_1 *arg1, s32 arg2, s32 arg3, const unk_func_002F3BF0_2 &arg4) {
    unk_func_002F3BF0_1 *n;

    if (arg0->unk_00 > 0xFFFFFFFEU) {
        func_00118218(D_0032F73C[0]->unk_0C, D_0035C2B0);
        func_00116450();
    }
    n = func_002D2BC0(0x44);
    new (n->unk_0C) unk_func_002F3BF0_2(arg4);
    n->unk_04 = 0;
    n->unk_00 = 0;
    n->unk_08 = (u32)arg1 | (n->unk_08 & 1);
    if (arg2 != 0) {
        arg1->unk_00 = n;
    } else {
        arg1->unk_04 = n;
    }
    arg0->unk_00++;
    func_002CEFD0(n, arg0->unk_04);
    if (arg3 != 0) {
        arg0->unk_0C = n;
    }
    return n;
}
