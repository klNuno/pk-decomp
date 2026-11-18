/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_003081F0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_003081F0_0;

s32 func_0031A320(unk_func_003081F0_0 *);
void func_0031A340(s32);
void func_0031A5A0(s32);
void func_0031CBC8(s32);
s32 func_0031D238(char *, s32, s32);
s32 func_00321EB0(s32, s32, s32);
extern char D_00342020[];
extern s32 D_00342044[];
extern u8 *D_003607C0;
extern u8 *D_003607C4;
extern s32 D_003607C8;
extern u8 D_007BF8C0[];
extern u8 D_007BF900[];
extern unk_func_003081F0_0 D_007BF940;

s32 func_003081F0(s32 arg0) {
    s32 i;

    func_0031CBC8(0);
    if (func_00321EB0(arg0, 0, 0) < 0) {
        return 0;
    }
    do {
        if (func_0031D238(D_00342020, 0x207, 0) < 0) {
            while (1) {
            }
        }
        i = 10000;
        while (i--) {
        }
    } while (D_00342044[0] == 0);
    D_007BF940.unk_08 = 0;
    D_007BF940.unk_04 = 1;
    D_003607C8 = func_0031A320(&D_007BF940);
    func_0031A340(D_003607C8);
    D_003607C0 = (u8 *)((u32)D_007BF8C0 + 0x20000000);
    D_003607C4 = (u8 *)((u32)D_007BF900 + 0x20000000);
    func_0031A5A0(0);
    return 1;
}
