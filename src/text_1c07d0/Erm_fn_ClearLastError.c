/* profile: opt */
#include "common.h"

typedef struct unk_Erm_fn_ClearLastError_0 {
    u16 unk_00;
    u8 pad_02[0x6];
    s32 unk_08;
    u8 pad_0C[0x8];
} unk_Erm_fn_ClearLastError_0;

extern unk_Erm_fn_ClearLastError_0 D_005FF200[];
extern u8 D_0034C6C0[];
extern u8 D_0034C7C0[];
extern u8 D_0034C7F0[];
void func_001DB8C0();

void Erm_fn_ClearLastError(s32 arg0) {
    u8 i;
    u8 k;
    u8 j;

    for (k = 0; k < 3 && D_005FF200[k].unk_00 != 0 && arg0 != D_005FF200[k].unk_08; k++) {
    }
    i = k;
    if (i < 3 && D_005FF200[i].unk_00 != 0) {
        D_005FF200[i].unk_00 = 0;
        D_005FF200[i].unk_08 = 0;
        func_001DB8C0(D_0034C7C0, D_0034C6C0);
        j = i + 1;
        if (j < 3 && D_005FF200[j].unk_00 != 0) {
            for (; j < 3 && D_005FF200[j].unk_00 != 0; j++) {
                D_005FF200[j - 1] = D_005FF200[j];
                D_005FF200[j].unk_00 = 0;
                D_005FF200[j].unk_08 = 0;
            }
        }
    } else {
        func_001DB8C0(D_0034C7F0, D_0034C6C0);
    }
}
