#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[0xD0];
    u8 unk_E0[4];
} unk_func_00139980_0;

void func_00152040();
void func_00153920();
void func_00148060();

void func_00139980(unk_func_00139980_0 *arg0, u8 *arg1) {
    s32 mtx[0x18];
    u8 *m;

    if ((arg0->unk_0C & 0x80 ? 1 : 0) == 0) {
        m = arg0->unk_E0;
        func_00152040(mtx, 5, arg1, arg1 + 0xC, arg1 + 0x18, 0);
        func_00153920(m, m, mtx);
        if ((arg0->unk_0C & 4 ? 1 : 0) != 0) {
            func_00148060(arg0);
        }
    }
}
