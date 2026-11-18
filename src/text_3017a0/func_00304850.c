#include "common.h"

typedef struct unk_func_00304850_0 {
    s32 unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
} unk_func_00304850_0;

void func_002D2BB0();
void func_00308C80();
void func_00304B00();

unk_func_00304850_0 *func_00304850(unk_func_00304850_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_002D2BB0(arg0->unk_08);
        if (arg0 != NULL) {
            if (arg0->unk_00 != 0) {
                func_00308C80(arg0->unk_00);
            }
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
