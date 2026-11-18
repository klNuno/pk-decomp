/* profile: o0 */
#include "common.h"

typedef struct unk_func_001B9300_0 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    s32 unk_04;
    u8 pad_08[0x8];
    s32 unk_10;
    u8 pad_14[0x8];
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
} unk_func_001B9300_0;

void func_00165890(s32, s32);
void func_00133290(s32 *, s32);
void func_001332B0(s32 *, s32);
void func_00133310(u8 *, s32);

void func_001B9300(unk_func_001B9300_0 *arg0) {
    func_00165890(arg0->unk_2C, 0x32);
    func_00133290(&arg0->unk_04, 0x32);
    func_00133290(&arg0->unk_10, 0x32);
    func_00133310(&arg0->unk_03, 0x32);
    func_001332B0(&arg0->unk_20, 0x32);
    func_001332B0(&arg0->unk_24, 0x32);
    func_00133310(&arg0->unk_00, 0x32);
    func_00133310(&arg0->unk_01, 0x32);
    func_00133310(&arg0->unk_02, 0x32);
    func_001332B0(&arg0->unk_1C, 0x32);
    func_001332B0(&arg0->unk_28, 0x32);
}
