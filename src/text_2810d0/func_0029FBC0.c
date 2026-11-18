#include "common.h"

typedef struct unk_func_0029FBC0_0 {
    u8 pad_00[0x6160];
    __int128 unk_6160[1];
} unk_func_0029FBC0_0;

extern unk_func_0029FBC0_0 D_007B2370;
extern u8 D_007B8488[];
void func_0029D9A0();

void func_0029FBC0(s32 arg0, __int128 *arg1) {
    __int128 *temp = &D_007B2370.unk_6160[arg0];

    *temp = *arg1;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, temp);
    }
}
