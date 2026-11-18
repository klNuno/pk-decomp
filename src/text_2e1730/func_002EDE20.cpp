#include "common.h"

inline void *operator new(unsigned int, void *p) { return p; }

extern "C" {

class unk_func_002EDE20_0 {
public:
    s32 unk_00;
    s32 unk_04;
    unk_func_002EDE20_0(const unk_func_002EDE20_0 &p) : unk_00(p.unk_00), unk_04(p.unk_04) {}
};

typedef struct unk_func_002EDE20_1 {
    struct unk_func_002EDE20_1 *unk_00;
    struct unk_func_002EDE20_1 *unk_04;
    u32 unk_08;
    unk_func_002EDE20_0 unk_0C;
} unk_func_002EDE20_1;

typedef struct unk_func_002EDE20_2 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    unk_func_002EDE20_1 *unk_0C;
} unk_func_002EDE20_2;

typedef struct unk_func_002EDE20_3 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002EDE20_3;

void func_00116450(...);
void func_00118218(...);
void func_002CEFD0(...);
unk_func_002EDE20_1 *func_002D2BC0(...);
extern unk_func_002EDE20_3 *D_0032F73C[];
extern char D_0035BD50[];

unk_func_002EDE20_1 *func_002EDE20(unk_func_002EDE20_2 *arg0, unk_func_002EDE20_1 *arg1, s32 arg2, s32 arg3, unk_func_002EDE20_0 *arg4) {
    unk_func_002EDE20_1 *node;

    if (arg0->unk_00 > 0xFFFFFFFEUL) {
        func_00118218(D_0032F73C[0]->unk_0C, D_0035BD50);
        func_00116450();
    }
    node = func_002D2BC0(0x14);
    new (&node->unk_0C) unk_func_002EDE20_0(*arg4);
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
