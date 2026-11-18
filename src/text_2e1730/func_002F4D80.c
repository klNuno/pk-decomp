#include "common.h"

void *__register_global_object(void *, void *, void *);
void func_002CDB60(void *, void *, void *);
s32 func_002F4BF0(void);
s32 func_002F4060(s32, void *, s32, s32, s32, s32, s32);
s32 func_002F42C0(void);
void func_002CD2A0();
extern u8 D_0035C310[];
extern s32 D_003606D4;
extern s8 D_003606D8;
extern s32 D_003606DC;
extern u8 D_007BEF98[];

s32 func_002F4D80(void) {
    s32 sp3C;
    s32 temp_s0;
    void *temp_s1;

    if (D_003606D8 == 0) {
        temp_s1 = __register_global_object(&D_003606D4, func_002CD2A0, D_007BEF98);
        func_002CDB60(temp_s1, D_0035C310, &sp3C);
        temp_s0 = func_002F42C0();
        D_003606DC = func_002F4060(temp_s0, temp_s1, func_002F4BF0(), 0xC, 1, 0, 0);
        D_003606D8 = 1;
    }
    return D_003606DC;
}
