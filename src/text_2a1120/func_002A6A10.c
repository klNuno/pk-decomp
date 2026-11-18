/* profile: opt_nodf */
#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0C;
} unk_func_002A6A10_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A6A10_1;

void func_0029D9A0(s32, s32, u8 *, unk_func_002A6A10_1 *);
extern unk_func_002A6A10_1 D_007B8490[];
extern u8 D_007B8488[];
extern u8 D_007B2370[];

void func_002A6A10(s32 arg0, unk_func_002A6A10_0 *arg1) {
    f32 x;
    f32 y;
    f32 z;
    f32 w;

    w = (f32)arg1->unk_0C / 4294967296.0f;
    z = (f32)arg1->unk_08 / 4294967296.0f;
    y = (f32)arg1->unk_04 / 4294967296.0f;
    x = (f32)arg1->unk_00 / 4294967296.0f;
    D_007B8490[arg0].unk_00 = x;
    D_007B8490[arg0].unk_04 = y;
    D_007B8490[arg0].unk_08 = z;
    D_007B8490[arg0].unk_0C = w;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, D_007B2370 + arg0 * 16 + 0x6120, &D_007B8490[arg0]);
    }
}
