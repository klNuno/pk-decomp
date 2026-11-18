#include "common.h"

typedef struct unk_func_0012BFB0_0 {
    s32 unk_00;
    u8 pad_04[4];
    struct unk_func_0012BFB0_0 *unk_08;
    u8 pad_0C[8];
    struct unk_func_0012BFB0_0 *unk_14;
    u8 pad_18[0x14];
    u32 unk_2C;
    u32 unk_30;
} unk_func_0012BFB0_0;

void func_0012C4B0();
void func_0012D980();
void func_0012E390();
void func_0012BFB0(s32 arg0, unk_func_0012BFB0_0 *arg1, u32 arg2);

void func_0012BFB0(s32 arg0, unk_func_0012BFB0_0 *arg1, u32 arg2) {
    if (!(u8)(arg1->unk_30 & 0x20)) {
        func_0012D980(arg1);
        arg2 &= arg1->unk_2C;
        if (((arg2 & 0x800000) && (arg2 & 0x2000000)) || ((arg2 & 0x1000000) && !(arg2 & 0x2000000))) {
            if (!(u8)(arg1->unk_30 & 2)) {
                func_0012E390(arg0, arg1, arg2);
            }
        }
        for (arg1 = arg1->unk_08; arg1 != NULL; arg1 = arg1->unk_14) {
            if (arg1->unk_00 != 2) {
                func_0012BFB0(arg0, arg1, arg2);
            }
        }
        func_0012C4B0();
    }
}
