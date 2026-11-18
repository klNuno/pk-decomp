#include "common.h"

typedef struct unk_func_002EF3E0_0 {
    struct unk_func_002EF3E0_0 *unk_00;
    struct unk_func_002EF3E0_0 *unk_04;
    u32 unk_08;
    u8 unk_0C[4];
} unk_func_002EF3E0_0;

typedef struct unk_func_002EF3E0_1 {
    s32 unk_00;
    unk_func_002EF3E0_0 *unk_04;
    u8 pad_08[4];
    unk_func_002EF3E0_0 **unk_0C;
} unk_func_002EF3E0_1;

void func_002EF1A0(unk_func_002EF3E0_1 *, unk_func_002EF3E0_0 *);
void func_002EF3D0(unk_func_002EF3E0_1 *);
void func_002EE6B0(void *, s32);
void func_002EF3C0(unk_func_002EF3E0_0 **);
void func_002D2BB0(unk_func_002EF3E0_0 *);
void func_002CD2A0(void *, s32);

void func_002EF3E0(unk_func_002EF3E0_1 *arg0) {
    unk_func_002EF3E0_0 *root;
    unk_func_002EF3E0_0 *node;
    void *temp;

    root = arg0->unk_04;
    if (root == NULL) {
        return;
    }
    node = root->unk_00;
    if (node != NULL) {
        if (node->unk_00 != NULL) {
            func_002EF1A0(arg0, node->unk_00);
        }
        if (node->unk_04 != NULL) {
            func_002EF1A0(arg0, node->unk_04);
        }
        func_002EF3D0(arg0);
        func_002EE6B0(&node->unk_0C, -1);
        func_002EF3C0(&arg0->unk_04);
        func_002D2BB0(node);
    }
    node = root->unk_04;
    if (node != NULL) {
        if (node->unk_00 != NULL) {
            func_002EF1A0(arg0, node->unk_00);
        }
        if (node->unk_04 != NULL) {
            func_002EF1A0(arg0, node->unk_04);
        }
        func_002EF3D0(arg0);
        func_002EE6B0(&node->unk_0C, -1);
        func_002EF3C0(&arg0->unk_04);
        func_002D2BB0(node);
    }
    temp = &root->unk_0C;
    if (temp != NULL) {
        func_002CD2A0(temp, -1);
    }
    func_002D2BB0(root);
    arg0->unk_00 = 0;
    arg0->unk_04 = NULL;
    arg0->unk_0C = &arg0->unk_04;
}
