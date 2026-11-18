/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00230670_0 {
    u8 *unk_00;
    u8 pad_04[0xC];
} unk_func_00230670_0;

typedef struct unk_func_00230670_1 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_00230670_1;

typedef struct unk_func_00230670_2 {
    u8 pad_00[0x30];
    f32 unk_30[3];
} unk_func_00230670_2;

unk_func_00230670_1 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00230670_0 *);
unk_func_00230670_2 *func_00138800(s32);
s32 func_001B84B0(s32);
s32 func_001ED550(u8 *, u8);

s32 *func_00230670(s32 arg0, s32 *arg1) {
    unk_func_00230670_0 res;
    f32 tmp[3];
    s32 id;
    u8 *list;
    f32 *vec;
    u32 count;
    u32 i;
    s32 obj;
    s32 so;
    s32 m;

    id = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    list = res.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    vec = (f32 *)&res;
    switch (id) {
    case 0x138:
        count = *list;
        for (i = 0; i < count; i++) {
            obj = func_001ED550(list, i);
            so = HIE_fn_hGetSuperObjectObject(obj)->unk_08;
            if (so == 0) {
                return arg1;
            }
            m = func_001B84B0(so);
            tmp[0] = vec[0] + func_00138800(m)->unk_30[0];
            tmp[1] = vec[1] + func_00138800(m)->unk_30[1];
            tmp[2] = vec[2] + func_00138800(m)->unk_30[2];
            ((s32 *)func_00138800(m)->unk_30)[0] = ((s32 *)tmp)[0];
            ((s32 *)func_00138800(m)->unk_30)[1] = ((s32 *)tmp)[1];
            ((s32 *)func_00138800(m)->unk_30)[2] = ((s32 *)tmp)[2];
        }
    }
    return arg1;
}
