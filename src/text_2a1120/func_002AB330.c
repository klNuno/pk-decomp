#include "common.h"

typedef struct {
    u16 unk_00 : 9;
    u16 pad_00 : 7;
    u8 unk_02;
    u8 unk_03 : 6;
    u8 pad_03 : 2;
    u8 pad_04[0x8];
} unk_func_002AB330_0;

typedef struct {
    u8 unk_00;
    u8 pad_01_0 : 2;
    u8 unk_01 : 1;
    u8 pad_01_3 : 5;
    u8 pad_02[0xA];
} unk_func_002AB330_1;

void func_002AB4A0(s32, s64 *, s64 *);
void func_002BFD60();
extern unk_func_002AB330_0 D_007B0970;
extern unk_func_002AB330_1 D_007B09D4;

void func_002AB330(s32 arg0) {
    s64 sp10;
    s64 sp18;

    func_002AB4A0(arg0, &sp10, &sp18);
    D_007B0970.unk_00 = sp10;
    D_007B09D4.unk_01 = 1;
    D_007B0970.unk_03 = sp18;
    D_007B09D4.unk_01 = 1;
    func_002BFD60();
}
