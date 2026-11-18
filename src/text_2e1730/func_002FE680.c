#include "common.h"

typedef struct unk_func_002FE680_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002FE680_0;

void func_002FE7B0(void *, s32);
void func_00304B00(void *);

unk_func_002FE680_0 *func_002FE680(unk_func_002FE680_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_04 != 0) {
            func_002FE7B0(arg0, arg0->unk_04);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
