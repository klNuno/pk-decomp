#include "common.h"

class unk_func_00314220_0 {
public:
    u8 pad_00[0x1C];
    s32 unk_1C;
    u8 pad_20[0x40];
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18(s32, s32);
};

extern "C" {
extern u8 D_0035F7C8;

u8 func_00314220(unk_func_00314220_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0->unk_1C == 0) {
        arg0->unk_vf18(arg2, arg3);
    }
    return D_0035F7C8;
}
}
