#include "common.h"

typedef struct {
    u32 unk_00, unk_04, unk_08;
} unk_003185F0_0;

typedef struct {
    u32 unk_00;
    unk_003185F0_0 *unk_04;
    void *unk_08;
} unk_003185F0_1;

typedef struct {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[8];
    unk_003185F0_1 unk_10, unk_1C, unk_28, unk_34;
    u8 unk_40[0x28];
    unk_003185F0_1 unk_68, unk_74, unk_80, unk_8C, unk_98;
    u8 unk_A4[8];
    void *unk_AC;
} unk_003185F0_2;

extern u8 D_0035F260[];
unk_003185F0_1 *func_00316850(unk_003185F0_1 *, s32);
void func_00316940(unk_003185F0_1 *);
void func_00318350(void *);
void func_00318B20(void *);

unk_003185F0_2 *func_003185F0(unk_003185F0_2 *volatile arg0, u32 arg1) {
    u32 i;

    arg0->unk_AC = D_0035F260;
    func_00316850(&arg0->unk_10, arg1);
    func_00316850(&arg0->unk_1C, arg1);
    func_00316850(&arg0->unk_28, arg1);
    func_00316850(&arg0->unk_34, arg1);
    func_00318350(arg0->unk_40);
    func_00316850(&arg0->unk_68, arg1);
    func_00316850(&arg0->unk_74, arg1);
    func_00316850(&arg0->unk_80, arg1);
    func_00316850(&arg0->unk_8C, arg1);
    func_00316850(&arg0->unk_98, arg1);
    func_00318B20(arg0->unk_A4);

    for (i = 0; i < arg1; ++i) {
        arg0->unk_8C.unk_04[i].unk_00 = 0x3F800000;
        arg0->unk_8C.unk_04[i].unk_04 = 0x3F800000;
        arg0->unk_8C.unk_04[i].unk_08 = 0x3F800000;
        arg0->unk_98.unk_04[i].unk_00 = 0x3F800000;
        arg0->unk_98.unk_04[i].unk_04 = 0x3F800000;
        arg0->unk_98.unk_04[i].unk_08 = 0x3F800000;
    }

    arg0->unk_04 = arg1;
    func_00316940(&arg0->unk_28);
    func_00316940(&arg0->unk_34);
    return arg0;
}
