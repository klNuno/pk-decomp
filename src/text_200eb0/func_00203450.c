/* profile: o0 */
#include "common.h"

void func_00203320(void *, s32);

void func_00203450(void *arg0, s32 arg1) {
    s32 temp_s0;
    temp_s0 = *(s32 *)((u8 *)arg0 + 0xC);
    (*(s32 *)((u8 *)arg0 + 0xC)) = (s32) (*(s32 *)((u8 *)arg0 + 0x10));
    func_00203320(arg0, arg1);
    (*(s32 *)((u8 *)arg0 + 0xC)) = temp_s0;
}
