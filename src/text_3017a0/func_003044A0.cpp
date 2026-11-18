/* profile: opt_300 */
#include "common.h"

class unk_func_003044A0_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(void *, s32, s32);
};

extern "C" {
s32 func_0011D3F8(char *);
void func_002D3AD0(void *, char *, s32);
extern char D_007BF3A0[];

void func_003044A0(unk_func_003044A0_0 *arg0, void *arg1) {
    s32 sp3C;

    arg0->unk_vf0C(&sp3C, 1, 4);
    arg0->unk_vf0C(D_007BF3A0, 1, sp3C);
    D_007BF3A0[sp3C] = 0;
    func_002D3AD0(arg1, D_007BF3A0, func_0011D3F8(D_007BF3A0));
}
}
