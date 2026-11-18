/* profile: opt_300 */
#include "common.h"

void func_0031A5A0(s32);
s32 func_0031D238(void *, s32, s32);
s32 func_00321EB0(s32, s32, s32);
extern u8 D_00342050[];
extern s32 D_00342074[];
extern u8 *D_00360854;
extern u8 *D_00360858;
extern u8 D_007D80C0[];
extern u8 D_007D8100[];

s32 func_0030C530(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;

    if (func_00321EB0(arg0, arg2, arg1) < 0) {
        return 0;
    }
    do {
        if (func_0031D238(D_00342050, 0x203, 0) < 0) {
            while (1) {
            }
        }
        i = 10000;
        while (i-- != 0) {
        }
    } while (D_00342074[0] == 0);
    D_00360854 = (u8 *)((u32)D_007D80C0 + 0x20000000);
    D_00360858 = (u8 *)((u32)D_007D8100 + 0x20000000);
    func_0031A5A0(0);
    return 1;
}
