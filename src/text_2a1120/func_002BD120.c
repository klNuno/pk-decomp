#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[0x1A];
} unk_func_002BD120_1;

typedef struct {
    u8 pad_00[0x398];
    unk_func_002BD120_1 unk_398[0x200];
} unk_func_002BD120_0;

extern unk_func_002BD120_0 D_007B2370;

u8 func_002BD120(s32 arg0, u32 *arg1, u8 *arg2) {
    u8 ok;
    s32 i;
    u32 id;

    ok = 1;
    for (i = 0; i < arg0; i++) {
        id = *arg1++;
        if (id < 0x200) {
            ok = ok && (*arg2 = D_007B2370.unk_398[id].unk_01 && D_007B2370.unk_398[id].unk_00);
        }
        arg2++;
    }
    return ok;
}
