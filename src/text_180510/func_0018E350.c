#include "common.h"

typedef struct unk_func_0018E350_0 {
    s32 unk_00;
    u32 unk_04;
    s32 unk_08;
} unk_func_0018E350_0;

void func_00119548(s32);
void func_00285CD0(s32, s32);
extern u32 D_0035FA10;
extern unk_func_0018E350_0 D_005070F0[];

void func_0018E350(void) {
    u32 i;

    for (i = 0; i < 500; i++) {
        if (D_005070F0[i].unk_00 != 0 && D_005070F0[i].unk_04 + 5 <= D_0035FA10) {
            func_00119548(D_005070F0[i].unk_00);
            D_005070F0[i].unk_00 = 0;
        }
        if (D_005070F0[i].unk_08 != 0 && D_005070F0[i].unk_04 + 5 <= D_0035FA10) {
            func_00285CD0(D_005070F0[i].unk_08, 1);
            D_005070F0[i].unk_08 = 0;
        }
    }
}
