/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x60];
    s32 unk_60;
    u8 pad_64[0x11];
    u8 unk_75;
} unk_func_00203860_1;

typedef struct {
    u8 pad_00[0x8];
    unk_func_00203860_1 *unk_08;
} unk_func_00203860_0;

void func_001B4E30();
void func_001B4E80();
void func_001F6260();

void func_00203860(unk_func_00203860_0 *arg0) {
    arg0->unk_08->unk_60 = 0;
    func_001B4E30(arg0->unk_08);
    func_001B4E80(arg0->unk_08);
    arg0->unk_08->unk_75 |= 4;
    arg0->unk_08->unk_75 &= ~8;
    func_001F6260(arg0);
}
