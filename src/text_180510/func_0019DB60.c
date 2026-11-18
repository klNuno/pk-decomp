/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    s32 unk_28;
    u8 pad_2C[0x2C];
    f32 unk_58;
    f32 unk_5C;
    u8 pad_60[8];
} unk_func_0019DB60_0;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[8];
    s32 unk_20;
} unk_func_0019DB60_1;

void func_00284CC0();
s32 func_001AEF20();
unk_func_0019DB60_1 *HIE_fn_hGetSuperObjectObject();
s32 func_001B6AB0();
s32 func_001BE470();
void func_0019E320();
extern unk_func_0019DB60_0 *D_0035F580;
extern s32 D_0035F584;
extern f32 D_0035FF14;
extern f32 D_0035FF18;
extern u8 D_0035FF64;

s32 func_0019DB60(unk_func_0019DB60_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 count = 0;
    s32 flags = 0;
    f32 v[3];
    s16 i;
    unk_func_0019DB60_0 *p;
    unk_func_0019DB60_0 *base;
    s32 old;
    unk_func_0019DB60_0 *q;

    func_00284CC0();
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.1f;
    if (D_0035FF64 && func_001AEF20(arg1)) {
        arg0->unk_28 = 0;
        return 0;
    }
    if (HIE_fn_hGetSuperObjectObject(arg1)->unk_14 && func_001B6AB0(1, arg1)) {
        D_0035F580 = arg0;
        D_0035F584 = 0;
        func_0019E320(arg1, func_001BE470(HIE_fn_hGetSuperObjectObject(arg1)->unk_20), arg2, arg3);
        i = 0;
        p = arg0;
        base = p;
        for (; i < D_0035F584; i++, q = p, p = q + 1) {
            flags = p->unk_28;
            if ((flags & 1) == 1) {
                old = p->unk_24;
                p->unk_28 = 2;
            } else {
                p->unk_28 = 1;
            }
            if (flags & 2) {
                p->unk_28 |= 4;
            }
            p->unk_58 = D_0035FF14;
            p->unk_5C = D_0035FF18;
            count = i + 1;
        }
    }
    return count;
}
