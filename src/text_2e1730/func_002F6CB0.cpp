#include "common.h"

class unk_func_002F6CB0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14(void *);
};

typedef struct unk_func_002F6CB0_3 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002F6CB0_3;

typedef struct unk_func_002F6CB0_2 {
    u8 pad_00[0x18];
    s32 unk_18;
    u8 pad_1C[0x4];
    unk_func_002F6CB0_3 *unk_20;
    u8 pad_24[0x4];
    unk_func_002F6CB0_0 *unk_28;
} unk_func_002F6CB0_2;

typedef struct unk_func_002F6CB0_1 {
    u8 pad_00[0x10];
    unk_func_002F6CB0_2 *unk_10;
} unk_func_002F6CB0_1;

inline bool func_002F6CB0_ne(unk_func_002F6CB0_1 *const &a, unk_func_002F6CB0_1 *const &b) {
    return a != b;
}

extern "C" {

void func_00309DC0(void *, s32);
unk_func_002F6CB0_1 **func_002F6DB0(void *);
unk_func_002F6CB0_1 *func_002F6DA0(void *);
void func_00309700(void *, s32, s32);
void func_00309BC0(void *, s32, s32);
void func_002CFEF0(unk_func_002F6CB0_1 **);
void func_00309650(void *);
void func_002F7090(void *);
void func_00309C60(void *, s32);
extern u8 D_007BF080[];

void func_002F6CB0(void) {
    u8 temp[0x2C];
    unk_func_002F6CB0_1 *it;

    func_00309DC0(temp, 1);
    it = *func_002F6DB0(D_007BF080);
    if (func_002F6CB0_ne(it, func_002F6DA0(D_007BF080))) {
        func_00309700(temp, it->unk_10->unk_20->unk_0C, 1);
        for (it = *func_002F6DB0(D_007BF080); func_002F6CB0_ne(it, func_002F6DA0(D_007BF080)); func_002CFEF0(&it)) {
            func_00309BC0(temp, it->unk_10->unk_18, 0);
            it->unk_10->unk_28->unk_vf14(temp);
        }
        func_00309650(temp);
    }
    func_002F7090(D_007BF080);
    func_00309C60(temp, -1);
}

}
