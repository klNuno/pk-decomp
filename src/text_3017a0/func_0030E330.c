#include "common.h"

typedef struct unk_func_0030E330_1 {
    void *unk_00;
    s32 unk_04;
} unk_func_0030E330_1;

typedef struct unk_func_0030E330_0 {
    unk_func_0030E330_1 *unk_00;
    void *unk_04;
    u8 unk_08[0x1000];
    s32 unk_1008;
    s32 unk_100C;
    u8 unk_1010[1];
} unk_func_0030E330_0;

void func_00304B00(unk_func_0030E330_0 *);
void func_0030C380(void *, s32);
void func_0031E6A8(s32);
void func_0031ECD0(s32, void *, s32);
extern u8 D_0035EFF0[];
extern u8 D_0035F000[];
extern u8 D_0035F170[];
extern u8 D_0035F188[];

unk_func_0030E330_0 *func_0030E330(unk_func_0030E330_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = D_0035F170;
        arg0->unk_00->unk_00 = D_0035F188;
        arg0->unk_00->unk_04 = arg0->unk_1010 - (u8 *)arg0->unk_00;
        if (arg0->unk_100C >= 0) {
            if (arg0->unk_1008 != 0) {
                func_0031ECD0(arg0->unk_100C, arg0->unk_08, arg0->unk_1008);
                arg0->unk_1008 = 0;
            }
            func_0031E6A8(arg0->unk_100C);
        }
        if (arg0 != NULL) {
            arg0->unk_04 = D_0035EFF0;
            arg0->unk_00->unk_00 = D_0035F000;
            arg0->unk_00->unk_04 = arg0->unk_08 - (u8 *)arg0->unk_00;
        }
        if (arg1) {
            func_0030C380(arg0->unk_1010, 0);
        }
        if ((s16)arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
