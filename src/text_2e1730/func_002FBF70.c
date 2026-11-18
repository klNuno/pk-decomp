#include "common.h"

typedef struct unk_func_002FBF70_0 {
    struct unk_func_002FBF70_0 *unk_00;
    struct unk_func_002FBF70_0 *unk_04;
} unk_func_002FBF70_0;

typedef struct unk_func_002FBF70_1 {
    s32 unk_00;
    unk_func_002FBF70_0 *unk_04;
    u8 pad_08[4];
    unk_func_002FBF70_0 **unk_0C;
} unk_func_002FBF70_1;

void func_002D2BB0();
void func_002FBD90();
void func_002FBF50();
void func_002FBF60();

void func_002FBF70(unk_func_002FBF70_1 *arg0) {
    unk_func_002FBF70_0 *root;
    unk_func_002FBF70_0 *n;

    root = arg0->unk_04;
    if (root != NULL) {
        n = root->unk_00;
        if (n != NULL) {
            if (n->unk_00 != NULL) {
                func_002FBD90(arg0, n->unk_00);
            }
            if (n->unk_04 != NULL) {
                func_002FBD90(arg0, n->unk_04);
            }
            func_002FBF60(arg0);
            func_002FBF50(&arg0->unk_04);
            func_002D2BB0(n);
        }
        n = root->unk_04;
        if (n != NULL) {
            if (n->unk_00 != NULL) {
                func_002FBD90(arg0, n->unk_00);
            }
            if (n->unk_04 != NULL) {
                func_002FBD90(arg0, n->unk_04);
            }
            func_002FBF60(arg0);
            func_002FBF50(&arg0->unk_04);
            func_002D2BB0(n);
        }
        func_002D2BB0(root);
        arg0->unk_00 = 0;
        arg0->unk_04 = NULL;
        arg0->unk_0C = &arg0->unk_04;
    }
}
