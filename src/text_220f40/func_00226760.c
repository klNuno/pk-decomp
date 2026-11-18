/* profile: o0 */
#include "common.h"

void func_001EB640(s32);
s32 func_001EDC50(void *, s32);
extern s32 D_003601A4;

void func_00226760(void *arg0, s32 arg1, u8 arg2) {
    if (*(s32 *)((u8 *)arg0 + 8) != arg1 && func_001EDC50(arg0, arg1) != 0 && !arg2) {
        D_003601A4 = 0;
        func_001EB640(8);
    }
}
