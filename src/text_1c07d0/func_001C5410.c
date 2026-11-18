/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C5410_1 {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x4];
    u16 unk_0C;
    u8 pad_0E[0x6];
} unk_func_001C5410_1;

typedef struct unk_func_001C5410_0 {
    unk_func_001C5410_1 *unk_00;
} unk_func_001C5410_0;

void func_001769B0(s32, s32);
u16 func_001AB730(unk_func_001C5410_0 *);
extern s32 D_0035FC5C;

void func_001C5410(unk_func_001C5410_0 *arg0) {
    u32 i;
    s32 obj;
    u32 n;

    n = func_001AB730(arg0);
    for (i = 0; i < n; i++) {
        if (arg0->unk_00 != NULL && (obj = arg0->unk_00[i].unk_04) != 0 && arg0->unk_00[i].unk_0C == 0) {
            D_0035FC5C = 1;
            func_001769B0(obj, 1);
            D_0035FC5C = 0;
        }
    }
}
