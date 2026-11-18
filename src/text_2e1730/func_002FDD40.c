#include "common.h"

typedef struct unk_func_002FDD40_0 {
    struct unk_func_002FDD40_0 *unk_00;
    struct unk_func_002FDD40_0 *unk_04;
    u32 unk_08;
    s32 unk_0C;
} unk_func_002FDD40_0;

typedef struct unk_func_002FDD40_1 {
    s32 unk_00;
    s32 unk_04;
    unk_func_002FDD40_0 *unk_08;
} unk_func_002FDD40_1;

typedef struct unk_func_002FDD40_2 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002FDD40_2;

void func_00118218(s32, s32 *);
void func_00116450(void);
unk_func_002FDD40_0 *func_002D2BC0(s32);
void func_002CEFD0(unk_func_002FDD40_0 *, s32);
extern unk_func_002FDD40_2 *D_0032F73C[];
extern s32 D_0035CC40[];

unk_func_002FDD40_0 *func_002FDD40(unk_func_002FDD40_1 *arg0, unk_func_002FDD40_0 *arg1, s32 arg2, s32 arg3, s32 *arg4) {
    unk_func_002FDD40_0 *node;

    if (arg0->unk_00 > 0xFFFFFFFEUL) {
        func_00118218(D_0032F73C[0]->unk_0C, D_0035CC40);
        func_00116450();
    }
    node = func_002D2BC0(0x10);
    {
        s32 *temp = &node->unk_0C;
        if (temp != 0) {
            *temp = *arg4;
        }
    }
    node->unk_04 = 0;
    node->unk_00 = 0;
    node->unk_08 = (u32)arg1 | (node->unk_08 & 1);
    if (arg2 != 0) {
        arg1->unk_00 = node;
    } else {
        arg1->unk_04 = node;
    }
    arg0->unk_00++;
    func_002CEFD0(node, arg0->unk_04);
    if (arg3 != 0) {
        arg0->unk_08 = node;
    }
    return node;
}
