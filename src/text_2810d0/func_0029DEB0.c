#include "common.h"

typedef struct unk_func_0029DEB0_0 {
    struct unk_func_0029DEB0_0 *unk_00;
    void *unk_04;
    s32 unk_08;
    s32 unk_0C[1];
} unk_func_0029DEB0_0;

typedef struct unk_func_0029DEB0_1 {
    void *unk_00;
    s32 unk_04;
} unk_func_0029DEB0_1;

extern void *(*D_0035F644)(s32);
extern unk_func_0029DEB0_1 D_007B8070[];
extern unk_func_0029DEB0_0 *D_007B8270[];
extern unk_func_0029DEB0_0 *D_007B8274[];
void memset();

s32 *func_0029DEB0(void *arg0, s32 arg1) {
    unk_func_0029DEB0_0 *temp;
    unk_func_0029DEB0_1 *p;
    s32 i;

    if (arg0 == NULL) {
        return NULL;
    }
    if (arg1 <= 0) {
        return NULL;
    }
    if (arg1 == 1) {
        for (i = 0, p = D_007B8070; i < 64; i++, p++) {
            if (p->unk_00 == NULL) {
                p->unk_00 = arg0;
                return &p->unk_04;
            }
        }
    }
    temp = D_0035F644((arg1 - 1) * 4 + sizeof(unk_func_0029DEB0_0));
    temp->unk_08 = arg1;
    temp->unk_04 = arg0;
    temp->unk_00 = NULL;
    memset(temp->unk_0C, 0, arg1 * 4);
    if (D_007B8274[0] != NULL) {
        D_007B8274[0]->unk_00 = temp;
    }
    D_007B8274[0] = temp;
    if (D_007B8270[0] == NULL) {
        D_007B8270[0] = temp;
    }
    return temp->unk_0C;
}
