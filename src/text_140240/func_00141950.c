#include "common.h"

typedef struct unk_func_00141950_0 {
    u8 pad_00[4];
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[0x58];
} unk_func_00141950_0;

extern unk_func_00141950_0 *D_0035F3C4;
extern f32 D_00367888[];
extern f32 D_0036788C[];
extern f32 D_00367890[];

s32 func_00141950(s32 *arg0, s32 *arg1) {
    unk_func_00141950_0 *a = &D_0035F3C4[*arg0];
    unk_func_00141950_0 *b = &D_0035F3C4[*arg1];
    f32 da = D_00367888[0] * a->unk_04 + D_0036788C[0] * a->unk_08 + D_00367890[0] * a->unk_0C;
    f32 db = D_00367888[0] * b->unk_04 + D_0036788C[0] * b->unk_08 + D_00367890[0] * b->unk_0C;
    da = (da > 0.0f) ? da : -da;
    db = (db > 0.0f) ? db : -db;
    if (da < db) {
        return -1;
    }
    if (da > db) {
        return 1;
    }
    return 0;
}
