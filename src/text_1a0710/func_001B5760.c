/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001B5760_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001B5760_0;

typedef struct unk_func_001B5760_1 {
    u8 pad_00[0x78];
    unk_func_001B5760_0 unk_78[8];
    u8 pad_D8[0x60];
    f32 unk_138[8];
} unk_func_001B5760_1;

void func_001B5470(unk_func_001B5760_1 *);

void func_001B5760(unk_func_001B5760_1 *arg0, f32 arg1, unk_func_001B5760_0 *arg2) {
    u32 i;
    unk_func_001B5760_0 *v;
    f32 total;
    f32 w;

    func_001B5470(arg0);
    total = 0.0f;
    arg2->unk_08 = arg2->unk_04 = arg2->unk_00 = 0.0f;
    for (i = 0; i < 8; i++) {
        w = arg0->unk_138[i];
        v = &arg0->unk_78[i];
        if (w) {
            if (0.0f != v->unk_00 || 0.0f != v->unk_04 || 0.0f != v->unk_08) {
                total += w;
                arg2->unk_00 = arg2->unk_00 + w * v->unk_00;
                arg2->unk_04 = arg2->unk_04 + w * v->unk_04;
                arg2->unk_08 = arg2->unk_08 + w * v->unk_08;
                if (!(total < arg1)) {
                    break;
                }
            }
        }
    }
    if (total) {
        arg2->unk_00 = arg2->unk_00 / total;
        arg2->unk_04 = arg2->unk_04 / total;
        arg2->unk_08 = arg2->unk_08 / total;
    }
}
