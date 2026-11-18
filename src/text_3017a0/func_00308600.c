#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    s32 unk_0C;
    void *unk_10;
    s32 unk_14;
    u8 pad_18[8];
    volatile s32 unk_20;
} unk_func_00308600_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0xC];
} unk_func_00308600_1;

s32 func_00308CA0();
void func_00308550();
void func_003086D0();
void func_0031A000();
s32 func_0031A120();
void func_0031A140();
s32 func_0031A320();
void func_0031ADB0();
extern s64 D_003607D0;
extern s32 D_003607D8;
extern s32 D_003607DC;
extern s32 D_00367370;
extern u8 D_007C39C0[];

s32 func_00308600(void) {
    unk_func_00308600_0 sp10;
    unk_func_00308600_1 sp40;

    D_003607D8 = func_00308CA0();
    sp40.unk_08 = 0;
    sp40.unk_04 = 1;
    D_003607DC = func_0031A320(&sp40);
    sp10.unk_04 = func_00308550;
    sp10.unk_08 = D_007C39C0;
    sp10.unk_0C = 0x4000;
    sp10.unk_14 = 10;
    sp10.unk_10 = &D_00367370;
    sp10.unk_20 = func_0031A120(&sp10);
    func_0031A140(sp10.unk_20, 0);
    D_003607D0 = 0;
    func_0031A000(9, func_003086D0, 0);
    *(volatile s32 *)0x10000000 = 0;
    *(volatile s32 *)0x10000020 = 60000;
    *(volatile s32 *)0x10000010 |= 0x1C0;
    func_0031ADB0(9);
    return 1;
}
