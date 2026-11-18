#include "common.h"

typedef struct unk_func_002F9900_0 {
    s32 unk_00;
    u8 pad_04[0x1C];
} unk_func_002F9900_0;

typedef struct unk_func_002F9900_1 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002F9900_1;

class unk_func_002F9900_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual s32 unk_vf10(s32, s32);
};

extern "C" {
void func_00308FD0(unk_func_002F9900_0 *, s32);
bool func_00308E70(unk_func_002F9900_0 *, s32);
void func_00308EC0(unk_func_002F9900_0 *, s32);
void func_0011CBB0(...);
extern char D_0035C7E0[];
extern char D_0035C820[];

s32 func_002F9900(unk_func_002F9900_2 *arg0, unk_func_002F9900_1 **arg1, s32 arg2) {
    unk_func_002F9900_0 sp40;
    char sp60[0x800];
    char sp860[0x800];

    func_00308FD0(&sp40, 1);
    if (func_00308E70(&sp40, (*arg1)->unk_0C) == 0) {
        func_0011CBB0(sp60, D_0035C7E0, (*arg1)->unk_0C);
        func_00308EC0(&sp40, -1);
        return 0;
    }
    if (arg0->unk_vf10(sp40.unk_00, arg2) == 0) {
        func_0011CBB0(sp860, D_0035C820, (*arg1)->unk_0C);
        func_00308EC0(&sp40, -1);
        return 0;
    }
    func_00308EC0(&sp40, -1);
    return 1;
}
}
