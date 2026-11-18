#include "common.h"

typedef struct unk_func_002A7610_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A7610_0;

void func_0029D9A0(s32, s32, void *);
extern u8 D_007B2370[];
extern u8 D_007B8488[];
extern unk_func_002A7610_0 D_007B8490[];

void func_002A7610(s32 arg0, f32 *arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = arg1[2];
    temp_f1 = arg1[1];
    temp_f0 = arg1[0];

    D_007B8490[arg0].unk_00 = temp_f0;
    D_007B8490[arg0].unk_04 = temp_f1;
    D_007B8490[arg0].unk_08 = temp_f2;
    D_007B8490[arg0].unk_0C = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, D_007B2370 + arg0 * 16 + 0x6120);
    }
}
