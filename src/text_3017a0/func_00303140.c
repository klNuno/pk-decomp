#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_00303140_0;

void func_00303980();
void func_00304B00();

void *func_00303140(unk_func_00303140_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_04 != 0) {
            func_00303980(arg0, arg0->unk_04);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
