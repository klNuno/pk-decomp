#include "common.h"

typedef struct unk_func_0028ADD0_0 {
    u32 unk_00_0 : 12;
    u32 unk_00_12 : 11;
    u32 unk_00_23 : 9;
    u8 pad_04[0xC];
} unk_func_0028ADD0_0;

extern unk_func_0028ADD0_0 D_007B0418;
extern unk_func_0028ADD0_0 D_007B041C;
extern unk_func_0028ADD0_0 D_007B0440;
extern unk_func_0028ADD0_0 D_007B0444;
extern unk_func_0028ADD0_0 D_007B0740;
extern unk_func_0028ADD0_0 D_007B0744;
extern unk_func_0028ADD0_0 D_007B0748;
extern unk_func_0028ADD0_0 D_007B074C;
extern u8 D_007B0775[];

void func_0028ADD0(s32 arg0, s32 arg1) {
    switch (arg0) {
    case 0xF43:
        D_007B0740.unk_00_0 = D_007B0748.unk_00_0 = D_007B0418.unk_00_0 = D_007B0440.unk_00_0 = arg1;
        break;
    case 0xF44:
        D_007B0740.unk_00_12 = D_007B0748.unk_00_12 = D_007B0418.unk_00_12 = D_007B0440.unk_00_12 = arg1;
        break;
    case 0xF45:
        D_007B0744.unk_00_0 = D_007B074C.unk_00_0 = D_007B041C.unk_00_0 = D_007B0444.unk_00_0 = arg1;
        break;
    case 0xF46:
        D_007B0744.unk_00_12 = D_007B074C.unk_00_12 = D_007B041C.unk_00_12 = D_007B0444.unk_00_12 = arg1;
        if (D_007B0775[0] != 0 && D_007B041C.unk_00_12 != 0) {
            D_007B041C.unk_00_12--;
            D_007B0444.unk_00_12--;
        }
        break;
    }
}
