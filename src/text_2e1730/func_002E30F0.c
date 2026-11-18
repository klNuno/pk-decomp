#include "common.h"

typedef struct {
    u8 pad_00[0x18];
} unk_func_002E30F0_0;

void func_002DE7C0();
u8 func_002DE0A0();
void func_002DC6D0();
void func_002DE050(void *, f32);

void func_002E30F0(u8 *arg0) {
    unk_func_002E30F0_0 sp20;
    f32 sp38;
    f32 sp3C;
    u8 temp;

    func_002DE7C0(&sp20, arg0);
    *(s32 *)(arg0 + 0x10) += 4;
    temp = func_002DE0A0(&sp20, &sp38);
    func_002DC6D0(arg0, &sp3C);
    if (temp) {
        func_002DE050(&sp20, sp38 + sp3C);
    }
}
