/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C5310_0 {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x4];
    u16 unk_0C;
    u8 pad_0E[0x6];
} unk_func_001C5310_0;

typedef struct unk_func_001C5310_1 {
    unk_func_001C5310_0 *unk_00;
} unk_func_001C5310_1;

unk_func_001C5310_1 *func_001A7060();
u16 func_001AB730(unk_func_001C5310_1 *);
void func_001769B0(s32, s32);
extern s32 D_0035FC5C;

void func_001C5310(s32 *arg0) {
    unk_func_001C5310_1 *p;
    u32 i;
    s32 temp;
    u32 n;

    p = func_001A7060(*arg0);
    n = func_001AB730(p);
    for (i = 0; i < n; i++) {
        if (p->unk_00 != NULL) {
            temp = p->unk_00[i].unk_04;
            if (temp != 0 && p->unk_00[i].unk_0C == 0) {
                D_0035FC5C = 1;
                func_001769B0(temp, 0);
                D_0035FC5C = 0;
            }
        }
    }
}
