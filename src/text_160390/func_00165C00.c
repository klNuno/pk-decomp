#include "common.h"

typedef struct unk_func_00165C00_0 {
    u8 pad_00[0xC4];
    s8 unk_C4;
} unk_func_00165C00_0;

extern s32 D_0035FAB8;
extern s32 D_0035FABC;
extern unk_func_00165C00_0 *D_0036A050[];

void func_00165C00(s32 arg0) {
    s32 i;

    D_0035FAB8 = arg0 ? 0 : 1;
    for (i = 0; i < D_0035FABC; i++) {
        D_0036A050[i]->unk_C4 = arg0;
    }
}
