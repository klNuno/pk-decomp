#include "common.h"

typedef struct unk_func_0030E6E0_0 {
    u8 pad_00[0x10];
    struct unk_func_0030E6E0_0 *unk_10;
} unk_func_0030E6E0_0;

extern "C" {
unk_func_0030E6E0_0 *func_002D2BC0(...);
void func_00308B80(...);
void func_00308BE0(...);
unk_func_0030E6E0_0 *func_0030E010(...);
extern s32 D_00360890;
extern u8 D_00360898;
extern unk_func_0030E6E0_0 *D_003608A0;
extern s32 D_003608A8;

unk_func_0030E6E0_0 *func_0030E6E0(s32 arg0, s32 arg1);
}

inline void func_0030E6E0_lock() {
    if (D_003608A8 != 0) {
        func_00308BE0(D_003608A8);
    }
}

inline void func_0030E6E0_unlock() {
    if (D_003608A8 != 0) {
        func_00308B80(D_003608A8);
    }
}

unk_func_0030E6E0_0 *func_0030E6E0(s32 arg0, s32 arg1) {
    bool flag;
    bool fresh;
    unk_func_0030E6E0_0 *p;

    flag = !D_00360898;
    func_0030E6E0_lock();
    fresh = D_003608A0 == NULL || flag;
    func_0030E6E0_unlock();
    if (fresh) {
        p = func_002D2BC0(0x38);
        D_00360890++;
    } else {
        func_0030E6E0_lock();
        p = D_003608A0;
        D_003608A0 = p->unk_10;
        func_0030E6E0_unlock();
    }
    if (p != NULL) {
        p = func_0030E010(p, arg0, arg1);
    }
    return p;
}
