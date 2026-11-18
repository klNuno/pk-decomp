#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} unk_func_002A4690_0;

void func_002BE400();

void func_002A4690(unk_func_002A4690_0 *arg0) {
    func_002BE400(arg0->unk_10, arg0->unk_00, arg0->unk_08, arg0->unk_14, arg0->unk_18, arg0->unk_1C);
}
