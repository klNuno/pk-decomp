#include "common.h"

typedef struct unk_func_00312B40_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    void *unk_10;
    void *unk_14;
    void *unk_18;
} unk_func_00312B40_0;

void func_00119548(void *);
void *malloc(u32);
void func_00312C20(unk_func_00312B40_0 *);

void func_00312B40(unk_func_00312B40_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_0C = arg0->unk_04 + (arg0->unk_04 - 1) * (arg3 - 1);
    if (arg0->unk_08 != 0 && arg0->unk_08 != arg3) {
        arg0->unk_08 = 0;
        func_00119548(arg0->unk_10);
        func_00119548(arg0->unk_14);
        func_00119548(arg0->unk_18);
    }
    if (arg0->unk_08 == 0) {
        arg0->unk_08 = arg3;
        arg0->unk_10 = malloc((arg0->unk_08 - 1) * 12);
        arg0->unk_14 = malloc((arg0->unk_08 - 1) * 12);
        arg0->unk_18 = malloc((arg0->unk_08 - 1) * 16);
        func_00312C20(arg0);
    }
}
