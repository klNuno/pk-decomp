#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
} unk_func_003079A0_0;

extern u8 D_0035E9D0[];
extern u8 D_0035EE28[];
extern u8 D_0035EF90[];

unk_func_003079A0_0 *func_003079A0(unk_func_003079A0_0 *arg0, s32 arg1) {
    arg0->unk_00 = D_0035EE28;
    arg0->unk_00 = D_0035E9D0;
    arg0->unk_00 = D_0035EF90;
    arg0->unk_04 = arg1;
    return arg0;
}
