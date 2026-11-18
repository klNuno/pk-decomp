#include "common.h"

class unk_func_002FD3F0_3 {
public:
    u8 pad_00[0x30];
    virtual ~unk_func_002FD3F0_3();
};

class unk_func_002FD3F0_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(unk_func_002FD3F0_3 *);
};

typedef struct unk_func_002FD3F0_2 {
    u8 pad_00[0xC];
    unk_func_002FD3F0_1 *unk_0C;
} unk_func_002FD3F0_2;

typedef struct unk_func_002FD3F0_4 {
    unk_func_002FD3F0_2 *unk_00;
} unk_func_002FD3F0_4;

typedef struct unk_func_002FD3F0_0 {
    u8 pad_00[0xC];
    u8 unk_0C[4];
} unk_func_002FD3F0_0;

inline bool func_002FD3F0_ne(const unk_func_002FD3F0_4 &a, const unk_func_002FD3F0_4 &b) {
    return a.unk_00 != b.unk_00;
}

extern "C" {

void *func_002FD520(void *);
unk_func_002FD3F0_4 func_002FD510(void *);
unk_func_002FD3F0_4 func_002FD830(void *, unk_func_002FD3F0_3 **);
void func_002FD7B0(void *, unk_func_002FD3F0_3 **);
void **func_002FD500(unk_func_002FD3F0_0 *);
void *func_002FD4E0(unk_func_002FD3F0_0 *);
unk_func_002FD3F0_4 func_002FD4F0(void *);
void func_002CFEF0(unk_func_002FD3F0_4 *);

s32 func_002FD3F0(unk_func_002FD3F0_0 *arg0, unk_func_002FD3F0_3 *arg1) {
    unk_func_002FD3F0_4 it;
    unk_func_002FD3F0_2 *end;

    end = func_002FD510(func_002FD520(arg0->unk_0C)).unk_00;
    if (func_002FD830(arg0->unk_0C, &arg1).unk_00 == end) {
        return 0;
    }
    func_002FD7B0(arg0->unk_0C, &arg1);
    for (it = func_002FD4F0(*func_002FD500(arg0)); func_002FD3F0_ne(it, func_002FD4F0(func_002FD4E0(arg0))); func_002CFEF0(&it)) {
        it.unk_00->unk_0C->unk_vf0C(arg1);
    }
    delete arg1;
    return 1;
}

}
