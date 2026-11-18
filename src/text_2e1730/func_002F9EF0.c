/* profile: opt */
#include "common.h"

typedef struct unk_func_002F9EF0_1 {
    void *unk_00;
    void *unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
    u8 unk_10[4];
} unk_func_002F9EF0_1;

typedef struct unk_func_002F9EF0_0 {
    s32 unk_00;
    unk_func_002F9EF0_1 *unk_04;
    u8 pad_08[4];
    void *unk_0C;
} unk_func_002F9EF0_0;

void func_002CD2A0(void *, s32);
void func_002D2BB0(void *);
void func_002F9810(void *, s32);
void func_002F9C90(unk_func_002F9EF0_0 *, void *);
void func_002F9ED0(void *);
void func_002F9EE0(unk_func_002F9EF0_0 *);

static inline void unk_inl_0(unk_func_002F9EF0_0 *arg0, unk_func_002F9EF0_1 *node) {
    if (node->unk_00 != 0) {
        func_002F9C90(arg0, node->unk_00);
    }
    if (node->unk_04 != 0) {
        func_002F9C90(arg0, node->unk_04);
    }
    func_002F9EE0(arg0);
    func_002F9810(node->unk_0C, -1);
    func_002F9ED0(&arg0->unk_04);
    func_002D2BB0(node);
}

void func_002F9EF0(unk_func_002F9EF0_0 *arg0) {
    unk_func_002F9EF0_1 *root;
    unk_func_002F9EF0_1 *node;

    root = arg0->unk_04;
    if (root != 0) {
        node = root->unk_00;
        if (node != 0) {
            unk_inl_0(arg0, node);
        }
        node = root->unk_04;
        if (node != 0) {
            unk_inl_0(arg0, node);
        }
        if (root->unk_0C != 0) {
            func_002CD2A0(root->unk_10, -1);
        }
        func_002D2BB0(root);
        arg0->unk_00 = 0;
        arg0->unk_04 = 0;
        arg0->unk_0C = &arg0->unk_04;
    }
}
