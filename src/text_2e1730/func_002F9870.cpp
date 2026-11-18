#include "common.h"

extern "C" {
void func_002D2BB0(void *);
void func_003048F0(void *, void (*)());
void func_002F9BE0();
void func_002F9EF0(void *);

class unk_func_002F9870_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    s32 unk_04;
    u8 pad_08[0x14];
    u8 unk_1C[0x10];
    void *unk_2C;
    void *unk_30;
    void *unk_34;
};

void func_002F9870(unk_func_002F9870_0 *arg0) {
    if (arg0->unk_2C != NULL) {
        func_002D2BB0(arg0->unk_2C);
        arg0->unk_2C = NULL;
        arg0->unk_04 = 0;
    }
    if (arg0->unk_30 != NULL) {
        func_002D2BB0(arg0->unk_30);
        arg0->unk_30 = NULL;
    }
    if (arg0->unk_34 != NULL) {
        func_003048F0(arg0->unk_34, func_002F9BE0);
        arg0->unk_34 = NULL;
    }
    func_002F9EF0(arg0->unk_1C);
    arg0->unk_vf18();
}
}
