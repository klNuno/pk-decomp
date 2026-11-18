/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001BA850_0 {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_func_001BA850_0;

unk_func_001BA850_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001971C0(s32);
s32 func_001B9A50(s32);
s32 func_001B9AA0(s32);

static inline unk_func_001BA850_0 *func_001BA850_inl1(s32 arg0) {
    if (func_001971C0(arg0) != 2) {
        return NULL;
    }
    return HIE_fn_hGetSuperObjectObject(arg0);
}

static inline s32 func_001BA850_inl2(s32 arg0) {
    s32 ok = 0;
    if (arg0 != 0 && func_001B9AA0(arg0) != 0) {
        ok = 1;
    }
    if (ok) {
        return func_001B9A50(arg0);
    }
    return 0;
}

s32 func_001BA850(s32 arg0) {
    if (func_001971C0(arg0) == 2) {
        return func_001BA850_inl2(func_001BA850_inl1(arg0)->unk_1C);
    }
    return 0;
}
