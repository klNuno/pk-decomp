#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
    u8 unk_10[4];
} unk_func_00300F80_0;

void c4sdk_malloc(void *, s32);
void func_00304B00(void *);
extern u8 D_0035EC70[];
extern u8 D_0035EC90[];

unk_func_00300F80_0 *func_00300F80(unk_func_00300F80_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (&arg0->unk_04 != NULL) {
            arg0->unk_04 = D_0035EC70;
            if (arg0->unk_10 != NULL) {
                c4sdk_malloc(arg0->unk_10, 0);
            }
            if (&arg0->unk_04 != NULL) {
                arg0->unk_04 = D_0035EC90;
                if (arg0->unk_0C != NULL) {
                    c4sdk_malloc(arg0->unk_0C, 0);
                }
            }
        }
        if (arg0 != NULL) {
            c4sdk_malloc(arg0, 0);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
