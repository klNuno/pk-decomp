#include "common.h"

class unk_func_002DEA50_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14(s32);
    u8 pad_04[0xC];
};

typedef struct {
    void *unk_00;
    unk_func_002DEA50_0 *unk_04;
    u8 *unk_08;
} unk_func_002DEA50_1;

extern "C" {
void func_002D2BB0(void *);
u32 *func_002DE980(u8 *);
void func_00304B00(...);
extern u8 D_0035E590[];

unk_func_002DEA50_1 *func_002DEA50(unk_func_002DEA50_1 *arg0, s16 arg1) {
    u32 i;
    u32 n;

    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E590;
        n = *func_002DE980(arg0->unk_08 + 0x60);
        for (i = 0; i < n; i++) {
            arg0->unk_04[i].unk_vf14(-1);
        }
        func_002D2BB0(arg0->unk_04);
        arg0->unk_04 = 0;
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
}
