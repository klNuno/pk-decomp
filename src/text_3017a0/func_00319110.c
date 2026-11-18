#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08[2];
    f32 unk_10;
} unk_func_00319110_0;

f32 *func_00317BC0(s32, s32, s32);
f32 *func_00317F70(s32, s32, s32);

void func_00319110(unk_func_00319110_0 *arg0, s32 arg1, s32 arg2) {
    u32 i;
    u32 j;
    f32 t;

    *func_00317BC0(arg1, arg0->unk_08[0], arg0->unk_08[1]) += arg0->unk_10;
    *func_00317BC0(arg1, arg0->unk_08[0], arg0->unk_08[0]) -= arg0->unk_10;
    *func_00317BC0(arg1, arg0->unk_08[1], arg0->unk_08[1]) -= arg0->unk_10;
    if (arg2 != 0) {
        for (i = 0; i < 2; i++) {
            for (j = i; j < 2; j++) {
                t = *func_00317F70(arg2, arg0->unk_08[i], arg0->unk_08[j]);
                *func_00317F70(arg2, arg0->unk_08[i], arg0->unk_08[j]) = 2.0f * t;
            }
        }
    }
}
