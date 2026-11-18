#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00166B80_0;

typedef struct {
    u8 pad_00[0x14];
    unk_func_00166B80_0 unk_14;
} unk_func_00166B80_1;

void func_001765B0();

void func_00166B80(unk_func_00166B80_1 *arg0, unk_func_00166B80_0 *arg1) {
    func_001765B0();
    arg0->unk_14 = *arg1;
}
