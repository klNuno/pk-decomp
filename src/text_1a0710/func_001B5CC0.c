/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001B5CC0_0 {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 unk_10;
    u8 pad_11[0x3];
} unk_func_001B5CC0_0;

typedef struct unk_func_001B5CC0_1 {
    u8 pad_00[0x180];
    unk_func_001B5CC0_0 unk_180[10];
    s16 unk_248;
    u8 pad_24A[0x2];
    f32 unk_24C;
    f32 unk_250;
} unk_func_001B5CC0_1;

s32 func_0019B200(s32);
void func_0019A290(s32, s32);
void func_001AE100(s32, f32);
f32 func_001B5EF0(s32);
extern u32 D_005AB848[];

void func_001B5CC0(unk_func_001B5CC0_1 *arg0) {
    unk_func_001B5CC0_0 *p;
    unk_func_001B5CC0_0 *end;
    f32 t;
    f32 step;

    p = arg0->unk_180;
    end = p + arg0->unk_248;
    t = D_005AB848[0];
    step = t * arg0->unk_250;
    for (; p < end; p++) {
        if (p->unk_00 == 0) {
            continue;
        }
        if (p->unk_10) {
            p->unk_0C = (p->unk_0C - step > arg0->unk_24C) ? p->unk_0C - step : arg0->unk_24C;
        } else {
            p->unk_0C = (p->unk_0C + step < 255.0f) ? p->unk_0C + step : 255.0f;
            if (!(p->unk_0C < 255.0f)) {
                p->unk_00 = 0;
                if (p == end - 1) {
                    *(volatile s32 *)&arg0;
                }
                break;
            }
        }
        p->unk_04 = func_0019B200(p->unk_00);
        p->unk_08 = func_001B5EF0(p->unk_00);
        func_0019A290(p->unk_00, func_0019B200(p->unk_00) & ~8);
        func_001AE100(p->unk_00, p->unk_0C);
    }
}
