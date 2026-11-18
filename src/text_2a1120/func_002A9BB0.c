/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002A9BB0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A9BB0_0;

extern u8 D_007B8488[];
extern unk_func_002A9BB0_0 D_007B8490;

void func_0029D8F0(s32, unk_func_002A9BB0_0 *);

void func_002A9BB0(u32 arg0, u32 arg1, u32 arg2) {
    D_007B8490.unk_00 = (f32)arg0 / 4294967296.0f;
    D_007B8490.unk_04 = (f32)arg1 / 4294967296.0f;
    D_007B8490.unk_08 = (f32)arg2 / 4294967296.0f;
    D_007B8490.unk_0C = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, &D_007B8490);
    }
}
