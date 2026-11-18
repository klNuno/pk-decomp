#include "common.h"

class unk_func_00302260_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(void *);
};

typedef struct unk_func_00302260_1 {
    u8 pad_00[0xC];
    unk_func_00302260_0 *unk_0C;
} unk_func_00302260_1;

extern "C" {
s32 *func_003021C0(...);
void func_003021B0(...);
s32 func_003021A0(...);
void func_002CFEF0(...);
void c4sdk_malloc(...);
void func_00302350(...);
void func_002D2BB0(...);
extern u8 D_0035ED10[];

u8 *func_00302260(u8 *arg0, s16 arg1);
}

u8 *func_00302260(u8 *arg0, s16 arg1) {
    unk_func_00302260_1 *sp34;
    unk_func_00302260_1 *sp38;
    unk_func_00302260_1 *sp3C;

    if (arg0 != NULL) {
        *(u8 **)arg0 = D_0035ED10;
        func_003021B0(&sp38, *func_003021C0(arg0 + 8));
        sp34 = sp38;
        while (func_003021B0(&sp3C, func_003021A0(arg0 + 8)), sp34 != sp3C) {
            sp34->unk_0C->unk_vf0C(arg0);
            func_002CFEF0(&sp34);
        }
        if (arg0 + 0x14 != NULL) {
            c4sdk_malloc(arg0 + 0x14, 0);
        }
        if (arg0 + 8 != NULL) {
            if (arg0 + 8 != NULL) {
                if (arg0 + 8 != NULL) {
                    func_00302350(arg0 + 8, -1);
                }
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
