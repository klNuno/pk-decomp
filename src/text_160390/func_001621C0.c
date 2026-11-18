#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_001621C0_0;

s32 func_00162090();
void func_00162130();

void func_001621C0(unk_func_001621C0_0 *arg0, unk_func_001621C0_0 *arg1) {
    if (func_00162090(arg0) == 0 || func_00162090(arg1) == 0) {
        func_00162130();
    }
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
}
