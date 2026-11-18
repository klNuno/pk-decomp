#include "common.h"

typedef struct {
    f32 unk_00[4];
} __attribute__((aligned(16))) unk_func_002BC590_1;

typedef struct {
    unk_func_002BC590_1 unk_00;
    s32 unk_10;
} unk_func_002BC590_0;

extern unk_func_002BC590_0 *D_007B25B0[];

void func_002BC590(s32 arg0, s32 arg1, f32 *arg2) {
    s32 temp;

    if (arg0 == 0x2300) {
        if (arg1 == 0x2200) {
            temp = *arg2;
            if (arg0 == 0x2300 && arg1 == 0x2200) {
                D_007B25B0[0]->unk_10 = temp;
            }
        } else if (arg1 == 0x2201) {
            D_007B25B0[0]->unk_00 = *(unk_func_002BC590_1 *)arg2;
        }
    }
}
