#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    u8 unk_08[4];
    u8 unk_0C[4];
} unk_func_00301030_0;

void c4sdk_malloc(void *, s32);
void func_002D2BB0(void *);
extern u8 D_0035EC70[];
extern u8 D_0035EC90[];

unk_func_00301030_0 *func_00301030(unk_func_00301030_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035EC70;
        if (arg0->unk_0C != NULL) {
            c4sdk_malloc(arg0->unk_0C, 0);
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_0035EC90;
            if (arg0->unk_08 != NULL) {
                c4sdk_malloc(arg0->unk_08, 0);
            }
        }
        if ((s16)arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
