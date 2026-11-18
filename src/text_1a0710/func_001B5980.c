/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001B5980_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001B5980_0;

typedef struct unk_func_001B5980_1 {
    u8 pad_00[0xD8];
    unk_func_001B5980_0 unk_D8[8];
    f32 unk_138[8];
} unk_func_001B5980_1;

void func_001B5470(unk_func_001B5980_1 *);

void func_001B5980(unk_func_001B5980_1 *arg0, f32 arg1, unk_func_001B5980_0 *arg2) {
    u32 i;
    unk_func_001B5980_0 *v;
    f32 sum;
    f32 w;

    func_001B5470(arg0);
    sum = 0.0f;
    arg2->unk_08 = arg2->unk_04 = arg2->unk_00 = 0.0f;
    for (i = 0; i < 8; i++) {
        w = arg0->unk_138[i];
        v = &arg0->unk_D8[i];
        if (w && !(0.0f == v->unk_00 && 0.0f == v->unk_04 && 0.0f == v->unk_08)) {
            sum += w;
            arg2->unk_00 = arg2->unk_00 + w * v->unk_00;
            arg2->unk_04 = arg2->unk_04 + w * v->unk_04;
            arg2->unk_08 = arg2->unk_08 + w * v->unk_08;
            if (sum >= arg1) {
                break;
            }
        }
    }
    if (sum) {
        arg2->unk_00 = arg2->unk_00 / sum;
        arg2->unk_04 = arg2->unk_04 / sum;
        arg2->unk_08 = arg2->unk_08 / sum;
    }
}
