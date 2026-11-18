#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A85B0_0;

void func_0029D9A0(s32, s32, void *);
extern u8 D_007B2370[];
extern u8 D_007B8488[];
extern unk_func_002A85B0_0 D_007B8490[];

void func_002A85B0(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    D_007B8490[arg0].unk_00 = arg1;
    D_007B8490[arg0].unk_04 = arg2;
    D_007B8490[arg0].unk_08 = arg3;
    D_007B8490[arg0].unk_0C = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, D_007B2370 + arg0 * 16 + 0x6120);
    }
}
