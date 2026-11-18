/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00155DA0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00155DA0_0;

typedef struct unk_func_00155DA0_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00155DA0_1;

typedef struct unk_func_00155DA0_2 {
    s32 unk_00;
    u8 pad_04[0x3C];
    unk_func_00155DA0_1 unk_40;
    f32 unk_4C;
} unk_func_00155DA0_2;

inline void func_00155DA0_inl(unk_func_00155DA0_2 *arg0, unk_func_00155DA0_1 *arg1) {
    if (arg0->unk_00 == 1) {
        arg0->unk_00 = 2;
    }
    arg0->unk_40.unk_00 = arg1->unk_00;
    arg0->unk_40.unk_04 = arg1->unk_04;
    arg0->unk_40.unk_08 = arg1->unk_08;
    arg0->unk_4C = 1.0f;
}

void func_00155DA0(unk_func_00155DA0_2 *arg0, unk_func_00155DA0_0 *arg1, unk_func_00155DA0_0 *arg2) {
    unk_func_00155DA0_0 sp0;

    sp0.unk_00 = arg1->unk_00 + arg2->unk_00;
    sp0.unk_04 = arg1->unk_04 + arg2->unk_04;
    sp0.unk_08 = arg1->unk_08 + arg2->unk_08;
    func_00155DA0_inl(arg0, (unk_func_00155DA0_1 *)&sp0);
}
