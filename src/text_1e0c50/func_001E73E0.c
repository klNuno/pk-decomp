/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x64];
    u8 unk_64;
    u8 pad_65[0x3];
} unk_func_001E73E0_0;

typedef struct {
    unk_func_001E73E0_0 *unk_00;
    u8 pad_04[0x1];
    u8 unk_05;
    u8 unk_06;
} unk_func_001E73E0_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001E73E0_1 *unk_10;
} unk_func_001E73E0_2;

void func_001E7270(unk_func_001E73E0_2 *, u8, u8, s32, s32);

void func_001E73E0(unk_func_001E73E0_2 *arg0, u8 arg1, s32 arg2) {
    u8 idx = arg0->unk_10->unk_06;

    if (!arg0->unk_10->unk_00[idx].unk_64) {
        func_001E7270(arg0, idx, arg1, arg2, 1);
        arg0->unk_10->unk_05++;
    }
}
