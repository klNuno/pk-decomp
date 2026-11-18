#include "common.h"

typedef struct unk_func_00138850_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00138850_0;

s32 func_00138680(void);
extern s32 D_0035F930;

unk_func_00138850_0 *func_00138850(unk_func_00138850_0 *arg0) {
    s32 temp;

    if (((arg0->unk_0C & 4) ? 1 : 0) == 0) {
        temp = func_00138680();
        if (temp != D_0035F930) {
            D_0035F930 = temp;
        }
    }
    return arg0;
}
