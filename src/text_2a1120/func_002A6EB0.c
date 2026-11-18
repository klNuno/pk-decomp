#include "common.h"

typedef struct unk_func_002A6EB0_0 {
    u8 pad_00[0x6120];
    __int128 unk_6120[1];
} unk_func_002A6EB0_0;

extern unk_func_002A6EB0_0 D_007B2370;
extern u8 D_007B8488[];
void func_0029D9A0();

void func_002A6EB0(s32 arg0, __int128 *arg1) {
    __int128 *temp = &D_007B2370.unk_6120[arg0];

    *temp = *arg1;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, temp);
    }
}
