#include "common.h"

typedef struct unk_func_002E4D50_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E4D50_0;

void func_002EA580(void *, unk_func_002E4D50_0 *);
void func_002D0DA0(void *, void *);
u8 func_002EA240(void *);
void func_002DC050(unk_func_002E4D50_0 *, void *);
void func_002CD230(void *, void *, void *);
void func_002CD690(void *, void *, s32, s32);
void c4sdk_malloc(void *, s32);
void func_002E9CC0(void *, void *);

void func_002E4D50(unk_func_002E4D50_0 *arg0) {
    s32 temp0[5];
    s32 temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    u8 temp8;

    func_002EA580(temp0, arg0);
    func_002D0DA0(&temp1, &temp5);
    func_002D0DA0(&temp2, &temp6);
    func_002D0DA0(&temp3, &temp7);
    arg0->unk_10 += 4;
    temp8 = func_002EA240(temp0);
    func_002DC050(arg0, &temp1);
    func_002DC050(arg0, &temp2);
    if (temp8) {
        func_002CD230(&temp4, &temp1, &temp2);
        func_002CD690(&temp3, &temp4, 0, -1);
        c4sdk_malloc(&temp4, 0);
        func_002E9CC0(temp0, &temp3);
    }
    c4sdk_malloc(&temp3, 0);
    c4sdk_malloc(&temp2, 0);
    c4sdk_malloc(&temp1, 0);
}
