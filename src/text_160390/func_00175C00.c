/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00175C00_2 {
    u8 pad_00[0x6];
    s8 unk_06;
    u8 pad_07[0x49];
} unk_func_00175C00_2;

typedef struct unk_func_00175C00_1 {
    u8 pad_00[0x44];
    s32 unk_44;
    u8 pad_48[0x28];
    s32 unk_70;
    u8 pad_74[0x10];
    u32 unk_84;
    unk_func_00175C00_2 unk_88[1];
} unk_func_00175C00_1;

typedef struct unk_func_00175C00_0 {
    u8 pad_00[0xC];
    s16 *unk_0C;
    unk_func_00175C00_1 ***unk_10;
    u8 pad_14[0xE];
    s16 unk_22;
} unk_func_00175C00_0;

s32 func_00196CB0(unk_func_00175C00_0 *);

static inline u32 func_00175C00_inl1(unk_func_00175C00_1 *obj) {
    if (obj != NULL && obj->unk_84 != 0) {
        return obj->unk_84;
    }
    return 0;
}

static inline s8 func_00175C00_inl2(unk_func_00175C00_2 *e) {
    if (e != NULL) {
        return e->unk_06;
    }
    return 0;
}

s32 func_00175C00(unk_func_00175C00_0 *arg0) {
    s32 i;
    u32 j;
    u32 n;
    unk_func_00175C00_1 **p;

    if (func_00196CB0(arg0)) {
        return 0;
    }
    for (i = 0; i < arg0->unk_22; i++) {
        if (arg0->unk_0C[i] == 1) {
            p = arg0->unk_10[i];
            if (p != NULL) {
                if ((*p) != NULL && ((*p)->unk_70 > 1 || ((*p)->unk_44 & 6))) {
                    return 0;
                }
                if ((*p) != NULL) {
                    n = func_00175C00_inl1((*p));
                    for (j = 0; j < n; j++) {
                        if (func_00175C00_inl2((unk_func_00175C00_2 *)((u8 *)(*p) + j * 0x50 + 0x88)) == 4) {
                            return 0;
                        }
                    }
                }
            }
        } else {
            return 0;
        }
    }
    return 1;
}
