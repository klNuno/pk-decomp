#include "common.h"

inline void *operator new(unsigned int, void *p) { return p; }

extern "C" {
void func_00116450(void);
void func_00118218(s32, char *);
s32 func_002D48D0(s32, void *);
void func_002D49A0(void *, const void *);
extern s32 *D_0032F73C[];
extern char D_0035BD80[];
}

struct unk_func_002EF7B0_0 {
    s32 unk_00;

    unk_func_002EF7B0_0(const unk_func_002EF7B0_0 &o) { func_002D49A0(this, &o); }
    ~unk_func_002EF7B0_0();
};

struct unk_func_002EF7B0_1 : public unk_func_002EF7B0_0 {
    unk_func_002EF7B0_1(const unk_func_002EF7B0_1 &o) : unk_func_002EF7B0_0(o) {
        unk_00 = func_002D48D0(o.unk_00, this);
    }
};

struct unk_func_002EF7B0_2 {
    unk_func_002EF7B0_1 unk_00;
    s32 unk_04;

    unk_func_002EF7B0_2(const unk_func_002EF7B0_2 &o) : unk_00(o.unk_00), unk_04(o.unk_04) {}
};

typedef struct unk_func_002EF7B0_3 {
    struct unk_func_002EF7B0_3 *unk_00;
    struct unk_func_002EF7B0_3 *unk_04;
    u32 unk_08;
    unk_func_002EF7B0_2 unk_0C;
} unk_func_002EF7B0_3;

typedef struct unk_func_002EF7B0_4 {
    s32 unk_00;
    unk_func_002EF7B0_3 *unk_04;
    u8 pad_08[4];
    unk_func_002EF7B0_3 *unk_0C;
} unk_func_002EF7B0_4;

extern "C" {
void func_002CEFD0(unk_func_002EF7B0_3 *, unk_func_002EF7B0_3 *);
unk_func_002EF7B0_3 *func_002D2BC0(s32);

unk_func_002EF7B0_3 *func_002EF7B0(unk_func_002EF7B0_4 *arg0, unk_func_002EF7B0_3 *arg1, bool arg2, bool arg3, const unk_func_002EF7B0_2 *arg4) {
    unk_func_002EF7B0_3 *node;

    if (arg0->unk_00 > 0xFFFFFFFEul) {
        func_00118218(D_0032F73C[0][3], D_0035BD80);
        func_00116450();
    }
    node = func_002D2BC0(0x14);
    new (&node->unk_0C) unk_func_002EF7B0_2(*arg4);
    node->unk_04 = 0;
    node->unk_00 = 0;
    node->unk_08 = (u32)arg1 | (node->unk_08 & 1);
    if (arg2) {
        arg1->unk_00 = node;
    } else {
        arg1->unk_04 = node;
    }
    arg0->unk_00++;
    func_002CEFD0(node, arg0->unk_04);
    if (arg3) {
        arg0->unk_0C = node;
    }
    return node;
}
}
