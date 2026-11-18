#include "common.h"

typedef struct unk_func_00305A20_0 {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00305A20_0;

extern u8 D_0035EDC0[];
void func_00305B60();

unk_func_00305A20_0 *func_00305A20(unk_func_00305A20_0 *arg0, s32 arg1) {
    func_00305B60(arg0);
    arg0->unk_00 = D_0035EDC0;
    arg0->unk_08 = arg1;
    return arg0;
}
