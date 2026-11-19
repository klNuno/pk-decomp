#include "common.h"

inline void *operator new(unsigned int, void *p) { return p; }

extern "C" {

void func_00116450(...);
void func_00118218(...);
void func_002CEFD0(...);
void *func_002D2BC0(...);
void func_002D49A0(...);
s32 func_002D48D0(...);
extern s32 *D_0032F73C[];
extern char D_0035C2E0[];

class unk_func_002F4990_0 {
public:
    s32 unk_00;
    unk_func_002F4990_0(const unk_func_002F4990_0 &o) {
        unk_func_002F4990_0 *volatile self = this;
        func_002D49A0(this, &o);
        unk_func_002F4990_0 *unk_04 = self;
        s32 unk_08 = *(const volatile s32 *)&o.unk_00;
        self->unk_00 = func_002D48D0(unk_08, unk_04);
    }
};

class unk_func_002F4990_1 {
public:
    unk_func_002F4990_0 unk_00;
    s32 unk_04;
    unk_func_002F4990_1(const unk_func_002F4990_1 &o) : unk_00(o.unk_00), unk_04(o.unk_04) {}
};

typedef struct unk_func_002F4990_2 {
    struct unk_func_002F4990_2 *unk_00;
    struct unk_func_002F4990_2 *unk_04;
    u32 unk_08;
    unk_func_002F4990_1 unk_0C;
} unk_func_002F4990_2;

typedef struct unk_func_002F4990_3 {
    s32 unk_00;
    unk_func_002F4990_2 *unk_04;
    u8 pad_08[4];
    unk_func_002F4990_2 *unk_0C;
} unk_func_002F4990_3;

unk_func_002F4990_2 *func_002F4990(unk_func_002F4990_3 *arg0, unk_func_002F4990_2 *arg1, bool arg2, bool arg3, const unk_func_002F4990_1 *arg4) {
    unk_func_002F4990_2 *node;

    if (arg0->unk_00 > 0xFFFFFFFEul) {
        func_00118218(D_0032F73C[0][3], D_0035C2E0);
        func_00116450();
    }
    node = (unk_func_002F4990_2 *)func_002D2BC0(0x14);
    new (&node->unk_0C) unk_func_002F4990_1(*arg4);
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
