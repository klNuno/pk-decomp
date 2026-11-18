#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[8];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 unk_20;
} unk_func_00309A00_0;

void func_002D2BA0(void *, void *, u32);
u32 func_003079F0(s32, s32, void *, u32);
void func_0030E190(unk_func_00309A00_0 *, void *, u32, s32);
extern u8 D_0035F7AC;
extern u8 D_003607E8;
extern s32 D_003607EC;
extern unk_func_00309A00_0 D_007C81D0[];
extern unk_func_00309A00_0 D_007C9200[];
extern u8 *D_007C9250[];

u32 func_00309A00(unk_func_00309A00_0 *arg0, void *arg1, u32 arg2, u32 arg3) {
    u32 sp5C;
    u32 temp_s0;

    temp_s0 = arg2 * arg3;
    if (D_003607E8 != 0 && D_0035F7AC != 0 && arg0->unk_1C == 0) {
        D_003607E8 = 0;
        func_00309A00(D_007C9200, &sp5C, 4, 1);
        if (sp5C != 0) {
            func_00309A00(D_007C9200, arg1, sp5C, 1);
        }
        D_003607E8 = 1;
    } else if (temp_s0 == 0 || arg0->unk_08 == -1) {
        sp5C = 0;
    } else if (arg0->unk_20 != 0 && D_003607EC != 0) {
        func_002D2BA0(arg1, D_007C9250[arg0->unk_08] + arg0->unk_14, temp_s0);
        sp5C = temp_s0;
    } else {
        sp5C = func_003079F0(arg0->unk_08, arg0->unk_14, arg1, temp_s0);
    }
    arg0->unk_14 = arg0->unk_14 + sp5C;
    if (sp5C < temp_s0) {
        arg0->unk_18 = arg0->unk_14;
    }
    if (D_003607E8 != 0 && D_0035F7AC == 0 && arg0->unk_1C == 0) {
        func_0030E190(D_007C81D0, &sp5C, 4, 1);
        if (sp5C != 0) {
            func_0030E190(D_007C81D0, arg1, sp5C, 1);
        }
    }
    return arg2 != 0 ? sp5C / arg2 : 0;
}
