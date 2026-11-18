#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0xC];
    s32 unk_18;
    s32 unk_1C;
    u8 unk_20;
} unk_func_00309650_0;

void func_00307A60(s32);
extern u8 D_003607E8;
extern u8 D_0035F7AC;
extern s32 D_003607EC;
extern s32 D_007C9240[];

void func_00309650(unk_func_00309650_0 *arg0) {
    if (D_003607E8 == 0 || D_0035F7AC == 0 || arg0->unk_1C != 0) {
        if (arg0->unk_20 != 0 && D_003607EC != 0) {
            D_007C9240[arg0->unk_08]--;
            arg0->unk_08 = -1;
            arg0->unk_18 = 0;
            arg0->unk_20 = 0;
        } else if (arg0->unk_08 != -1) {
            func_00307A60(arg0->unk_08);
            arg0->unk_08 = -1;
            arg0->unk_18 = 0;
        }
    }
}
