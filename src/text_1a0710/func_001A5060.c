/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001A5060_0;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
} unk_func_001A5060_1;

typedef void (*unk_func_001A5060_2)(unk_func_001A5060_1 *, s32, s32, s32, f32);

unk_func_001A5060_0 *HIE_fn_hGetSuperObjectObject();
unk_func_001A5060_1 *func_001B84B0();
s32 func_001A4D40();
void func_00137B60();
s32 func_001B8500();
s32 func_00139040();
s32 *func_00138760();
void func_001B8550();
extern u32 D_005AB848[];
extern unk_func_001A5060_2 D_005AB740[];

void func_001A5060(s32 arg0) {
    s32 so;
    unk_func_001A5060_1 *p;
    s32 q;

    so = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (so) {
        if ((p = func_001B84B0(so))) {
            q = func_001A4D40(arg0);
            if (p->unk_04 != q) {
                func_00137B60(p, q);
            }
            if (q) {
                D_005AB740[func_00139040(q)](p, arg0, func_001B8500(HIE_fn_hGetSuperObjectObject(arg0)->unk_08), q, D_005AB848[0] / 1000.0f);
                if ((p->unk_0C & 0x4000) ? 1 : 0) {
                    func_00138760(p)[0] = func_00138760(p)[1];
                }
                func_001B8550(so, func_00139040(q));
            }
        }
    }
}
