#include "common.h"

typedef struct unk_func_002D3D80_1 {
    u8 pad_00[0x10];
    void *unk_10;
} unk_func_002D3D80_1;

typedef struct unk_func_002D3D80_0 {
    u8 pad_00[0x10];
    u8 unk_10[0x10];
    u8 unk_20[0x10];
} unk_func_002D3D80_0;

inline bool func_002D3D80_ne(unk_func_002D3D80_1 *const &a, unk_func_002D3D80_1 *const &b) {
    return a != b;
}

extern "C" {

unk_func_002D3D80_1 **func_002D3C50(unk_func_002D3D80_0 *);
unk_func_002D3D80_1 *func_002D0320(unk_func_002D3D80_0 *);
void func_002D2BD0(void *, s32);
void func_002CFEF0(unk_func_002D3D80_1 **);
void func_002D3EA0(unk_func_002D3D80_0 *);
void func_002D19F0(void *, s32);
void func_002D1B70(void *, s32);
void func_002D1CB0(unk_func_002D3D80_0 *, s32);
void func_00304B00(unk_func_002D3D80_0 *);

unk_func_002D3D80_0 *func_002D3D80(unk_func_002D3D80_0 *arg0, s16 arg1) {
    unk_func_002D3D80_1 *it;
    void *temp;

    if (arg0 != 0) {
        for (it = *func_002D3C50(arg0); func_002D3D80_ne(it, func_002D0320(arg0)); func_002CFEF0(&it)) {
            func_002D2BD0(it->unk_10, 1);
        }
        func_002D3EA0(arg0);
        if (arg0->unk_10 != 0) {
            temp = arg0->unk_20;
            if (temp != 0) {
                if (temp != 0) {
                    func_002D19F0(temp, 0);
                }
            }
            temp = arg0->unk_10;
            if (temp != 0) {
                if (temp != 0) {
                    func_002D1B70(temp, 0);
                }
            }
        }
        if (arg0 != 0) {
            if (arg0 != 0) {
                if (arg0 != 0) {
                    func_002D1CB0(arg0, -1);
                }
            }
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}

}
