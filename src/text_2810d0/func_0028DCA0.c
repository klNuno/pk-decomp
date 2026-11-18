#include "common.h"

typedef struct unk_func_0028DCA0_0 {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028DCA0_0;

extern unk_func_0028DCA0_0 D_007B8460[];
extern unk_func_0028DCA0_0 D_007B8464[];

void func_0028DCA0(s32 arg0, f32 arg1, f32 arg2) {
    D_007B8460[arg0].unk_00 = arg1;
    D_007B8464[arg0].unk_00 = arg2;
}
