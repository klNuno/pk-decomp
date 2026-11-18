#include "common.h"

typedef struct unk_func_00309190_1 {
    void *unk_00;
    s32 unk_04;
} unk_func_00309190_1;

typedef struct unk_func_00309190_0 {
    unk_func_00309190_1 *unk_00;
    void *unk_04;
    s32 unk_08;
    void *unk_0C;
} unk_func_00309190_0;

extern u8 D_0035F120[];
extern u8 D_0035E9A0[];
extern u8 D_0035E9B4[];
extern u8 D_0035F020[];
extern u8 D_0035F03C[];

unk_func_00309190_0 *func_00309190(unk_func_00309190_0 *arg0, s16 arg1) {
    if (arg1 != 0) {
        arg0->unk_00 = (unk_func_00309190_1 *)&arg0->unk_0C;
        arg0->unk_0C = D_0035F120;
    }
    arg0->unk_04 = D_0035E9A0;
    arg0->unk_00->unk_00 = D_0035E9B4;
    arg0->unk_00->unk_04 = (u8 *)&arg0->unk_08 - (u8 *)arg0->unk_00;
    arg0->unk_04 = D_0035F020;
    arg0->unk_00->unk_00 = D_0035F03C;
    arg0->unk_00->unk_04 = (u8 *)&arg0->unk_0C - (u8 *)arg0->unk_00;
    arg0->unk_08 = 0;
    return arg0;
}
