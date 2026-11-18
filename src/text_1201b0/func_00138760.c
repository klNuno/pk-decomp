#include "common.h"

typedef struct unk_func_00138760_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x158];
    s32 unk_168;
} unk_func_00138760_0;

s32 func_00138680(void);
extern s32 D_0035F934;

s32 func_00138760(unk_func_00138760_0 *arg0) {
    s32 temp;

    if (((arg0->unk_0C & 0x4000) ? 1 : 0) == 0) {
        temp = func_00138680();
        if (temp != D_0035F934) {
            D_0035F934 = temp;
        }
    }
    return arg0->unk_168;
}
