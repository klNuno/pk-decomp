#include "common.h"

typedef struct unk_func_002DFF80_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002DFF80_0;

void func_002DE7C0(unk_func_002DFF80_0 *, s32);
s32 func_002DE470(unk_func_002DFF80_0 *);
void func_002DE050(unk_func_002DFF80_0 *, f32);
f32 func_00114D70(f32);

void func_002DFF80(s32 arg0, f32 *arg1) {
    unk_func_002DFF80_0 sp20;

    func_002DE7C0(&sp20, arg0);
    if (func_002DE470(&sp20) != 0) {
        func_002DE050(&sp20, func_00114D70(*arg1));
    }
}
