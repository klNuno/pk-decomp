#include "common.h"

typedef struct unk_func_002CE540_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002CE540_0;

typedef struct unk_func_002CE540_1 {
    u32 unk_00;
    s32 unk_04;
} unk_func_002CE540_1;

typedef struct unk_func_002CE540_2 {
    void *unk_00;
    s32 unk_04;
} unk_func_002CE540_2;

extern "C" {
unk_func_002CE540_0 *func_002CE530(void *);
unk_func_002CE540_0 **func_002CE610(unk_func_002CE540_0 **, unk_func_002CE540_0 *);
unk_func_002CE540_0 **func_002CEA70(unk_func_002CE540_0 **, void *, u32 *);
void func_002CEDD0(unk_func_002CE540_2 *, void *, unk_func_002CE540_1 *);

}

extern "C" bool func_002CE540(void *arg0, u32 arg1, s32 arg2) {
    unk_func_002CE540_2 sp70;
    unk_func_002CE540_1 sp78;
    unk_func_002CE540_0 *sp84;
    unk_func_002CE540_0 *sp88;
    u32 sp8C;
    bool ret = false;
    s32 val;
    unk_func_002CE540_0 *it;

    if (arg1 != 0 && arg2 != 0) {
        sp8C = arg1;
        val = 0;
        func_002CEA70(&sp88, arg0, &sp8C);
        it = sp88;
        func_002CE610(&sp84, func_002CE530(arg0));
        if (it != sp84) {
            val = it->unk_10;
        }
        if (val == 0) {
            sp78.unk_00 = arg1;
            sp78.unk_04 = arg2;
            func_002CEDD0(&sp70, arg0, &sp78);
            ret = true;
        }
    }
    return ret;
}
