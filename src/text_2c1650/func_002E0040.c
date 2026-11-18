#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002E0040_0;

f32 func_00114EA0(f32);
u32 func_001273A8(f32);
void func_002DE050(unk_func_002E0040_0 *, f32);
s32 func_002DE470(unk_func_002E0040_0 *);
void func_002DE7C0(unk_func_002E0040_0 *, void *);

void func_002E0040(void *arg0, f32 *arg1) {
    unk_func_002E0040_0 sp20;

    func_002DE7C0(&sp20, arg0);
    if (func_002DE470(&sp20) != 0) {
        func_002DE050(&sp20, (f32)func_001273A8(func_00114EA0(*arg1)));
    }
}
