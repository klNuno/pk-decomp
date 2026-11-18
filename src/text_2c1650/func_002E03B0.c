#include "common.h"

typedef struct unk_func_002E03B0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002E03B0_0;

void func_002DE7C0(unk_func_002E03B0_0 *, s32);
s32 func_002DE470(unk_func_002E03B0_0 *);
void func_002DE050(unk_func_002E03B0_0 *, f32);

void func_002E03B0(s32 arg0, s32 *arg1) {
    unk_func_002E03B0_0 sp20;

    func_002DE7C0(&sp20, arg0);
    if (func_002DE470(&sp20) != 0) {
        func_002DE050(&sp20, *arg1);
    }
}
