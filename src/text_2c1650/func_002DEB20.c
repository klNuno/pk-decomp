#include "common.h"

typedef struct unk_func_002DEB20_0 {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002DEB20_0;

extern u8 D_0035E5A0[];
extern u8 D_0035E590[];

unk_func_002DEB20_0 *func_002DEB20(unk_func_002DEB20_0 *arg0) {
    arg0->unk_00 = D_0035E5A0;
    arg0->unk_00 = D_0035E590;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    return arg0;
}
