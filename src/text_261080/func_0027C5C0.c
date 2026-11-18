/* profile: o0 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
    u8 pad_08[0x38];
} unk_func_0027C5C0_0;

void func_0011CBB0(char *, char *, ...);
s32 func_0027BE90(s32, s32, char *, unk_func_0027C5C0_0 *);
extern char D_0034F3D0[];
extern s32 D_00360388;
extern u8 D_007AEB81[];
extern u8 D_007AEB82[];
extern u8 D_007AEB83[];
extern u8 D_007AEB84[];
extern u8 D_007AEB85[];
extern u16 D_007AEB86[];

s32 func_0027C5C0(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_0027C5C0_0 dir;
    char buf[0x100];

    func_0011CBB0(buf, D_0034F3D0, arg2, arg2);
    if (func_0027BE90(arg0, arg1, buf, &dir) == 1) {
        D_007AEB81[0] = dir.unk_01;
        D_007AEB82[0] = dir.unk_02;
        D_007AEB83[0] = dir.unk_03;
        D_007AEB84[0] = dir.unk_04;
        D_007AEB85[0] = dir.unk_05;
        D_007AEB86[0] = dir.unk_06;
        D_00360388 = 0;
        return 1;
    }
    D_00360388 = 0;
    return 0;
}
