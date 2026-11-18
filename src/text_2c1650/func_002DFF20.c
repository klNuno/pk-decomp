#include "common.h"

typedef struct {
    u8 pad_00[0xC];
} unk_func_002DFF20_0;

void func_002DE7C0();
s32 func_002DE470();
f32 func_00115110(f32);
void func_002DE050(void *, f32);

void func_002DFF20(s32 arg0, f32 *arg1) {
    unk_func_002DFF20_0 temp;

    func_002DE7C0(&temp, arg0);
    if (func_002DE470(&temp) != 0) {
        func_002DE050(&temp, func_00115110(*arg1));
    }
}
