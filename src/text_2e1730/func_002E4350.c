#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E4350_0;

typedef struct {
    u8 pad_00[0x18];
} unk_func_002E4350_1;

void func_002DE7C0(unk_func_002E4350_1 *, unk_func_002E4350_0 *);
u8 func_002DE470(unk_func_002E4350_1 *);
void func_002DB850(unk_func_002E4350_0 *, u8 *);
void func_002DE050(unk_func_002E4350_1 *, f32);

void func_002E4350(unk_func_002E4350_0 *arg0) {
    unk_func_002E4350_1 sp20;
    u8 sp3F;
    u8 temp;

    func_002DE7C0(&sp20, arg0);
    arg0->unk_10 += 4;
    temp = func_002DE470(&sp20);
    func_002DB850(arg0, &sp3F);
    if (temp) {
        func_002DE050(&sp20, (u32)sp3F);
    }
}
