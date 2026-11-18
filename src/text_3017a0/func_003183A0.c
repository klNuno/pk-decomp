#include "common.h"

void func_00318C80();
void func_00304B00();
extern s32 D_0035F240[];

void *func_003183A0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((u8 *)arg0 + 4) = D_0035F240;
        func_00318C80(arg0, 0);
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
