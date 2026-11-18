#include "common.h"

typedef struct unk_func_002D5EA0_1 {
    struct unk_func_002D5EA0_1 *unk_00;
    struct unk_func_002D5EA0_1 *unk_04;
} unk_func_002D5EA0_1;

typedef struct {
    s32 unk_00;
    unk_func_002D5EA0_1 *unk_04;
    u8 pad_08[4];
    unk_func_002D5EA0_1 **unk_0C;
} unk_func_002D5EA0_0;

void func_002D2BB0();
void func_002D5CC0();
void func_002D5E80();
void func_002D5E90();

void func_002D5EA0(unk_func_002D5EA0_0 *arg0) {
    unk_func_002D5EA0_1 *root;
    unk_func_002D5EA0_1 *n;

    root = arg0->unk_04;
    if (root != NULL) {
        n = root->unk_00;
        if (n != NULL) {
            if (n->unk_00 != NULL) {
                func_002D5CC0(arg0, n->unk_00);
            }
            if (n->unk_04 != NULL) {
                func_002D5CC0(arg0, n->unk_04);
            }
            func_002D5E90(arg0);
            func_002D5E80(&arg0->unk_04);
            func_002D2BB0(n);
        }
        n = root->unk_04;
        if (n != NULL) {
            if (n->unk_00 != NULL) {
                func_002D5CC0(arg0, n->unk_00);
            }
            if (n->unk_04 != NULL) {
                func_002D5CC0(arg0, n->unk_04);
            }
            func_002D5E90(arg0);
            func_002D5E80(&arg0->unk_04);
            func_002D2BB0(n);
        }
        func_002D2BB0(root);
        arg0->unk_00 = 0;
        arg0->unk_04 = NULL;
        arg0->unk_0C = &arg0->unk_04;
    }
}
