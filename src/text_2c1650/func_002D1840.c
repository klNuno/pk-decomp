#include "common.h"

typedef struct unk_func_002D1840_0 {
    struct unk_func_002D1840_0 *unk_00;
    struct unk_func_002D1840_0 *unk_04;
} unk_func_002D1840_0;

typedef struct unk_func_002D1840_1 {
    s32 unk_00;
    unk_func_002D1840_0 *unk_04;
} unk_func_002D1840_1;

void func_002D15D0(unk_func_002D1840_1 *, unk_func_002D1840_0 *);
void func_002D1790(unk_func_002D1840_0 **);
void func_002D17A0(unk_func_002D1840_1 *);
void func_002D2BB0(unk_func_002D1840_0 *);
void func_00304B00(unk_func_002D1840_1 *);

inline void unk_inline_0(unk_func_002D1840_1 *arg0, unk_func_002D1840_0 *node) {
    if (node->unk_00 != NULL) {
        func_002D15D0(arg0, node->unk_00);
    }
    if (node->unk_04 != NULL) {
        func_002D15D0(arg0, node->unk_04);
    }
    func_002D17A0(arg0);
    func_002D1790(&arg0->unk_04);
    func_002D2BB0(node);
}

unk_func_002D1840_1 *func_002D1840(unk_func_002D1840_1 *arg0, s16 arg1) {
    unk_func_002D1840_0 *root;

    if (arg0 != NULL) {
        root = arg0->unk_04;
        if (root != NULL) {
            if (root->unk_00 != NULL) {
                unk_inline_0(arg0, root->unk_00);
            }
            if (root->unk_04 != NULL) {
                unk_inline_0(arg0, root->unk_04);
            }
            func_002D2BB0(root);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
