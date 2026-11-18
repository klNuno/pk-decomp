/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00316690_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00316690_1;

typedef struct {
    u8 pad_00[0x4];
    unk_func_00316690_1 unk_04;
} unk_func_00316690_2;

void func_00316690(unk_func_00316690_2 *arg0, unk_func_00316690_0 *arg1) {
    unk_func_00316690_0 temp;
    unk_func_00316690_1 *p;

    temp = *arg1;
    p = (unk_func_00316690_1 *)&temp;
    arg0->unk_04.unk_00 = p->unk_00;
    arg0->unk_04.unk_04 = p->unk_04;
    arg0->unk_04.unk_08 = p->unk_08;
}
