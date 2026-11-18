#include "common.h"

class unk_func_002FFE50_2 {
public:
    virtual void unk_vf08(s32);
};

typedef struct unk_func_002FFE50_1 {
    u8 pad_00[0x10];
    unk_func_002FFE50_2 *unk_10;
} unk_func_002FFE50_1;

typedef struct unk_func_002FFE50_0 {
    void *unk_00;
    u8 unk_04[0xC];
} unk_func_002FFE50_0;

class unk_func_002FFE50_3 {
public:
    unk_func_002FFE50_1 *unk_00;
    bool operator!=(unk_func_002FFE50_1 *const &o) const { return unk_00 != o; }
};

extern "C" {
void func_002CFEF0(unk_func_002FFE50_3 *);
void func_002D2BB0(unk_func_002FFE50_0 *);
void func_002FFCB0(void *, s32);
unk_func_002FFE50_1 *func_002FFE40(void *);
unk_func_002FFE50_1 **func_002FFF20(void *);
extern u8 D_0035EBE0[];

unk_func_002FFE50_0 *func_002FFE50(unk_func_002FFE50_0 *arg0, s32 arg1) {
    unk_func_002FFE50_3 it;
    void *p;

    if (arg0 != 0) {
        arg0->unk_00 = D_0035EBE0;
        it.unk_00 = *func_002FFF20(arg0->unk_04);
        while (it != func_002FFE40(arg0->unk_04)) {
            if (it.unk_00->unk_10 != 0) {
                it.unk_00->unk_10->unk_vf08(1);
            }
            func_002CFEF0(&it);
        }
        p = arg0->unk_04;
        if (p != 0) {
            if (p != 0) {
                if (p != 0) {
                    func_002FFCB0(p, -1);
                }
            }
        }
        if ((s16)arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
