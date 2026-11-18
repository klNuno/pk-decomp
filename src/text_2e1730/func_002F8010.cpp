#include "common.h"

class unk_func_002F8010_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
};

class unk_func_002F8010_1 : public unk_func_002F8010_0 {
public:
    u8 pad_04[0x1C];
    s32 unk_20;
    u8 pad_24[0x40];
    s32 unk_64;
};

typedef struct unk_func_002F8010_2 {
    u8 pad_00[0x54];
    s32 unk_54;
} unk_func_002F8010_2;

extern "C" {
extern u8 D_0035E8C0[];

void func_002FCB20(unk_func_002F8010_1 *);

unk_func_002F8010_1 *func_002F8010(unk_func_002F8010_1 *volatile arg0, unk_func_002F8010_2 *arg1) {
    func_002FCB20(arg0);
    *(void **)arg0 = D_0035E8C0;
    arg0->unk_64 = 0;
    arg0->unk_20 = arg1->unk_54;
    arg0->unk_vf18();
    return arg0;
}
}
