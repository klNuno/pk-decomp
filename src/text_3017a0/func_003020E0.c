#include "common.h"

typedef struct unk_func_003020E0_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_003020E0_0;

void func_003026D0();

void func_003020E0(void *arg0, s32 arg1) {
    unk_func_003020E0_0 sp18;
    func_003026D0(&sp18, (u8 *)arg0 + 8, &arg1);
}
