/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001BCA10_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001BCA10_0;

typedef struct unk_func_001BCA10_1 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001BCA10_1;

typedef struct unk_func_001BCA10_2 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_001BCA10_2;

typedef struct unk_func_001BCA10_3 {
    s32 unk_00;
    u8 pad_04[0x38];
    unk_func_001BCA10_0 unk_3C;
} unk_func_001BCA10_3;

extern u32 D_005AB848[];
unk_func_001BCA10_1 *func_001BC790();
s32 fn_h_StandardGameGetSuperObject();
unk_func_001BCA10_2 *HIE_fn_hGetSuperObjectObject();
unk_func_001BCA10_3 *func_001B84B0();
u8 *func_00138760();
void func_001BCBE0();

s32 func_001BCA10(s32 arg0, unk_func_001BCA10_0 *arg1) {
    unk_func_001BCA10_0 *vec;
    unk_func_001BCA10_3 *obj;
    unk_func_001BCA10_1 *a;
    s32 ret;
    s32 so;
    s32 b;
    unk_func_001BCA10_0 sp70;
    unk_func_001BCA10_0 sp80;
    f32 scale;

    ret = 0;
    if (arg1 != 0) {
        a = func_001BC790(arg0);
        if (a != 0) {
            so = fn_h_StandardGameGetSuperObject(a->unk_04);
            if (so != 0) {
                b = HIE_fn_hGetSuperObjectObject(so)->unk_08;
                if (b != 0) {
                    obj = func_001B84B0(b);
                    if (obj != 0) {
                        if (obj->unk_00 == 0) {
                            vec = (unk_func_001BCA10_0 *)(func_00138760(obj) + 0xF8);
                            scale = 1000.0f / D_005AB848[0];
                            sp70.unk_00 = vec->unk_00 * scale;
                            sp70.unk_04 = vec->unk_04 * scale;
                            sp70.unk_08 = vec->unk_08 * scale;
                        } else {
                            vec = &obj->unk_3C;
                            sp70.unk_00 = vec->unk_00;
                            sp70.unk_04 = vec->unk_04;
                            sp70.unk_08 = vec->unk_08;
                        }
                        func_001BCBE0(&sp80, &sp70);
                        arg1->unk_00 = sp80.unk_00;
                        arg1->unk_04 = sp80.unk_04;
                        arg1->unk_08 = sp80.unk_08;
                        ret = 1;
                    }
                }
            }
        }
    }
    return ret;
}
