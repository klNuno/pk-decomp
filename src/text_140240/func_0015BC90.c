#include "common.h"

typedef struct unk_func_0015BC90_0 {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    u8 pad_08[0xFC];
} unk_func_0015BC90_0;

typedef struct unk_func_0015BC90_1 {
    u8 unk_00;
    u8 pad_01[0x20B];
    unk_func_0015BC90_0 unk_20C[2];
} unk_func_0015BC90_1;

void *HMU_fn_p_vMalloc(s32, s32);
void func_0015BEB0();
s32 func_0015E9F0(s32, s16, s32);
s32 func_0015ECA0(s32, s32);
void *memset(void *, s32, u32);
extern unk_func_0015BC90_1 D_003678B0;
extern u8 D_003678B4[];
extern u8 D_00368AFC[];
extern u8 D_00368BFD[];
extern s16 D_00368C28[];
extern void *D_00368C2C[];

void func_0015BC90(s16 arg0, s32 arg1, s32 arg2) {
    s32 n;
    s32 v;
    s32 i;

    func_0015BEB0();
    D_00368C28[0] = arg0;
    n = arg0 * 6;
    D_00368C2C[0] = HMU_fn_p_vMalloc(n, 0);
    memset(D_00368C2C[0], 0, n);
    memset(D_00368AFC, 0, 0x100);
    memset(D_003678B4, 0, 0x1248);
    memset(D_00368BFD, 0, 9);
    D_003678B0.unk_00 = 0;
    if (func_0015ECA0(arg1, arg2) != 0) {
        D_003678B0.unk_00 = 1;
        for (i = 0; i < 2; i++) {
            v = func_0015E9F0(0x10, i, 2);
            if (v != 0) {
                D_003678B0.unk_20C[i].unk_04 = v;
                D_003678B0.unk_20C[i].unk_00 = 1;
            }
        }
    }
}
