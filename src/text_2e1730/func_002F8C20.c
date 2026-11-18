#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
} unk_func_002F8C20_0;

typedef struct {
    unk_func_002F8C20_0 *unk_00;
    void *unk_04;
    u8 unk_08[4];
} unk_func_002F8C20_1;

void func_00304B00(void *);
void func_0030C380(void *, s32);
extern u8 D_0035E9A0[];
extern u8 D_0035E9B4[];

unk_func_002F8C20_1 *func_002F8C20(unk_func_002F8C20_1 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = D_0035E9A0;
        arg0->unk_00->unk_00 = D_0035E9B4;
        arg0->unk_00->unk_04 = arg0->unk_08 - (u8 *)arg0->unk_00;
        if (arg1 != 0) {
            func_0030C380(arg0->unk_08, 0);
        }
        if ((s16)arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
