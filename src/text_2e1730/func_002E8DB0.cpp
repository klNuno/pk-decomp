#include "common.h"

class unk_func_002E8DB0_1 {
public:
    u8 *unk_00;
    bool operator==(const unk_func_002E8DB0_1 &o) const { return unk_00 == o.unk_00; }
};

typedef struct unk_func_002E8DB0_0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x4];
    u8 *unk_0C;
} unk_func_002E8DB0_0;

extern "C" {
void func_002CFEF0(unk_func_002E8DB0_1 *);
void func_002D2BB0(u8 *);
void func_002D4240(u8 *, s32);
unk_func_002E8DB0_1 *func_002E8E50(void *);
void func_00307FF0(void *, s32);

void func_002E8DB0(unk_func_002E8DB0_0 *arg0, unk_func_002E8DB0_1 arg1) {
    u8 *node = arg1.unk_00;

    if (arg1 == *func_002E8E50(&arg0->pad_08)) {
        func_002CFEF0(&arg1);
        arg0->unk_0C = arg1.unk_00;
    }
    func_002D4240(node, arg0->unk_04);
    if (node + 0xC != NULL) {
        func_00307FF0(node + 0x10, -1);
    }
    func_002D2BB0(node);
    arg0->unk_00--;
}
}
