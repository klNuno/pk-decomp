#include "common.h"

typedef struct unk_func_00318C80_0 {
    s32 unk_00;
    void *unk_04;
} unk_func_00318C80_0;

void func_00304B00(unk_func_00318C80_0 *);
extern s32 D_0035F280[];

unk_func_00318C80_0 *func_00318C80(unk_func_00318C80_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = D_0035F280;
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
