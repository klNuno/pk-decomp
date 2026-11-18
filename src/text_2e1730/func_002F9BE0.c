#include "common.h"

typedef struct unk_func_002F9BE0_0 {
    s32 unk_00;
    void *unk_04;
} unk_func_002F9BE0_0;

void c4sdk_malloc(void *, s32);
void func_00304B00(void *);

unk_func_002F9BE0_0 *func_002F9BE0(unk_func_002F9BE0_0 *arg0, s16 arg1) {
    if (arg0 != 0) {
        if (arg0->unk_04 != 0) {
            func_00304B00(arg0->unk_04);
        }
        if (arg0 != 0) {
            c4sdk_malloc(arg0, 0);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
