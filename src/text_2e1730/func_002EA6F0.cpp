#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 unk_04;
    u8 pad_05[0x3];
    s32 unk_08;
    s32 unk_0C;
} unk_func_002EA6F0_0;

class unk_func_002EA6F0_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(unk_func_002EA6F0_0 *);
};

extern "C" {
void func_002CDC10(...);
unk_func_002EA6F0_1 *func_002EA780(...);

unk_func_002EA6F0_0 *func_002EA6F0(unk_func_002EA6F0_0 *volatile arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_002CDC10(arg0, arg2);
    arg0->unk_04 = arg1;
    arg0->unk_08 = arg3;
    arg0->unk_0C = arg4;
    func_002EA780()->unk_vf10(arg0);
    return arg0;
}
}
