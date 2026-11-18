#include "common.h"

class unk_func_002FE400_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(void *);
};

typedef struct unk_func_002FE400_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} unk_func_002FE400_1;

extern "C" {
void func_002CFEF0(u8 **);
void func_002FD1E0(void *, unk_func_002FE400_1 *);
s32 func_002FE4B0(void *);
void func_002FE4C0(u8 **, s32);
s32 *func_002FE4D0(void *);

void func_002FE400(u8 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    unk_func_002FE400_1 sp20;
    u8 *sp44;
    u8 *sp48;
    u8 *sp4C;
    sp20.unk_00 = arg1;
    sp20.unk_04 = arg2;
    sp20.unk_08 = arg3;
    sp20.unk_0C = arg4;
    sp20.unk_10 = arg5;
    sp20.unk_14 = arg6;
    func_002FD1E0(arg0 + 0x18, &sp20);
    func_002FE4C0(&sp48, *func_002FE4D0(arg0 + 0x34));
    sp44 = sp48;
    while (func_002FE4C0(&sp4C, func_002FE4B0(arg0 + 0x34)), sp44 != sp4C) {
        (*(unk_func_002FE400_0 **)(sp44 + 0xC))->unk_vf10(arg0);
        func_002CFEF0(&sp44);
    }
}
}
