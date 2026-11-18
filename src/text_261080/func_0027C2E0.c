/* profile: o0 */
#include "common.h"

void func_0011CBB0();
s32 func_0027BE90();
extern char D_0034F3D0[];
extern u8 D_007AEB81[];
extern u8 D_007AEB82[];
extern u8 D_007AEB83[];
extern u8 D_007AEB84[];
extern u8 D_007AEB85[];
extern u16 D_007AEB86[];

typedef struct unk_func_0027C2E0_0 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
    u8 pad_08[0x38];
} unk_func_0027C2E0_0;

s32 func_0027C2E0(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_0027C2E0_0 sp10;
    char buf[0x100];

    func_0011CBB0(buf, D_0034F3D0, arg2, arg2);
    if (D_007AEB81[0] == 0 && D_007AEB82[0] == 0 && D_007AEB83[0] == 0 && D_007AEB84[0] == 0 &&
        D_007AEB85[0] == 0 && D_007AEB86[0] == 0) {
        return 1;
    }
    if (func_0027BE90(arg0, arg1, buf, &sp10) == 1) {
        if (D_007AEB81[0] == sp10.unk_01 && D_007AEB82[0] == sp10.unk_02 && D_007AEB83[0] == sp10.unk_03 &&
            D_007AEB84[0] == sp10.unk_04 && D_007AEB85[0] == sp10.unk_05 && D_007AEB86[0] == sp10.unk_06) {
            return 1;
        }
        return 0;
    }
    return 0;
}
