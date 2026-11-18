#include "common.h"

typedef struct unk_func_00301FA0_0 {
    void *unk_00;
    s32 unk_04;
    u8 unk_08[0x4];
} unk_func_00301FA0_0;

void c4sdk_malloc(void *, s32);
void func_002D2BB0(void *);
void func_00302A80(void *, s32);
extern u8 D_0035ECF0[];

unk_func_00301FA0_0 *func_00301FA0(unk_func_00301FA0_0 *arg0, s16 arg1) {
    if (arg0 != 0) {
        arg0->unk_00 = D_0035ECF0;
        if (arg0->unk_08 != 0) {
            c4sdk_malloc(arg0->unk_08, 0);
        }
        func_00302A80(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
