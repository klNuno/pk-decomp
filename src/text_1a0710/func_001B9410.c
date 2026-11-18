/* profile: o0 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    s32 unk_04;
    u8 pad_08[8];
    s32 unk_10;
    u8 pad_14[8];
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
} unk_func_001B9410_0;

void func_00133270();
void func_001657D0();

void func_001B9410(unk_func_001B9410_0 *arg0) {
    func_001657D0(arg0->unk_2C, 0x32);
    func_00133270(&arg0->unk_04, 0x32);
    func_00133270(&arg0->unk_10, 0x32);
    func_00133270(&arg0->unk_03, 0x32);
    func_00133270(&arg0->unk_20, 0x32);
    func_00133270(&arg0->unk_24, 0x32);
    func_00133270(&arg0->unk_00, 0x32);
    func_00133270(&arg0->unk_01, 0x32);
    func_00133270(&arg0->unk_02, 0x32);
    func_00133270(&arg0->unk_1C, 0x32);
    func_00133270(&arg0->unk_28, 0x32);
}
