#include "common.h"

typedef struct {
    void *unk_00;
    void *unk_04;
} unk_func_0030F400_0;

extern s32 D_0035F1A0[];
extern s32 D_0035F1AC[];
void func_00304B00(unk_func_0030F400_0 *);

unk_func_0030F400_0 *func_0030F400(unk_func_0030F400_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035F1A0;
        arg0->unk_04 = D_0035F1AC;
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
