/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0027A0D0_0 {
    u8 pad_00[0x1C];
    u32 unk_1C;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2C;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    u32 unk_3C;
    s32 unk_40;
    s32 unk_44;
} unk_func_0027A0D0_0;

void func_0031A340(s32);
void func_0031A360(s32);
void func_003224C0(void);
void func_00322508(void);

s32 func_0027A0D0(unk_func_0027A0D0_0 *arg0) {
    func_0031A360(arg0->unk_40);
    arg0->unk_44 = 0;
    func_003224C0();
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 | 0x10000;
    *(volatile u32 *)0x1000B400 = 5;
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 & ~0x10000;
    func_00322508();
    arg0->unk_1C = *(volatile u32 *)0x1000B410;
    arg0->unk_20 = *(volatile u32 *)0x1000B430;
    arg0->unk_24 = *(volatile u32 *)0x1000B420;
    arg0->unk_28 = *(volatile u32 *)0x1000B400;
    while (*(volatile u32 *)0x10002010 & 0xF0) {
    }
    func_003224C0();
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 | 0x10000;
    *(volatile u32 *)0x1000B000 = 0;
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 & ~0x10000;
    func_00322508();
    arg0->unk_2C = *(volatile u32 *)0x1000B010;
    arg0->unk_30 = *(volatile u32 *)0x1000B020;
    arg0->unk_34 = *(volatile u32 *)0x1000B000;
    arg0->unk_38 = *(volatile u32 *)0x10002020;
    arg0->unk_3C = *(volatile u32 *)0x10002010;
    func_0031A340(arg0->unk_40);
    return 1;
}
