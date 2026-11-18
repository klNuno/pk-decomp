/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BD910_0 {
    void *unk_00[17];
} unk_func_001BD910_0;

void *memset(void *, s32, u32);
void func_002CE380(unk_func_001BD910_0 *);
void func_001BC820();
void func_001BC8F0();
void func_001BC950();
void func_001BC9B0();
void func_001BCA10();
void func_001BCD20();
void func_001BCD80();
void func_001BCDE0();
void func_001BCE40();
void func_001BD000();
void func_001BD060();
void func_001BD0C0();
void func_001BD120();
void func_001BD2E0();
void func_001BD340();
void func_001BD3A0();
void func_001BD400();
extern s32 D_005AD930[];
extern s32 D_005AD934[];
extern s32 D_005AD938[];

void func_001BD910(void) {
    unk_func_001BD910_0 sp10;

    memset(&sp10, 0, 0x44);
    sp10.unk_00[0] = func_001BC8F0;
    sp10.unk_00[1] = func_001BC950;
    sp10.unk_00[2] = func_001BC9B0;
    sp10.unk_00[3] = func_001BCD20;
    sp10.unk_00[4] = func_001BCD80;
    sp10.unk_00[5] = func_001BCDE0;
    sp10.unk_00[6] = func_001BD000;
    sp10.unk_00[7] = func_001BD060;
    sp10.unk_00[8] = func_001BD0C0;
    sp10.unk_00[9] = func_001BD2E0;
    sp10.unk_00[10] = func_001BD340;
    sp10.unk_00[11] = func_001BD3A0;
    sp10.unk_00[12] = func_001BD400;
    sp10.unk_00[13] = func_001BC820;
    sp10.unk_00[14] = func_001BCA10;
    sp10.unk_00[15] = func_001BCE40;
    sp10.unk_00[16] = func_001BD120;
    func_002CE380(&sp10);
    D_005AD930[0] = 0;
    D_005AD934[0] = 0;
    D_005AD938[0] = 0;
}
