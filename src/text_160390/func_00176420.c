#include "common.h"

typedef struct unk_func_00176420_0 {
    u8 pad_00[0xC];
    s32 *unk_0C;
    s32 unk_10;
} unk_func_00176420_0;

typedef struct unk_func_00176420_1 {
    u8 pad_00[0x1CC];
    s32 unk_1CC;
} unk_func_00176420_1;

u16 func_00165650(s32);
void func_00165750(s32, void *);
f32 func_001655B0(s32);
f32 func_001655C0(s32);
f32 func_001655D0(s32);
f32 func_001655E0(s32);
f32 func_001655F0(s32);
void func_00164C30(void *, f32, f32, f32, f32, f32);
extern unk_func_00176420_1 *D_0035FB04;

void func_00176420(unk_func_00176420_0 *arg0) {
    u8 sp60[16];
    f32 d;
    f32 c;
    f32 b;
    f32 a;
    s16 i;
    s32 *p;
    s32 e;

    if (arg0 == 0) {
        return;
    }
    p = arg0->unk_0C;
    for (i = 0; i < arg0->unk_10; i++) {
        e = *p;
        if (func_00165650(e) == 6) {
            func_00165750(e, sp60);
            D_0035FB04->unk_1CC = 1;
            a = func_001655C0(e);
            b = func_001655F0(e);
            c = func_001655B0(e);
            d = func_001655E0(e);
            func_00164C30(sp60, a, b, c, d, func_001655D0(e));
            D_0035FB04->unk_1CC = 1;
            return;
        }
        p++;
    }
    D_0035FB04->unk_1CC = 0;
}
