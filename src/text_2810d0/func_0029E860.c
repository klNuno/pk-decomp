/* profile: opt_nodf */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_0029E860_0;

void func_0029EA40(f32, f32, f32, f32);

void func_0029E860(unk_func_0029E860_0 *arg0) {
    func_0029EA40((f32)arg0->unk_00 / 2147483648.0f, (f32)arg0->unk_04 / 2147483648.0f, 0.0f, 1.0f);
}
