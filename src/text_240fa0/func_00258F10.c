#include "common.h"

typedef struct unk_func_00258F10_0 {
    u8 pad_00[0x14];
    u32 unk_14;
    u8 pad_18[0x4];
    u32 unk_1C;
} unk_func_00258F10_0;

f32 func_00114EA0(f32);
void func_00167A70(f32);
void func_0016D1A0(void *, s32, f32, f32, f32, f32);
extern f32 D_0036024C;
extern u8 D_005ACAD0[];
extern f32 D_006332A0[];
extern s32 D_006332B0[];

void func_00258F10(unk_func_00258F10_0 *arg0) {
    f32 dx;
    f32 dy;
    f32 x;
    f32 y;
    s32 i;
    s32 j;
    s32 k;

    if (D_005ACAD0[0] != 0) {
        return;
    }
    {
        dx = func_00114EA0(arg0->unk_1C * (0.01f * ((D_006332A0[2] - D_006332A0[0]) / 6.0f)));
        dy = func_00114EA0(arg0->unk_14 * (0.01f * ((D_006332A0[3] - D_006332A0[1]) / 3.0f)));
        func_00167A70(D_0036024C);
        x = func_00114EA0(0.01f * D_006332A0[0] * arg0->unk_1C);
        i = 0;
        k = 0;
        do {
            y = func_00114EA0(0.01f * D_006332A0[1] * arg0->unk_14);
            for (j = 0; j < 3; j++) {
                func_0016D1A0(arg0, D_006332B0[j + k], x + dx, x, y, y + dy);
                y += dy;
            }
            x += dx;
            i++;
            k += 3;
        } while (i < 6);
    }
}
