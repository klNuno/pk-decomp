#include "common.h"

typedef struct unk_func_0015C190_0 {
    u8 pad_00[0x18];
    s32 unk_18;
} unk_func_0015C190_0;

typedef struct unk_func_0015C190_1 {
    unk_func_0015C190_0 *unk_00[16];
    u8 pad_40[0xC4];
} unk_func_0015C190_1;

extern unk_func_0015C190_1 D_00367B20[];
extern unk_func_0015C190_1 D_00367B60[];

s32 func_0015C190(u8 arg0, u8 arg1) {
    unk_func_0015C190_0 *a = D_00367B20[arg0].unk_00[arg1];
    unk_func_0015C190_0 *b = D_00367B60[arg0].unk_00[arg1];
    s32 ret;

    if (a != NULL && b != NULL) {
        ret = (u8)(((a->unk_18 == 1 && b->unk_18 <= 0) || (a->unk_18 <= 0 && b->unk_18 == 1)) ? 1 : 0);
    } else if (a != NULL) {
        ret = (a->unk_18 == 1) ? 1 : 0;
    } else if (b != NULL) {
        ret = (b->unk_18 == 1) ? 1 : 0;
    } else {
        ret = 0;
    }
    return ret;
}
