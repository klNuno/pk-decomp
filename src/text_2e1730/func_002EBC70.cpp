#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
    s32 unk_08;
} unk_func_002EBC70_1;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002EBC70_2;

extern "C" {
class unk_func_002EBC70_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    u8 unk_04[4];
    u8 unk_08[4];
};

void func_003020E0(...);
void func_002EC150(...);

void func_002EBC70(unk_func_002EBC70_0 *arg0, s32 arg1, f32 arg2) {
    unk_func_002EBC70_2 sp48;
    unk_func_002EBC70_1 sp50;

    func_003020E0(arg1, arg0);
    sp50.unk_00 = arg1;
    sp50.unk_04 = arg2;
    sp50.unk_08 = arg1;
    func_002EC150(&sp48, arg0->unk_08, &sp50);
    arg0->unk_vf1C();
}
}
