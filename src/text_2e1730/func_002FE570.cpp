#include "common.h"

extern "C" {

class unk_func_002FE570_2 {
public:
    virtual void unk_vf08(void *);
};

typedef struct {
    u8 pad_00[0xC];
    unk_func_002FE570_2 *unk_0C;
} unk_func_002FE570_1;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x28];
    u8 unk_34[4];
} unk_func_002FE570_0;

s32 *func_002FE4D0(void *);
s32 func_002FE4B0(void *);
void func_002FE4C0(unk_func_002FE570_1 **, s32);
void func_002CFEF0(unk_func_002FE570_1 **);

void func_002FE570(unk_func_002FE570_0 *arg0, f32 arg1, f32 arg2, f32 arg3) {
    unk_func_002FE570_1 *it;
    unk_func_002FE570_1 *tmp;
    unk_func_002FE570_1 *end;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = arg3;
    func_002FE4C0(&tmp, *func_002FE4D0(arg0->unk_34));
    for (it = tmp; func_002FE4C0(&end, func_002FE4B0(arg0->unk_34)), it != end; func_002CFEF0(&it)) {
        it->unk_0C->unk_vf08(arg0);
    }
}

}
