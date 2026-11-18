#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} unk_func_0018AC80_0;

extern u32 D_0035FDE8;
extern s32 D_0035FDEC;
extern unk_func_0018AC80_0 *D_0035FDF0;
extern s32 D_0035FDF4;
extern unk_func_0018AC80_0 D_00405040[][0x8000];

unk_func_0018AC80_0 *func_0018AC80(s32 arg0, s32 *arg1) {
    u32 temp;
    u32 temp2;
    unk_func_0018AC80_0 *ret;

    temp = D_0035FDE8;
    temp2 = temp + arg0;
    if (temp2 > 0x8000) {
        return NULL;
    }
    ret = &D_00405040[D_0035FDEC][temp];
    D_0035FDE8 = temp2;
    *arg1 = arg0;
    D_0035FDF4 = arg0;
    D_0035FDF0 = ret;
    return ret;
}
