/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_001384A0_0 {
    u8 pad_00[0x8];
    s32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x154];
    u8 unk_164;
    u8 pad_165[0x3];
    s32 unk_168;
    u8 pad_16C[0x14];
    f32 unk_180;
    u8 pad_184[0x124];
    s32 unk_2A8;
} unk_func_001384A0_0;

extern s32 D_0035F92C;
extern s32 D_0035F930;
extern s32 D_0035F934;
extern u8 D_00367610[];
void memset();
s32 func_00138680();
void func_00139010();

void func_001384A0(unk_func_001384A0_0 *arg0) {
    s32 saved;
    u32 flags;
    s32 v;

    D_0035F92C = 0;
    D_0035F930 = 0;
    saved = 0;
    D_0035F934 = 0;
    memset(D_00367610, 0, 0x274);
    arg0->unk_08 = 0;
    arg0->unk_0C &= 0x4400F;
    flags = arg0->unk_0C;
    if (((flags & 0x4000) ? 1 : 0) != 0) {
        if (((flags & 0x4000) ? 1 : 0) == 0) {
            v = func_00138680(arg0);
            if (v != D_0035F934) {
                D_0035F934 = v;
            }
        }
        saved = arg0->unk_168;
        func_00139010(saved);
    }
    if (((arg0->unk_0C & 4) ? 1 : 0) != 0) {
        memset(arg0, 0, 0x370);
    } else if (((arg0->unk_0C & 2) ? 1 : 0) != 0) {
        memset(arg0, 0, 0x200);
    } else {
        memset(arg0, 0, 0x170);
    }
    arg0->unk_0C = flags;
    if (saved != 0) {
        arg0->unk_168 = saved;
    }
    arg0->unk_0C = arg0->unk_0C = arg0->unk_0C | 0x80;
    arg0->unk_164 = 1;
    if (((arg0->unk_0C & 2) ? 1 : 0) != 0) {
        if (((arg0->unk_0C & 2) ? 1 : 0) == 0) {
            v = func_00138680(arg0);
            if (v != D_0035F92C) {
                D_0035F92C = v;
            }
        }
        arg0->unk_180 = 1.0f;
    }
    if (((arg0->unk_0C & 4) ? 1 : 0) != 0) {
        if (((arg0->unk_0C & 4) ? 1 : 0) == 0) {
            v = func_00138680(arg0);
            if (v != D_0035F930) {
                D_0035F930 = v;
            }
        }
        arg0->unk_2A8 = 0;
    }
    memset(D_00367610, 0, 0x274);
}
