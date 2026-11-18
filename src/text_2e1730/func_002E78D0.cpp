#include "common.h"

typedef void (*unk_func_002E78D0_fn)(void *);

typedef struct unk_func_002E78D0_0 {
    unk_func_002E78D0_fn (**unk_00)(u16);
    u8 pad_04[0xC];
    u32 unk_10;
    u8 pad_14[0x10];
    u8 *unk_24;
    u8 pad_28[4];
    u32 unk_2C;
    u8 pad_30[0x30];
} unk_func_002E78D0_0;

typedef struct unk_func_002E78D0_1 {
    u8 pad_00[0x24];
    u8 unk_24[0x14];
    u8 unk_38[4];
    u8 unk_3C;
} unk_func_002E78D0_1;

class unk_func_002E78D0_3 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28(unk_func_002E78D0_1 *);
};

extern "C" {

void func_002DFC90(...);
u8 *func_002F2390(...);
s32 func_002E5E40(...);
s32 func_002DFB00(...);
void func_002DFBF0(...);
void func_002DF6D0(...);
s32 func_002DF820(...);
}

extern "C" u8 func_002E78D0(unk_func_002E78D0_1 *arg0, unk_func_002E78D0_3 *arg1, s32 arg2) {
    unk_func_002E78D0_0 vm;
    u8 *p;

    func_002DFC90(&vm, arg0, arg0->unk_38);
    p = func_002F2390(arg0);
    if (func_002DFB00(&vm, p + 0x1C, func_002E5E40(p), arg0->unk_24, 0) == 0) {
        func_002DFBF0(&vm, -1);
        return 0;
    }
    func_002DF6D0(&vm, arg1);
    if (func_002DF820(&vm, arg2) == 0) {
        func_002DFBF0(&vm, -1);
        return 0;
    }
    for (;;) {
        if (vm.unk_10 >= vm.unk_2C) {
            break;
        }
        vm.unk_00[0](*(u16 *)(vm.unk_24 + vm.unk_10))(&vm);
        if (vm.unk_10 & 3) {
            vm.unk_10 += 4 - (vm.unk_10 & 3);
        }
    }
    arg0->unk_3C = 1;
    arg1->unk_28(arg0);
    {
        u8 r = arg0->unk_3C;
        func_002DFBF0(&vm, -1);
        return r;
    }
}
