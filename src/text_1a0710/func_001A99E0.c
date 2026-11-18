/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0xF4];
    s32 unk_F4[1];
} unk_func_001A99E0_0;

void func_001A95E0(u8, u8);
void func_001A9920();
extern unk_func_001A99E0_0 D_005AB790;
extern u8 D_005AB880[];
extern u8 D_005AB881[];
extern s32 D_005ABDC0[];

void func_001A99E0(void) {
    u8 i;

    for (i = 0; i < 4; i++) {
        D_005AB790.unk_F4[i] = 0;
    }
    if (D_005ABDC0[0] == 0) {
        func_001A95E0(D_005AB880[0], D_005AB881[0]);
    } else {
        func_001A95E0(2, 1);
    }
    func_001A9920();
}
