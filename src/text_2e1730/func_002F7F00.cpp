#include "common.h"

extern "C" {
class unk_func_002F7F00_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual s32 unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual void unk_vf24();
    virtual void unk_vf28();
    virtual void unk_vf2C();
    virtual void unk_vf30();
    virtual void unk_vf34();
    virtual void unk_vf38(s32, f32);
};

typedef struct unk_func_002F7F00_2 {
    u8 pad_00[0x1C];
    f32 unk_1C;
} unk_func_002F7F00_2;

typedef struct unk_func_002F7F00_0 {
    u8 pad_00[0x14];
    f32 unk_14;
    u8 pad_18[4];
    s32 unk_1C;
    unk_func_002F7F00_1 *unk_20;
} unk_func_002F7F00_0;

void func_002FC4D0(unk_func_002F7F00_0 *, f32);
unk_func_002F7F00_2 *func_002F2390(unk_func_002F7F00_0 *);

s32 func_002F7F00(unk_func_002F7F00_0 *arg0) {
    if (arg0->unk_20 == NULL) {
        return 0;
    }
    arg0->unk_1C = arg0->unk_20->unk_vf10();
    if (arg0->unk_1C != 0) {
        func_002FC4D0(arg0, arg0->unk_14);
        arg0->unk_20->unk_vf38(arg0->unk_1C, func_002F2390(arg0)->unk_1C);
    }
    return arg0->unk_1C;
}
}
