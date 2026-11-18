/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001AE890_0 {
    s32 unk_00;
    u8 pad_04[0x10];
} unk_func_001AE890_0;

void memset();
extern s32 D_005AD4C0[];
extern s32 D_005AD540[];
extern unk_func_001AE890_0 D_005AD5C0[];

void func_001AE890(s32 arg0) {
    u8 i;

    for (i = 0; i < 30; i++) {
        if (arg0 == D_005AD540[i]) {
            D_005AD4C0[i] = 1;
            D_005AD540[i] = 0;
            memset(&D_005AD5C0[i], 0, sizeof(unk_func_001AE890_0));
            D_005AD5C0[i].unk_00 = 1;
            return;
        }
    }
}
