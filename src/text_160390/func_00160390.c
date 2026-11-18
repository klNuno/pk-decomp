#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
    u8 unk_10;
    u8 pad_11[0x13];
} unk_func_00160390_0;

typedef struct {
    unk_func_00160390_0 unk_00[3];
    u8 pad_6C[0x33C - 0x6C];
} unk_func_00160390_1;

typedef struct {
    u8 pad_00[2];
    s16 unk_02;
} unk_func_00160390_2;

s8 func_00160700(s32, unk_func_00160390_2 *, f32, f32, f32, f32, f32, f32);
extern s32 D_0035F9F0[2];
extern unk_func_00160390_1 D_00369280[];

static inline void func_00160390_set(s32 arg0, unk_func_00160390_2 *arg1, s8 arg2) {
    unk_func_00160390_0 *q;
    s16 i;

    if (arg1 != NULL && D_0035F9F0[arg1->unk_02] != 0) {
        i = arg1->unk_02;
        if (arg2 != -1 && arg2 < 3) {
            if (arg2 != -1 && arg2 < 3) {
                q = &D_00369280[i].unk_00[arg2];
                q->unk_04 = arg0;
            }
        }
    }
}

s8 func_00160390(s32 arg0, unk_func_00160390_2 *arg1, s8 arg2, f32 arg3, f32 arg4) {
    unk_func_00160390_0 *p;
    f32 v;
    s8 ret;

    if (arg1 == NULL || D_0035F9F0[arg1->unk_02] == 0) {
        return -1;
    }
    if (arg2 == -1 || arg2 >= 3) {
        return -1;
    }
    p = &D_00369280[arg1->unk_02].unk_00[arg2];
    v = (f32)(u32)p->unk_10 / 255.0f;
    ret = func_00160700(arg0, arg1, v, 0.0f, v, 0.0f, arg3, arg4);
    func_00160390_set(arg0, arg1, arg2);
    return ret;
}
