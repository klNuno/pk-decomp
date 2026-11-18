/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002BC4F0_0 {
    f32 unk_00;
    u8 pad_04[0xC];
    f32 unk_10;
    u8 pad_14[0xC];
    f32 unk_20;
    u8 pad_24[0xC];
    f32 unk_30;
} unk_func_002BC4F0_0;

extern unk_func_002BC4F0_0 *D_007B25B0[];

static inline void func_002BC4F0_inl(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0x2300 && arg1 == 0x2200) {
        *(s32 *)&D_007B25B0[0]->unk_10 = arg2;
    }
}

void func_002BC4F0(s32 arg0, s32 arg1, s32 *arg2) {
    if (arg0 == 0x2300) {
        if (arg1 == 0x2200) {
            func_002BC4F0_inl(arg0, arg1, *arg2);
        } else if (arg1 == 0x2201) {
            unk_func_002BC4F0_0 *p = D_007B25B0[0];

            p->unk_00 = arg2[0] / 2147483648.0f;
            p->unk_10 = arg2[1] / 2147483648.0f;
            p->unk_20 = arg2[2] / 2147483648.0f;
            p->unk_30 = arg2[3] / 2147483648.0f;
        }
    }
}
