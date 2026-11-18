#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E2D70_0;

void func_002DCB20(unk_func_002E2D70_0 *, s32 *);
void func_002DB430(unk_func_002E2D70_0 *, u8 *);

void func_002E2D70(unk_func_002E2D70_0 *arg0) {
    s32 temp;
    u8 temp2;
    s32 temp3;

    temp3 = arg0->unk_10;
    arg0->unk_10 = temp3 + 4;
    func_002DCB20(arg0, &temp);
    func_002DB430(arg0, &temp2);
    if (temp2 != 0) {
        arg0->unk_10 = temp3 + temp;
    }
}
