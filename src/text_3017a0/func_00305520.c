#include "common.h"

typedef struct unk_func_00305520_0 {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00305520_0;

extern u8 D_0035EDA0[];
extern u8 D_0035ED90[];

unk_func_00305520_0 *func_00305520(unk_func_00305520_0 *arg0, s32 arg1) {
    arg0->unk_00 = D_0035EDA0;
    arg0->unk_04 = arg1;
    arg0->unk_08 = 0;
    arg0->unk_00 = D_0035ED90;
    arg0->unk_0C = 0;
    return arg0;
}
