#include "common.h"

typedef struct unk_func_003090F0_1 {
    void *unk_00;
    s32 unk_04;
} unk_func_003090F0_1;

typedef struct unk_func_003090F0_0 {
    unk_func_003090F0_1 *unk_00;
    void *unk_04;
    u8 unk_08[4];
} unk_func_003090F0_0;

void func_0030C380(void *, s32);
void func_00304B00(void *);
extern u8 D_0035EFF0[];
extern u8 D_0035F000[];

unk_func_003090F0_0 *func_003090F0(unk_func_003090F0_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = D_0035EFF0;
        arg0->unk_00->unk_00 = D_0035F000;
        arg0->unk_00->unk_04 = arg0->unk_08 - (u8 *)arg0->unk_00;
        if (arg1 != 0) {
            func_0030C380(arg0->unk_08, 0);
        }
        if ((s16)arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
