#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
} unk_func_0030E420_0;

typedef struct {
    unk_func_0030E420_0 *unk_00;
    void *unk_04;
    u8 unk_08[0x1004];
    s32 unk_100C;
    void *unk_1010;
} unk_func_0030E420_1;

extern u8 D_0035EFF0[];
extern u8 D_0035F000[];
extern u8 D_0035F120[];
extern u8 D_0035F170[];
extern u8 D_0035F188[];

unk_func_0030E420_1 *func_0030E420(unk_func_0030E420_1 *arg0, s32 arg1) {
    if ((s16)arg1 != 0) {
        arg0->unk_00 = (unk_func_0030E420_0 *)&arg0->unk_1010;
        arg0->unk_1010 = D_0035F120;
    }
    arg0->unk_04 = D_0035EFF0;
    arg0->unk_00->unk_00 = D_0035F000;
    arg0->unk_00->unk_04 = arg0->unk_08 - (u8 *)arg0->unk_00;
    arg0->unk_04 = D_0035F170;
    arg0->unk_00->unk_00 = D_0035F188;
    arg0->unk_00->unk_04 = (u8 *)&arg0->unk_1010 - (u8 *)arg0->unk_00;
    arg0->unk_100C = -1;
    return arg0;
}
