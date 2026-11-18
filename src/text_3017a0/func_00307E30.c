/* profile: opt_300 */
#include "common.h"

void func_0031A5A0(s32);
void func_0031CBC8(s32);
s32 func_0031D238(void *, s32, s32);
s32 func_00321EB0(s32, s32, s32);
extern u8 D_00341FF0[];
extern s32 D_00342014[];
extern void *D_003607B0;
extern void *D_003607B4;
extern u8 D_007BF840[];
extern u8 D_007BF880[];

s32 func_00307E30(s32 arg0) {
    s32 i;

    func_0031CBC8(0);
    if (func_00321EB0(arg0, 0, 0) < 0) {
        return 0;
    }
    do {
        if (func_0031D238(D_00341FF0, 0x205, 0) < 0) {
            while (1) {
            }
        }
        i = 10000;
        while (i--) {
        }
    } while (D_00342014[0] == 0);
    D_003607B0 = (void *)((u32)D_007BF840 + 0x20000000);
    D_003607B4 = (void *)((u32)D_007BF880 + 0x20000000);
    func_0031A5A0(0);
    return 1;
}
