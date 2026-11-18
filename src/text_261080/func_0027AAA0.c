/* profile: opt_300 */
#include "common.h"

void func_0027A6A0();
void func_002774C0();
void func_0027A9D0();
extern s32 D_007A81C0[];
extern volatile s32 D_007A81CC[];

void func_0027AAA0(u8 *arg0) {
    func_0027A6A0(arg0 + 0x48);
    func_002774C0(D_007A81C0);
    func_0027A9D0(arg0);
    do {
    } while (D_007A81CC[0] != 0);
    *(s32 *)(arg0 + 0xA8) = 3;
}
