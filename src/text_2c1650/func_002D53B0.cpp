#include "common.h"

class unk_func_002D53B0_0 {
public:
    s32 unk_00;
};

class unk_func_002D53B0_3 {
public:
    s32 unk_00;
    bool operator!=(s32 v) const { return unk_00 != v; }
};

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D53B0_1;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    unk_func_002D53B0_1 *unk_0C;
} unk_func_002D53B0_2;

extern "C" {
s32 func_002D51B0(unk_func_002D53B0_2 *);
unk_func_002D53B0_3 *func_002D5220(unk_func_002D53B0_2 *);
unk_func_002D53B0_0 *func_002D5440(s32 *);
void func_002D5580(unk_func_002D53B0_2 *, unk_func_002D53B0_0);
void func_002D5AE0(s32, s32);

void func_002D53B0(unk_func_002D53B0_2 *arg0);
}

void func_002D53B0(unk_func_002D53B0_2 *arg0) {
    s32 i;
    s32 a;

    for (i = 0; (a = func_002D51B0(arg0), *func_002D5220(arg0) != a) && i < 30000; i++) {
        func_002D5AE0(arg0->unk_0C->unk_10, 1);
        {
            unk_func_002D53B0_0 t;
            t = *func_002D5440(&arg0->unk_08);
            func_002D5580(arg0, t);
        }
    }
}
