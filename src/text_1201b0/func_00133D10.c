#include "common.h"

typedef struct {
    u8 pad_0[0x4];
    s16 unk_4;
    u8 pad_6[0x2];
    s32 unk_8;
    s32 *unk_C;
} unk_func_00133D10_0;

void func_00133DC0();
void func_00161420();

void func_00133D10(unk_func_00133D10_0 **arg0) {
    s16 i;

    for (i = 0; i < (*arg0)->unk_4; i++) {
        func_00133DC0(&(*arg0)->unk_C[i]);
    }
    func_00161420(&(*arg0)->unk_8, 1);
    func_00161420(&(*arg0)->unk_C, 1);
    func_00161420(arg0, 1);
    func_00161420(&arg0, 1);
}
