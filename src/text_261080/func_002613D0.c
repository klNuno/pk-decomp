#include "common.h"

typedef struct unk_func_002613D0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002613D0_0;

s32 rand(void);
u8 *func_00266E40(s32, unk_func_002613D0_0 *, unk_func_002613D0_0 *, s32, f32, f32, f32);
extern f32 D_003602A8;
extern f32 D_003602B0;
extern f32 D_00633308[];
extern f32 D_0063330C[];

void func_002613D0(unk_func_002613D0_0 *arg0, unk_func_002613D0_0 *arg1, s32 arg2, f32 arg3) {
    unk_func_002613D0_0 pos;
    unk_func_002613D0_0 vel;
    f32 off;
    f32 speed;
    f32 lo;
    f32 f;
    u8 *temp;
    s32 i;

    for (i = 8; i != 0; i--) {
        D_003602B0 = 0.2f + 2.8f * (f32)rand() / 2147483648.0f;
        off = -0.5f + 1.3f * (f32)rand() / 2147483648.0f;
        speed = arg3 * (0.5f + 1.7f * (f32)rand() / 2147483648.0f);
        lo = D_00633308[0];
        f = lo + (D_0063330C[0] - lo) * (f32)rand() / 2147483648.0f;
        vel.unk_00 = speed * arg1->unk_00;
        pos.unk_00 = arg0->unk_00 + off * arg1->unk_00;
        vel.unk_04 = speed * arg1->unk_04;
        pos.unk_04 = arg0->unk_04 + off * arg1->unk_04;
        vel.unk_08 = speed * arg1->unk_08;
        pos.unk_08 = arg0->unk_08 + off * arg1->unk_08;
        temp = func_00266E40(0x3009, &pos, &vel, arg2, speed, f, f);
        if (temp != NULL) {
            *(f32 *)(temp + 0x74) = D_003602A8;
        }
    }
}
