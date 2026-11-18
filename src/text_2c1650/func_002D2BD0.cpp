#include "common.h"

class unk_func_002D2BD0_2 {
public:
    virtual void unk_vf08(s32);
};

typedef struct {
    u8 pad_00[0xC];
    unk_func_002D2BD0_2 *unk_0C;
} unk_func_002D2BD0_1;

typedef struct {
    unk_func_002D2BD0_1 *unk_00;
} unk_func_002D2BD0_4;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D2BD0_0;

extern "C" {
void c4sdk_malloc(void *, s32);
void func_002CFEF0(unk_func_002D2BD0_4 *);
void func_002D2CC0(unk_func_002D2BD0_0 *, s32);
unk_func_002D2BD0_1 *func_002D2D20(unk_func_002D2BD0_0 *);
void func_002D2D30(unk_func_002D2BD0_4 *, unk_func_002D2BD0_1 *);
unk_func_002D2BD0_1 **func_002D2D40(unk_func_002D2BD0_0 *);
void func_00304B00(void *);

unk_func_002D2BD0_0 *func_002D2BD0(unk_func_002D2BD0_0 *arg0, s32 arg1) {
    unk_func_002D2BD0_4 it;
    unk_func_002D2BD0_4 a;
    unk_func_002D2BD0_4 b;
    unk_func_002D2BD0_2 *o;

    if (arg0 != 0) {
        func_002D2D30(&a, *func_002D2D40(arg0));
        it = a;
        while (func_002D2D30(&b, func_002D2D20(arg0)), it.unk_00 != b.unk_00) {
            o = it.unk_00->unk_0C;
            if (o != 0) {
                o->unk_vf08(1);
            }
            func_002CFEF0(&it);
        }
        if (&arg0->unk_10 != 0) {
            c4sdk_malloc(&arg0->unk_10, 0);
        }
        if (arg0 != 0) {
            if (arg0 != 0) {
                if (arg0 != 0) {
                    func_002D2CC0(arg0, -1);
                }
            }
        }
        if ((s16)arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
}
