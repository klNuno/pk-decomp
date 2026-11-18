#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E3E20_0;

typedef struct {
    u8 pad_00[0x18];
} unk_func_002E3E20_1;

void func_002DC6D0(unk_func_002E3E20_0 *, f32 *);
void func_002DE050(unk_func_002E3E20_1 *, f32);
u8 func_002DE470(unk_func_002E3E20_1 *);
void func_002DE7C0(unk_func_002E3E20_1 *, unk_func_002E3E20_0 *);

void func_002E3E20(unk_func_002E3E20_0 *arg0) {
    unk_func_002E3E20_1 sp30;
    f32 sp48;
    f32 sp4C;
    u8 temp_s0;

    func_002DE7C0(&sp30, arg0);
    arg0->unk_10 += 4;
    temp_s0 = func_002DE470(&sp30);
    func_002DC6D0(arg0, &sp48);
    func_002DC6D0(arg0, &sp4C);
    if (temp_s0) {
        if (sp4C != 0.0f) {
            func_002DE050(&sp30, sp48 / sp4C);
        } else {
            func_002DE050(&sp30, 1e30f);
        }
    }
}
