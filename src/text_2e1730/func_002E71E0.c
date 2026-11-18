#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x14];
    u8 unk_18;
    u8 pad_19[3];
    u8 unk_1C[0xF0];
    u8 unk_10C[0xC];
    s32 unk_118;
} unk_func_002E71E0_0;

void func_002F21B0(unk_func_002E71E0_0 *);
void func_002E5730(void *);
void func_002E7710(void *);
extern u8 D_0035E610[];

unk_func_002E71E0_0 *func_002E71E0(unk_func_002E71E0_0 *volatile arg0) {
    func_002F21B0(arg0);
    arg0->unk_00 = D_0035E610;
    arg0->unk_18 = 0;
    func_002E5730(arg0->unk_1C);
    func_002E7710(arg0->unk_10C);
    arg0->unk_118 = 0;
    return arg0;
}
