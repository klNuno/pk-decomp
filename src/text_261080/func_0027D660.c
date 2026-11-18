/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0027D660_0 {
    s32 unk_00;
    u8 pad_04[4];
    s32 unk_08;
    void *unk_0C;
} unk_func_0027D660_0;

s32 func_0010D8E0();
s32 func_001DA0C0(s32);
void func_001DA2B0(s32);
void func_001DA2D0(s32, void *, s32);
void func_001DA550(s32, s32, s32);
s32 func_001DA5E0(s32);
s32 func_001DA600(s32);
void *malloc(s32);
void *memset(void *, s32, s32);
extern unk_func_0027D660_0 D_0033FD30[];
extern s32 D_003603B0[2];
extern u8 D_007AEB80[];

s32 func_0027D660(void) {
    s32 i;
    s32 fd;
    s32 size;
    s32 j;

    if (func_0010D8E0() != 0) {
        return 0;
    }
    for (i = 0; i < 3; i++) {
        D_0033FD30[i].unk_08 = 0;
    }
    for (i = 0; i < 3; i++) {
        fd = func_001DA600(func_001DA0C0(D_0033FD30[i].unk_00));
        if (fd >= 0) {
            size = func_001DA5E0(fd);
            func_001DA550(fd, 0, 0);
            D_0033FD30[i].unk_0C = malloc(size);
            if (D_0033FD30[i].unk_0C != NULL) {
                D_0033FD30[i].unk_08 = size;
                func_001DA2D0(fd, (void *)D_0033FD30[i].unk_0C, size);
            }
            func_001DA2B0(fd);
        }
    }
    memset(D_007AEB80, 0, 0x40);
    for (j = 0; j < 2; j++) {
        D_003603B0[j] = 1;
    }
    return 1;
}
