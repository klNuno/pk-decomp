#include "common.h"

typedef struct unk_func_0028D310_0 {
    u8 pad_00[0x6010];
    __int128 unk_6010[1];
} unk_func_0028D310_0;

extern unk_func_0028D310_0 D_007B2370;
extern s32 D_007B8370[];

void func_0028D310(u32 arg0, __int128 *arg1) {
    if (arg0 < 0x3000 || arg0 >= D_007B8370[0] + 0x3000) {
        return;
    }
    *arg1 = *(__int128 *)((u8 *)&D_007B2370 + (arg0 - 0x3000) * 16 + 0x6010);
}
