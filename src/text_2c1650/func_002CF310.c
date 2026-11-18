/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002CF310_0 {
    u8 unk_00;
    u8 unk_01;
    s8 unk_02;
    s8 unk_03;
    u8 unk_04;
} unk_func_002CF310_0;

typedef struct unk_func_002CF310_1 {
    u8 unk_00;
    u8 unk_01;
    s8 unk_02;
    s8 unk_03;
} unk_func_002CF310_1;

s8 *func_0019B170();
s32 func_002FD1B0();
void func_002FD1A0(s32, unk_func_002CF310_1);
extern unk_func_002CF310_0 D_0035F680;

void func_002CF310(void) {
    unk_func_002CF310_0 sp18;
    s8 *temp;

    sp18 = D_0035F680;
    temp = func_0019B170();
    sp18.unk_03 = temp[0] + 0x20;
    sp18.unk_02 = temp[1];
    func_002FD1A0(func_002FD1B0(), *(unk_func_002CF310_1 *)&sp18);
}
