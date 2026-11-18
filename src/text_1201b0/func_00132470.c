#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00132470_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00132470_4;

typedef struct {
    u8 pad_00[0x48];
    unk_func_00132470_0 unk_48;
    unk_func_00132470_0 unk_54;
    u8 pad_60[0x4];
    u8 unk_64;
    u8 pad_65[0x2];
    s8 unk_67;
} unk_func_00132470_1;

typedef struct unk_func_00132470_2 {
    u8 pad_00[0x4];
    unk_func_00132470_1 *unk_04;
    u8 pad_08[0xC];
    struct unk_func_00132470_2 *unk_14;
} unk_func_00132470_2;

typedef struct {
    u8 pad_00[0x8];
    unk_func_00132470_2 *unk_08;
} unk_func_00132470_3;

f32 func_001E60E0(f32);

static inline s32 unk_inline_0(unk_func_00132470_0 *arg0, unk_func_00132470_1 *arg1) {
    unk_func_00132470_0 min;
    unk_func_00132470_0 max;

    {
        s32 *d = (s32 *)&min;
        s32 *s = (s32 *)&arg1->unk_48;
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
    }
    {
        s32 *d = (s32 *)&max;
        s32 *s = (s32 *)&arg1->unk_54;
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
    }
    if (arg0->unk_00 < min.unk_00 || !(arg0->unk_00 <= max.unk_00)) {
        return 0;
    }
    if (arg0->unk_04 < min.unk_04 || !(arg0->unk_04 <= max.unk_04)) {
        return 0;
    }
    if (arg0->unk_08 < min.unk_08 || !(arg0->unk_08 <= max.unk_08)) {
        return 0;
    }
    return 1;
}

unk_func_00132470_2 *func_00132470(unk_func_00132470_3 *arg0, unk_func_00132470_0 *arg1) {
    unk_func_00132470_1 *obj;
    unk_func_00132470_2 *best1;
    unk_func_00132470_2 *node;
    s8 prio1;
    s8 prio2;
    unk_func_00132470_2 *best2;
    unk_func_00132470_2 *last;
    f32 dist1;
    f32 dist2;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 d;

    last = NULL;
    best2 = NULL;
    prio2 = 0;
    prio1 = 0;
    best1 = NULL;
    dist1 = 3.4028220466166163e+38f;
    dist2 = dist1;
    for (node = arg0->unk_08; node != NULL; node = node->unk_14) {
        obj = node->unk_04;
        last = node;
        if (unk_inline_0(arg1, obj)) {
            dx = obj->unk_48.unk_00 + obj->unk_54.unk_00;
            dy = obj->unk_48.unk_04 + obj->unk_54.unk_04;
            dz = obj->unk_48.unk_08 + obj->unk_54.unk_08;
            dx /= 2.0f;
            dy /= 2.0f;
            dz /= 2.0f;
            dx -= arg1->unk_00;
            dy -= arg1->unk_04;
            dz -= arg1->unk_08;
            d = func_001E60E0(dx * dx + dy * dy + dz * dz);
            if (obj->unk_64 == 0) {
                if (prio1 < obj->unk_67) {
                    dist1 = d;
                    best1 = node;
                    prio1 = obj->unk_67;
                } else if (obj->unk_67 == prio1 && d < dist1) {
                    dist1 = d;
                    best1 = node;
                }
            } else {
                if (prio2 < obj->unk_67) {
                    dist2 = d;
                    best2 = node;
                    prio2 = obj->unk_67;
                } else if (obj->unk_67 == prio2 && d < dist2) {
                    dist2 = d;
                    best2 = node;
                }
            }
        }
    }
    if (best1 == NULL) {
        best1 = best2;
    }
    if (best1 == NULL) {
        best1 = last;
    }
    return best1;
}
