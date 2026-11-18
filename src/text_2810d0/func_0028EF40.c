#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_0028EF40_0;

void func_0028EF90(s32, s32, unk_func_0028EF40_0 *);

void func_0028EF40(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_0028EF40_0 v;

    v.unk_00 = arg2[0];
    v.unk_04 = arg2[1];
    v.unk_08 = arg2[2];
    v.unk_0C = arg2[3];
    func_0028EF90(arg0, arg1, &v);
}
