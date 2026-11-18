/* profile: o0 */
#include "common.h"

typedef struct unk_func_0027C240_0 {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x2C];
} unk_func_0027C240_0;

void func_0011CBB0();
s32 func_0027BE90();
extern char D_0034F3D0[];

s32 func_0027C240(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_0027C240_0 sp10;
    char sp50[0x100];

    func_0011CBB0(sp50, D_0034F3D0, arg2, arg2);
    if (func_0027BE90(arg0, arg1, sp50, &sp10) == 1) {
        return sp10.unk_10;
    }
    return 0;
}
