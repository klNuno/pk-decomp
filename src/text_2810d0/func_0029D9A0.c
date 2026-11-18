#include "common.h"

void func_0029D7A0(s32);
extern u32 D_007B2360[];
extern __int128 *D_007B8060[];
extern u8 *D_007B8064[];
extern s32 *D_007B8068[];

void func_0029D9A0(u8 arg0, s32 arg1, __int128 *arg2) {
    if (D_007B2360[0] >= 0x100) {
        func_0029D7A0(0);
    }
    {
        u8 *a = D_007B8064[0];
        D_007B8064[0] = a + 1;
        *a = arg0;
    }
    {
        s32 *b = D_007B8068[0];
        D_007B8068[0] = b + 1;
        *b = arg1;
    }
    {
        __int128 *c = D_007B8060[0];
        D_007B8060[0] = c + 1;
        *c = *arg2;
    }
    D_007B2360[0]++;
}
