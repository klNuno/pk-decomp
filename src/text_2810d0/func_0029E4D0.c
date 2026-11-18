/* profile: opt_nodf */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_0029E4D0_0;

void func_0029EA40(f32, f32, f32, f32);

void func_0029E4D0(unk_func_0029E4D0_0 *arg0) {
    func_0029EA40((f32)arg0->unk_00 / 2147483648.0f, (f32)arg0->unk_04 / 2147483648.0f,
                  (f32)arg0->unk_08 / 2147483648.0f, (f32)arg0->unk_0C / 2147483648.0f);
}
