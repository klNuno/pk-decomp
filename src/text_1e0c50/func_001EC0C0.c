/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x7];
    u8 unk_07;
} unk_func_001EC0C0_0;

typedef struct {
    u8 pad_00[0x4];
    u8 unk_04;
} unk_func_001EC0C0_1;

typedef struct {
    u8 pad_00[0x4];
    unk_func_001EC0C0_0 **unk_04;
} unk_func_001EC0C0_2;

typedef struct {
    u8 pad_00[0x4];
    unk_func_001EC0C0_0 *unk_04;
    unk_func_001EC0C0_2 *unk_08;
    u8 pad_0C[0x4];
    unk_func_001EC0C0_1 *unk_10;
} unk_func_001EC0C0_3;

u8 func_001E6FA0(unk_func_001EC0C0_3 *, u8);
unk_func_001EC0C0_0 *func_001E7850(unk_func_001EC0C0_3 *, u8);
unk_func_001EC0C0_0 *func_001EBD30();
extern u8 D_00360128;
extern u8 D_0036013C;
extern unk_func_001EC0C0_3 *D_00360140;

u8 func_001EC0C0(s32 arg0, unk_func_001EC0C0_3 *arg1) {
    unk_func_001EC0C0_0 *p;
    u8 idx;
    u8 flags;
    s8 sp40[16];

    D_00360140 = arg1;
    D_00360128 = 1;
    p = arg1->unk_04;
    if (p == NULL) {
        return 0x10;
    }
    D_0036013C = 0;
    idx = func_001E6FA0(arg1, D_0036013C);
    if (idx < arg1->unk_10->unk_04) {
        p = func_001E7850(arg1, idx);
    }
    if (p->unk_07 == 8) {
        p = *arg1->unk_08->unk_04;
    }
    p = func_001EBD30(arg0, p, sp40);
    flags = sp40[0];
    (flags & 8) == 8;
    if ((flags & 8) != 8 && (flags & 2) != 2) {
        arg1->unk_04 = p;
    }
    return flags;
}
