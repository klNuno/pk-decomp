#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002ADDB0_0;

void func_002AD610(unk_func_002ADDB0_0 *);

void func_002ADDB0(f32 arg0, f32 arg1) {
    unk_func_002ADDB0_0 sp10;
    sp10.unk_00 = arg0;
    sp10.unk_04 = arg1;
    sp10.unk_08 = 0.0f;
    sp10.unk_0C = 1.0f;
    func_002AD610(&sp10);
}
