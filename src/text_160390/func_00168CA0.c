#include "common.h"

typedef struct unk_func_00168CA0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00168CA0_0;

typedef struct unk_func_00168CA0_1 {
    u8 pad_00[0x1DC];
    s32 unk_1DC;
} unk_func_00168CA0_1;

extern unk_func_00168CA0_1 *D_0035FB04;
extern f32 D_0035FB50;
extern f32 D_0035FB54;
extern f32 D_0035F474;
extern f32 D_0035F478;
extern f32 D_0035F47C;
extern f32 D_0036A1E0[];
extern f32 D_0036A220[];
extern f32 D_0036A250[];

void func_00168CA0(unk_func_00168CA0_0 *arg0, unk_func_00168CA0_0 *arg1) {
    f32 time;
    f32 t;
    f32 *pt;

    if (D_0035FB04->unk_1DC != 0) {
        time = D_0035FB50;
    } else {
        time = D_0035FB54;
    }
    *(pt = &t) = time + (D_0036A220[0] + (arg0->unk_04 * D_0035F478 + arg0->unk_08 * D_0035F47C));
    arg1->unk_00 = arg0->unk_00 + D_0036A1E0[0] * D_0036A250[*(s32 *)&t & 0x3F];
    *pt = time + (D_0036A220[1] + (arg0->unk_00 * D_0035F474 + arg0->unk_08 * D_0035F47C));
    arg1->unk_04 = arg0->unk_04 + D_0036A1E0[1] * D_0036A250[*(s32 *)&t & 0x3F];
    *pt = time + (D_0036A220[2] + (arg0->unk_04 * D_0035F478 + arg0->unk_00 * D_0035F474));
    arg1->unk_08 = arg0->unk_08 + D_0036A1E0[2] * D_0036A250[*(s32 *)&t & 0x3F];
}
