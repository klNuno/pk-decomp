/* profile: o0_p */
#include "common.h"

typedef struct {
    u32 unk_00 : 28;
    u32 unk_1C : 4;
} unk_func_001D6110_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_001D6110_1;

extern s32 D_00360118;
extern unk_func_001D6110_1 D_00603E60[];

void func_001D6110(unk_func_001D6110_0 arg0, s32 arg1, s32 arg2) {
    s32 temp;
    s32 i;

    temp = arg0.unk_00;
    for (i = 0; i < 8; i++) {
        if (D_00603E60[i].unk_04 != 0 && temp == D_00603E60[i].unk_00) {
            D_00603E60[i].unk_04 = 0;
            D_00603E60[i].unk_00 = -1;
            break;
        }
    }
    D_00360118--;
}
