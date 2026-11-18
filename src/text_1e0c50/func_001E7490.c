/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001E7490_2 {
    u8 pad_00[0x64];
    u8 unk_64;
    u8 pad_65[3];
} unk_func_001E7490_2;

typedef struct unk_func_001E7490_1 {
    unk_func_001E7490_2 *unk_00;
    u8 pad_04;
    u8 unk_05;
    u8 unk_06;
} unk_func_001E7490_1;

typedef struct unk_func_001E7490_0 {
    u8 pad_00[0x10];
    unk_func_001E7490_1 *unk_10;
} unk_func_001E7490_0;

void func_001E7270(unk_func_001E7490_0 *, u8, s32, s32, s32);

void func_001E7490(unk_func_001E7490_0 *arg0) {
    u8 idx;
    idx = arg0->unk_10->unk_06;
    if (arg0->unk_10->unk_00[idx].unk_64) {
        func_001E7270(arg0, idx, 0, 0, 0);
        arg0->unk_10->unk_05--;
    }
}
