#include "common.h"

typedef struct unk_func_00145F20_0 {
    u8 pad_00[4];
    u32 unk_04;
    u8 unk_08[0x28];
    u8 unk_30[0x28];
    u8 unk_58[0x28];
    u8 unk_80[0x28];
    u8 unk_A8[0x28];
    u8 unk_D0[0x28];
} unk_func_00145F20_0;

typedef struct unk_func_00145F20_1 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00145F20_1;

unk_func_00145F20_0 *func_00138760();
void *memcpy(void *, const void *, u32);
extern u32 D_00367610[];
extern u8 D_00367614[];
extern u8 D_0036767C[];
extern u8 D_003676E4[];
extern u8 D_0036774C[];
extern u8 D_003677B4[];
extern u8 D_0036781C[];

void func_00145F20(unk_func_00145F20_1 *arg0) {
    unk_func_00145F20_0 *p;

    if (((arg0->unk_0C & 0x4000) ? 1 : 0) && D_00367610[0] != 0) {
        p = func_00138760(arg0);
        memcpy(p->unk_08, D_00367614, 0x28);
        if (D_00367610[0] & 0x10000) {
            p->unk_04 |= 0x10000;
            memcpy(p->unk_80, D_0036774C, 0x28);
        }
        if (D_00367610[0] & 0x40) {
            p->unk_04 |= 0x40;
            memcpy(p->unk_A8, D_003677B4, 0x28);
        }
        if (D_00367610[0] & 1) {
            p->unk_04 |= 1;
            memcpy(p->unk_30, D_0036767C, 0x28);
        }
        if (D_00367610[0] & 4) {
            p->unk_04 |= 4;
            memcpy(p->unk_58, D_003676E4, 0x28);
        }
        if (D_00367610[0] & 0x10) {
            p->unk_04 |= 0x10;
            memcpy(p->unk_D0, D_0036781C, 0x28);
        }
    }
}
