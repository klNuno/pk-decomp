#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x2C];
} unk_func_002F6780_0;

typedef struct {
    u8 pad_00[0x18];
} unk_func_002F6780_1;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002F6780_2;

class unk_func_002F6780_3 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(unk_func_002F6780_0 *, s32);
};

extern "C" {
void c4sdk_malloc(...);
void func_002CDB60(...);
void func_002EA670(...);
void func_002EA6F0(...);
void func_00309650(...);
void func_00309700(...);
void func_00309C60(...);
void func_00309DC0(...);

s32 func_002F6780(unk_func_002F6780_3 *arg0, unk_func_002F6780_2 **arg1, s32 arg2) {
    unk_func_002F6780_0 a;
    unk_func_002F6780_1 b;
    s32 c;
    s32 d;

    func_00309DC0(&a, 1);
    func_00309700(&a, (*arg1)->unk_0C, 0);
    func_002CDB60(&c, (*arg1)->unk_0C, &d);
    func_002EA6F0(&b, 0, &c, a.unk_00, 0);
    c4sdk_malloc(&c, 0);
    arg0->unk_vf10(&a, arg2);
    func_00309650(&a);
    func_002EA670(&b, -1);
    func_00309C60(&a, -1);
    return 1;
}
}
