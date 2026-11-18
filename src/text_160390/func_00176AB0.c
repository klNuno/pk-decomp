#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[8];
    s32 unk_2C;
} unk_func_00176AB0_1;

typedef struct {
    u8 pad_00[0xC];
    s16 *unk_0C;
    unk_func_00176AB0_1 **unk_10;
    u8 pad_14[0xE];
    s16 unk_22;
} unk_func_00176AB0_0;

void func_0016CF70(s32);

s32 func_00176AB0(unk_func_00176AB0_0 *arg0) {
    u32 i;
    unk_func_00176AB0_1 *p;

    if (arg0 != NULL) {
        for (i = 0; i < arg0->unk_22; i++) {
            if (arg0->unk_0C[i] == 1) {
                p = arg0->unk_10[i];
                if (p != NULL) {
                    func_0016CF70(p->unk_2C);
                    p->unk_2C = 0;
                    p->unk_20 = 0;
                }
            }
        }
    }
    return 1;
}
